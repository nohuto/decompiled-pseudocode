/*
 * XREFs of ?ndisBindInitialize@@YAJXZ @ 0x140191868
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x14014DEA4 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x14016A4B0 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x140191918 (-ndisBindBuilderInitialize@@YAJXZ.c)
 */

__int64 ndisBindInitialize(void)
{
  __int64 result; // rax
  KPushLock *PoolWithTag; // rax
  KPushLock *v2; // rcx
  KPushLock *v3; // rdx
  _QWORD *v4; // rdx

  result = ndisBindBuilderInitialize();
  if ( !(_DWORD)result )
  {
    PoolWithTag = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6762444Eu);
    if ( PoolWithTag )
    {
      PoolWithTag->m_Lock.Value = 0LL;
      PoolWithTag[1].m_Lock.Value = 0LL;
      PoolWithTag[2].m_Lock.Value = 0LL;
      KPushLock::KPushLock(PoolWithTag);
      KPushLock::KPushLock(v2 + 1);
      KPushLock::KPushLock(v3 + 2);
      v4[3] = 0LL;
      result = 0LL;
      v4[4] = 0LL;
      v4[5] = 0LL;
      v4[6] = 0LL;
      qword_14011F6D8 = (__int64)v4;
    }
    else
    {
      qword_14011F6D8 = 0LL;
      ndisBindBuilderCleanup();
      return 3221225626LL;
    }
  }
  return result;
}
