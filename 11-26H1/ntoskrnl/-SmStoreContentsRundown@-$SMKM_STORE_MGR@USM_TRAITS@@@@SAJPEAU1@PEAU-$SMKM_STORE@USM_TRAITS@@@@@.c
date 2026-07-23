/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140642980
 * Callers:
 *     SmEtwEnableCallback @ 0x140820670 (SmEtwEnableCallback.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404D1B14 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsi
  int v7; // edi
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 Object; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-18h] BYREF

  Object = 393216LL;
  v11[1] = v11;
  v11[0] = v11;
  v9 = 0LL;
  v4 = SmAllocEx(40LL, 0x64576D73u, -1);
  v6 = (void *)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)v4 = 3;
    *(_DWORD *)(v4 + 8) = -1;
    v7 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v5, a2, v4, (__int64)&Object, &v9);
    if ( v7 >= 0 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      return (unsigned int)v9;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a2 )
    SmKmStoreDereference(a1, *(_DWORD *)(a2 + 2464));
  return (unsigned int)v7;
}
