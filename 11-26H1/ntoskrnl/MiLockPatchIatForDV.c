/*
 * XREFs of MiLockPatchIatForDV @ 0x1406FAF50
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     IopAllocateMdl @ 0x14039EBE0 (IopAllocateMdl.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1406FBA88 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareDriverPatchState @ 0x140864420 (MiPrepareDriverPatchState.c)
 *     MiInitializeDriverPatchState @ 0x140B3E6F8 (MiInitializeDriverPatchState.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall MiLockPatchIatForDV(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 Pool2; // rax
  int v8; // ebx
  __int64 v9; // r12
  char *AnyMultiplexedVm; // rax
  __int64 v11; // r9
  __int64 *v12; // rsi
  __int64 Mdl; // rax
  unsigned int v14; // r9d
  __int64 v15; // r8
  PVOID v16; // rax
  _QWORD *v17; // rcx
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h]

  v2 = 0LL;
  v19 = 0;
  v20 = 0;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 0xCu, &v19);
  if ( v5 && (v6 = v19, v19 >= 8) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v2 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v8 = -1073741670;
      goto LABEL_20;
    }
    v9 = Pool2 + 16;
    MiInitializeDriverPatchState(a1, Pool2 + 16);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v8 = MiPrepareDriverPatchState(v9, AnyMultiplexedVm);
    if ( v8 >= 0 )
    {
      if ( (MiFlags & 0x20000) != 0 )
      {
        v20 = 1;
        v12 = v2 + 15;
      }
      else
      {
        Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), 0, v11, 0LL, 0);
        v12 = v2 + 15;
        v2[15] = Mdl;
        if ( !Mdl )
          goto LABEL_4;
        v14 = 0;
        if ( ((*(unsigned int *)(Mdl + 40) + (*(_DWORD *)(Mdl + 32) & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          v15 = 0LL;
          do
          {
            ++v14;
            *(_QWORD *)(Mdl + 8 * v15 + 48) = qword_140E35FF8;
            v15 = v14;
          }
          while ( v14 < (*(unsigned int *)(*v12 + 40) + (*(_DWORD *)(*v12 + 32) & 0xFFFuLL) + 4095) >> 12 );
        }
      }
      v8 = MiLockDriverPageRange(
             v9,
             (unsigned int)(v5 - *(_DWORD *)(a1 + 48)) >> 12,
             ((unsigned int)(v5 - *(_DWORD *)(a1 + 48)) >> 12)
           + ((v6 + 4095 + (unsigned __int64)(v5 & 0xFFF)) >> 12)
           - 1,
             v20,
             *v12);
      if ( v8 >= 0 )
      {
        if ( *v12 )
        {
          v16 = MmMapLockedPagesSpecifyCache((PMDL)*v12, 0, MmCached, 0LL, 0, 0x40000010u);
          if ( !v16 )
            goto LABEL_4;
          v5 += (__int64)v16 - *(_QWORD *)(a1 + 48);
        }
        v2[16] = v5;
        *((_DWORD *)v2 + 34) = v6;
        v17 = *(_QWORD **)(a2 + 64);
        if ( *v17 != a2 + 56 )
          __fastfail(3u);
        *v2 = a2 + 56;
        v2[1] = v17;
        *v17 = v2;
        *(_QWORD *)(a2 + 64) = v2;
        v2 = 0LL;
      }
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_20:
  *(_DWORD *)(a2 + 72) = v8;
  if ( v2 )
    MiUnlockAndFreeDvPatchImage(v2);
  return v8 >= 0;
}
