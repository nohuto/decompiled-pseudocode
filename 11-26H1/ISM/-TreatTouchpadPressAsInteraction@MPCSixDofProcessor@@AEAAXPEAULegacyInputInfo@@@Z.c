/*
 * XREFs of ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C1884
 * Callers:
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801C02FC (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 */

void __fastcall MPCSixDofProcessor::TreatTouchpadPressAsInteraction(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2)
{
  _DWORD *v4; // rbx
  bool v5; // si
  char v6; // si
  char v7; // bl
  _QWORD *ButtonHoldHelper; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]

  v4 = (_DWORD *)((char *)a2 + 68);
  v5 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v10) + 10LL) && *v4 != 3;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v5 )
  {
    *v4 = 2;
  }
  else
  {
    v6 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v10) + 8LL);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( v6 )
    {
      *v4 = 3;
    }
    else
    {
      v7 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v10) + 12LL);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      if ( v7 )
        *((_DWORD *)a2 + 17) = 4;
    }
  }
  if ( *((_BYTE *)a2 + 2256) )
  {
    *((_BYTE *)a2 + 2256) = 1;
  }
  else
  {
    ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v10);
    v9 = v11;
    *((_BYTE *)a2 + 2256) = *(_BYTE *)(*ButtonHoldHelper + 8LL);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
}
