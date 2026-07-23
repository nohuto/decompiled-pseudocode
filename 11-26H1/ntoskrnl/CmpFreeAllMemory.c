/*
 * XREFs of CmpFreeAllMemory @ 0x14085A5F0
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpDumpKeyBodyList @ 0x140B24994 (CmpDumpKeyBodyList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // ebp
  __int64 NextActiveHive; // rbx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 i; // rdi
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v0 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v2 = *(_DWORD *)(NextActiveHive + 1656);
      v3 = 0;
      v4 = *(_QWORD *)(NextActiveHive + 1648);
      v8 = 0;
      if ( v2 > 0 )
      {
        v5 = (__int64 *)(v4 + 16);
        v6 = (unsigned int)v2;
        do
        {
          for ( i = *v5; i; i = *(_QWORD *)(i + 8) )
            CmpDumpKeyBodyList(i - 16, &v8, 0LL);
          v5 += 3;
          --v6;
        }
        while ( v6 );
        v3 = v8;
      }
      v0 += v3;
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive((PVOID)NextActiveHive);
      CmpDetachFromRegistryProcess(&ApcState);
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpKeyLockTracker.WaitListEntry.Flink, 0);
}
