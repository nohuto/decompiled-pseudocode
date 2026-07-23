/*
 * XREFs of EmpParseInfDatabase @ 0x140CBC420
 * Callers:
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpParseCallbacks @ 0x140CBC04C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140CBC29C (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140CBCFC8 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140CBD34C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140CBD7E8 (EmpParseTargetRules.c)
 *     CmpFreeLineList @ 0x140CBDEC4 (CmpFreeLineList.c)
 *     CmpParseInfBuffer @ 0x140CBE2F8 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  __int64 v10; // rax
  void **v11; // rdi
  int v12; // ebx
  void *v13; // rsi
  void *v14; // rbp
  void *v15; // rcx
  int v17; // [rsp+50h] [rbp+18h] BYREF

  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&EmpParseLock.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&EmpParseLock, v6, (__int64)&EmpParseLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v7, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  v17 = 0;
  v10 = CmpParseInfBuffer(a1, a2, &v17);
  v11 = (void **)v10;
  if ( v10 )
  {
    v12 = EmpParseEntryTypes(v10);
    if ( v12 >= 0 )
    {
      v12 = EmpParseCallbacks((__int64)v11);
      if ( v12 >= 0 )
      {
        v12 = EmpParseRules(v11);
        if ( v12 >= 0 )
        {
          v12 = EmpParseStrings(v11);
          if ( v12 >= 0 )
            v12 = EmpParseTargetRules(v11);
        }
      }
    }
    v13 = *v11;
    if ( *v11 )
    {
      do
      {
        v14 = *(void **)v13;
        if ( *((_BYTE *)v13 + 24) )
        {
          v15 = (void *)*((_QWORD *)v13 + 1);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
        }
        CmpFreeLineList(*((PVOID *)v13 + 2));
        ExFreePoolWithTag(v13, 0);
        v13 = v14;
      }
      while ( v14 );
    }
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v12 = -1073741816;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&EmpParseLock);
  return (unsigned int)v12;
}
