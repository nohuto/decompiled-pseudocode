/*
 * XREFs of SmpKeyedStoreCreate @ 0x140ADC25C
 * Callers:
 *     SmProcessCreateNotification @ 0x140ADC1FC (SmProcessCreateNotification.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     SmKmStoreGet @ 0x140356910 (SmKmStoreGet.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404886EC (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SmpDirtyStoreCreate @ 0x140ADC3B8 (SmpDirtyStoreCreate.c)
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
