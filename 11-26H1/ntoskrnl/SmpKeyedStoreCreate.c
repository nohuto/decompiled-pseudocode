/*
 * XREFs of SmpKeyedStoreCreate @ 0x140966FB8
 * Callers:
 *     SmProcessCreateNotification @ 0x140966F58 (SmProcessCreateNotification.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     SmKmStoreDereference @ 0x140265B10 (SmKmStoreDereference.c)
 *     SmKmStoreGet @ 0x140354B70 (SmKmStoreGet.c)
 *     SmAllocEx @ 0x1403F5140 (SmAllocEx.c)
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14048EBAC (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SmpDirtyStoreCreate @ 0x140967114 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(struct _KTHREAD *a1, struct _SM_PARTITION *a2, __int64 a3)
{
  __int64 v6; // rdi
  _KPROCESS *v7; // rcx
  int v8; // ebx
  _OWORD v10[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v10, 0, sizeof(v10));
  v6 = 0LL;
  SmpGetProcessPartition(a3);
  KiStackAttachProcess(v7, 0, (__int64)v10);
  v8 = SmpDirtyStoreCreate(a2);
  KiUnstackDetachProcess((__int64)v10, 0);
  if ( v8 >= 0 )
  {
    v6 = SmAllocEx(24LL, 0x53506D73u, -1);
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = a3;
      *(_WORD *)(v6 + 16) = -1;
      if ( SmpKeyedStoreEntryGet(a1, (unsigned __int64 *)(v6 + 8), 1, 0LL) )
      {
        v6 = 0LL;
        v8 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  return (unsigned int)v8;
}
