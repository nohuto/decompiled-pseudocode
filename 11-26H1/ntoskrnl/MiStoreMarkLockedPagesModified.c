/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x1404567CC
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // r15
  _QWORD *v5; // r12
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // ebx
  struct _KEVENT *v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 PteShadow; // rax
  _DWORD *v14; // rax
  _DWORD *SubsectionFromPte; // rax
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1 + 12;
  v2 = (a1[8] + a1[11]) & 0xFFF;
  v3 = (v2 + (unsigned int)a1[10] + 4095LL) >> 12;
  v4 = 0;
  v5 = &v1[v3];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = 2;
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, v2);
  }
  while ( v1 < v5 )
  {
    v7 = 48LL * *v1 - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v16[0] = *(_QWORD *)(v7 + 16);
    if ( (v16[0] & 8) != 0 )
    {
      *(_QWORD *)(v7 + 16) &= ~8uLL;
      PteShadow = v16[0];
      v2 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL )
      {
        v2 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v16, v16[0]);
      }
      v16[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
      v8 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    if ( (*(_BYTE *)(v7 + 34) & 0x10) == 0 )
    {
      v9 = *(_DWORD *)(v7 + 32);
      if ( *(__int64 *)(v7 + 40) < 0 )
      {
        v2 = 0x400000000000400LL;
        if ( (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
        {
          SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
            && (SubsectionFromPte[8] & 0x20000) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x8840uLL, v7, 0LL, 1uLL);
          }
        }
      }
      if ( *(__int64 *)(v7 + 40) < 0
        && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
      {
        v14 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) == 0 && (v14[38] & 1) == 0 )
          MiSetSubsectionModified(v14, 0LL);
      }
      if ( (v9 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v7)
        && (*(_QWORD *)(v7 + 16) & 8LL) != 0
        && (v9 & 0x100000) == 0 )
      {
        *(_QWORD *)(v7 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v7 + 32) = v9 | 0x100000;
    }
    v10 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
      MiReleasePageFileInfo(v10, v8, 1LL);
    ++v4;
    if ( CurrentIrql != 2 && (v4 & 0xF) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v11 = KeGetCurrentIrql();
      if ( (_BYTE)v11 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v2) = 2;
        KiRaiseIrqlProcessIrqlFlags(v11, v2);
      }
    }
    ++v1;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
