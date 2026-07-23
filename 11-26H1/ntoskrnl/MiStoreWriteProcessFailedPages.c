/*
 * XREFs of MiStoreWriteProcessFailedPages @ 0x140402824
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiStoreWriteProcessFailedPages(__int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  unsigned __int64 updated; // rdi
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned int *v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // esi
  int v11; // edx
  int v12; // r11d
  unsigned int v13; // r9d
  __int64 v14; // r12
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  _QWORD *v17; // rdx
  __int64 i; // r8
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int8 CurrentIrql; // bp
  int v26; // ebx
  unsigned int v27; // edx
  _DWORD *v28; // rax
  _DWORD *SubsectionFromPte; // rax
  int v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+78h] [rbp+10h]
  __int64 v32; // [rsp+80h] [rbp+18h]

  result = a1[1];
  v3 = *a1;
  updated = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v31 = *a1;
  v5 = *(_QWORD *)(result + 64);
  v6 = a1[3];
  v32 = *(_QWORD *)(result + 72);
  if ( (*(_BYTE *)(v5 + 172) & 0x40) == 0 )
  {
    result = MiTransferSoftwarePte(*(__int64 *)&CLFS_LSN_NULL_EXT, v5, *((_DWORD *)a1 + 26), 1);
    updated = result;
  }
  LODWORD(v7) = -1;
  while ( *((_DWORD *)a1 + 24) )
  {
    v8 = *(unsigned int **)(v3 + 1512);
    v9 = v7 + 1;
    v10 = *v8;
    v11 = *v8 - 1;
    v12 = (v8[2] & 4) != 0LL ? 0x20 : 0;
    v13 = v9 < *v8 ? v9 : 0;
    v14 = *((_QWORD *)v8 + 1) - ((*((_QWORD *)v8 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v15 = v12 + v11;
      v30 = 0;
      v16 = v12 + v13;
      if ( v11 - v13 != -1 )
      {
        v17 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v16 >> 6));
        for ( i = ~*v17 | ((1LL << v16) - 1); i == -1; i = ~*v17 )
        {
          if ( (unsigned __int64)++v17 > v14 + 8 * ((unsigned __int64)v15 >> 6) )
            goto LABEL_31;
        }
        _BitScanForward64(&v19, ~i);
        v7 = ((unsigned int)(((__int64)v17 - v14) >> 3) << 6) + (unsigned int)v19;
        if ( (unsigned int)v7 <= v15 )
          break;
      }
LABEL_31:
      v7 = 0xFFFFFFFFLL;
LABEL_32:
      if ( !v13 )
        goto LABEL_14;
      v27 = v9 + 1;
      if ( v9 + 1 > v10 )
        v27 = v10;
      v11 = v27 - 1;
      v13 = 0;
    }
    if ( (_DWORD)v7 == -1 )
      goto LABEL_32;
    v7 = (unsigned int)(v7 - v12);
LABEL_14:
    --*((_DWORD *)a1 + 24);
    v3 = v31;
    v20 = (unsigned __int64)(unsigned int)v7 >> 3;
    v21 = *(_QWORD *)(*(_QWORD *)(v31 + 1512) + 8LL);
    v22 = (unsigned int)*(char *)(v20 + v21);
    LODWORD(v22) = v22 & ~(1 << (v7 & 7));
    *(_BYTE *)(v20 + v21) = v22;
    v23 = *(_QWORD *)(v6 + 8 * v7 + 48);
    if ( v23 == qword_140E361B8 )
    {
      updated = MiUpdatePageFileHighInPte(updated, (int)v7 + *((_DWORD *)a1 + 26));
      MiReleasePageFileInfo((struct _KEVENT *)v3, updated, 2LL);
      result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_QWORD *)(v32 + 8 * v7 + 96) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    else
    {
      v24 = 48 * v23 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v21) = 2;
        LOBYTE(v22) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v22, v21);
      }
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)(v24 + 24) < 0 );
      }
      v26 = *(_DWORD *)(v24 + 32);
      if ( *(__int64 *)(v24 + 40) < 0 && (*(_QWORD *)(v24 + 16) & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v24 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, v24, 0LL, 1uLL);
      }
      if ( *(__int64 *)(v24 + 40) < 0
        && (*(_DWORD *)(v24 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v24 + 24) & 0x4000000000000000LL) == 0 )
      {
        v28 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v24 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v28 + 56LL) & 0x20) == 0 && (v28[38] & 1) == 0 )
          MiSetSubsectionModified(v28, 0LL);
      }
      if ( (v26 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v24)
        && (v26 & 0x100000) == 0
        && (*(_DWORD *)(v24 + 16) & 8) != 0 )
      {
        *(_QWORD *)(v24 + 16) &= ~8uLL;
      }
      result = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v24 + 32) = v26 | 0x100000;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 = v31;
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  return result;
}
