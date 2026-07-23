/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140641F60
 * Callers:
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     SmLogConsumedPoison @ 0x1404F7904 (SmLogConsumedPoison.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     SmEtwLogStoreCorruption @ 0x14064300C (SmEtwLogStoreCorruption.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageError(
        __int64 a1,
        ULONG_PTR a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v7 = a6;
  v11 = (unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((BYTE4(stru_140E27C48.InitialStack) & 0x40) != 0);
  if ( v11 && (*(_BYTE *)(a4 + 20) & 0x18) != 0x18 )
  {
    v15 = 0LL;
    if ( ((a6 + 1073740576) & 0xFFFFFFFD) != 0 )
    {
      if ( a6 == -1073741761 )
        BYTE1(v15) = 1;
    }
    else
    {
      BYTE1(v15) = 2;
    }
    SmEtwLogStoreCorruption(v11, (unsigned int)&stru_140E27C48.QuantumTarget, a1, a2, *(_WORD *)(a4 + 4), (__int64)&v15);
  }
  v12 = *(_DWORD *)(a1 + 824) & 3;
  if ( v12 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    if ( v7 == -1073740576 )
    {
      result = ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(a1, a2, a3, a4, a5);
      if ( (int)result >= 0 )
        return result;
    }
    else if ( v7 == -1073740574 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 2080));
      SmLogConsumedPoison(a2, *(unsigned __int16 *)(a4 + 4), 0LL);
    }
  }
  if ( v12 >= 3 )
  {
    v14 = -1073741116;
    if ( v7 != -1073740576 )
      v14 = v7;
    KeBugCheckEx(0x12Bu, v14, *(unsigned __int16 *)(a4 + 4), a2, (ULONG_PTR)a3);
  }
  return v7;
}
