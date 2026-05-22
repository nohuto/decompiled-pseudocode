/*
 * XREFs of ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C13C4
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800241E0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 */

void __fastcall MPCSixDofProcessor::PopulateDownLevelInfo(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  int v4; // ebx
  char v5; // bp
  __int64 v6; // rcx
  char v7; // bp
  __int64 v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-10h]

  v4 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCButtonHoldHelper ***)this + 520),
    *((_BYTE *)this + 10802),
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  v5 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 520), &v12) + 10LL);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v5 )
  {
    v4 = 1;
  }
  else
  {
    v6 = *((_QWORD *)this + 520);
    if ( *(_BYTE *)(v6 + 13) )
    {
      v4 = 7;
    }
    else
    {
      v7 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(v6, &v12) + 12LL);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      if ( v7 )
      {
        v4 = 2;
      }
      else if ( *((_DWORD *)a2 + 17) == 6 )
      {
        v4 = 4;
      }
    }
  }
  v8 = 3LL;
  v9 = (_OWORD *)((char *)this + 3680);
  v10 = (_OWORD *)((char *)a2 + 240);
  do
  {
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v9[5] = v10[5];
    v9[6] = v10[6];
    v9 += 8;
    v11 = v10[7];
    v10 += 8;
    *(v9 - 1) = v11;
    --v8;
  }
  while ( v8 );
  *v9 = *v10;
  v9[1] = v10[1];
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v10, (__int64)a2, v4);
}
