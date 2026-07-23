/*
 * XREFs of MiLockPatchIatForDV @ 0x1406FFC20
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140700758 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareDriverPatchState @ 0x14086A800 (MiPrepareDriverPatchState.c)
 *     MiInitializeDriverPatchState @ 0x140B405C8 (MiInitializeDriverPatchState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall MiLockPatchIatForDV(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char *v5; // r14
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
  char *v16; // rax
  _QWORD *v17; // rcx
  ULONG Size; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h]

  v2 = 0LL;
  Size = 0;
  v20 = 0;
  v5 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  if ( v5 && (v6 = Size, Size >= 8) )
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
            *(_QWORD *)(Mdl + 8 * v15 + 48) = qword_140E36178;
            v15 = v14;
          }
          while ( v14 < (*(unsigned int *)(*v12 + 40) + (*(_DWORD *)(*v12 + 32) & 0xFFFuLL) + 4095) >> 12 );
        }
      }
      v8 = MiLockDriverPageRange(
             v9,
             (unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 48)) >> 12,
             ((unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 48)) >> 12)
           + ((v6 + 4095 + (unsigned __int64)((unsigned __int16)v5 & 0xFFF)) >> 12)
           - 1,
             v20,
             *v12);
      if ( v8 >= 0 )
      {
        if ( *v12 )
        {
          v16 = (char *)MmMapLockedPagesSpecifyCache((PMDL)*v12, 0, MmCached, 0LL, 0, 0x40000010u);
          if ( !v16 )
            goto LABEL_4;
          v5 = &v16[(_QWORD)v5 - *(_QWORD *)(a1 + 48)];
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
