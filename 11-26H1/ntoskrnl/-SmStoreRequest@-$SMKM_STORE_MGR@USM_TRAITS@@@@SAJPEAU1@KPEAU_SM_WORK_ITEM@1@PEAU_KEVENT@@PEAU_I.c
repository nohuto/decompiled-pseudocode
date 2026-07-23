/*
 * XREFs of ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404D1A9C
 * Callers:
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x1402D2520 (SmKmStoreReference.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404D1B14 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int16 v7; // di
  __int64 v9; // rax
  int v10; // ecx
  int v11; // ebx

  v7 = a2;
  v9 = SmKmStoreReference(a1, a2);
  if ( v9 )
  {
    v11 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v10, v9, a3, a4, a5);
    if ( v11 < 0 )
      SmKmStoreDereference(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
