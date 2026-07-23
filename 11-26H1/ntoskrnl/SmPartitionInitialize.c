/*
 * XREFs of SmPartitionInitialize @ 0x14081F244
 * Callers:
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     SmFpInitialize @ 0x1404DC7CC (SmFpInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140640E84 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     SmKmVirtualLockCtxInitialize @ 0x1406432A4 (SmKmVirtualLockCtxInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall SmPartitionInitialize(__int64 a1)
{
  void *result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall *v4)(struct _EX_RUNDOWN_REF *, unsigned __int64 *, int); // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  memset_0((void *)a1, 0, 0xB80uLL);
  v3[0] = 123;
  v4 = SmpStoreMgrCallback;
  v3[1] = (unsigned __int16)KeNumberNodes;
  v5 = a1 + 2672;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, (__int64)v3);
  *(_QWORD *)(a1 + 2264) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 2288), NotificationEvent, 0);
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(a1 + 2368) = 0LL;
  *(_QWORD *)(a1 + 2376) = 0LL;
  *(_QWORD *)(a1 + 2344) = 0LL;
  *(_QWORD *)(a1 + 2360) = 0LL;
  *(_DWORD *)(a1 + 2356) = 0;
  *(_DWORD *)(a1 + 2384) = -1;
  *(_QWORD *)(a1 + 2392) = 0LL;
  *(_BYTE *)(a1 + 2312) = 5;
  *(_QWORD *)(a1 + 2400) = 0LL;
  SmKmVirtualLockCtxInitialize((_QWORD *)(a1 + 2408));
  SmFpInitialize(a1 + 2432, a1);
  SmFpInitialize(a1 + 2552, a1);
  result = memset_0((void *)(a1 + 2672), 0, 0x50uLL);
  *(_DWORD *)(a1 + 2256) = 3;
  return result;
}
