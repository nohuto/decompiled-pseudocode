/*
 * XREFs of MiUnlockStoreLockedPages @ 0x1404006D4
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x14040060C (SmKmUnlockMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(_DWORD *a1, int a2)
{
  _QWORD *v2; // r14
  int v3; // ebx
  char v4; // r15
  unsigned __int64 v5; // r12
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v7; // rsi
  unsigned int v8; // eax
  unsigned __int64 v9; // rax
  struct _KEVENT *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  _DWORD *v14; // [rsp+50h] [rbp+8h]
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v14 = a1;
  v2 = a1 + 12;
  v3 = 16;
  v4 = 0;
  v5 = (unsigned __int64)&a1[2 * (((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12)
                           + 12];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  do
  {
    if ( *v2 == -1LL )
      break;
    v7 = 48LL * *v2 - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v8 = v3 & 0xFFFFFFFD;
    v3 |= 2u;
    if ( (*(_BYTE *)(v7 + 34) & 0x10) == 0 )
      v3 = v8;
    v9 = MiWriteCompletePfn(v7);
    if ( v9 )
      v10 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
    else
      v10 = 0LL;
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 )
      MiReleasePageFileInfo(v10, v9, 1LL);
    ++v4;
    if ( CurrentIrql != 2 && (v4 & 0xF) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v12 = KeGetCurrentIrql();
      if ( (_BYTE)v12 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        KiRaiseIrqlProcessIrqlFlags(v12, v11);
      }
    }
    ++v2;
  }
  while ( (unsigned __int64)v2 < v5 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_WORD *)v14 + 5) &= ~2u;
  return result;
}
