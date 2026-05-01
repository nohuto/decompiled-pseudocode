/*
 * XREFs of ?evaluate@_tip_DiscoverabilityManagerTipTest@@QEAAXXZ @ 0x1805F8BB4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805F8BA0 (-evaluate@-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_DiscoverabilityManagerTipTest::evaluate(_tip_DiscoverabilityManagerTipTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // r9
  char v9; // r10
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  char v15; // r10
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // r9
  char v21; // r10
  __int64 v22; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToInitializeComponent", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return;
    *(_WORD *)(v5 + 154) = v3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToGetAvailableDeviceInformation", a2);
    v5 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v5 + 152) == v7 )
    {
      *(_WORD *)(v5 + 154) = 1;
LABEL_4:
      *(_BYTE *)(v5 + 152) = 3;
LABEL_5:
      *(_QWORD *)(v5 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 18) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToSubscribeApplicationView", a2);
    v5 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v5 + 152) == v9 )
    {
      *(_WORD *)(v5 + 154) = 2;
      goto LABEL_4;
    }
  }
  else if ( *((_BYTE *)this + 19) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedGetViews", a2);
    v5 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v5 + 152) == v11 )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 3;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 20) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedGetViewCount", a2);
    v5 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v5 + 152) == v13 )
    {
      *(_WORD *)(v5 + 154) = 4;
      goto LABEL_4;
    }
  }
  else if ( *((_BYTE *)this + 21) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::ignoreIfMiracastNotAvailable", a2);
    v5 = *(_QWORD *)(v14 + 8);
    if ( *(_BYTE *)(v5 + 152) == v15 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 5;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 22) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::ignoreIfCampaignThresholdNotMet", a2);
    v5 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v5 + 152) == v17 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 6;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 23) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::succeedIfSubscribed", a2);
    v5 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v5 + 152) == v19 )
    {
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 7;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 24) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::succeedIfCampaignInvoked", a2);
    v5 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)(v5 + 152) == v21 )
    {
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 8;
      goto LABEL_5;
    }
  }
  else
  {
    v22 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v22 + 80) )
    {
      if ( *(_BYTE *)(v22 + 152) )
        return;
      *(_BYTE *)(v22 + 152) = 3;
      *(_WORD *)(v22 + 154) = 0x4000;
    }
    else if ( (*(_DWORD *)(v22 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v22 + 152) )
        return;
      *(_BYTE *)(v22 + 152) = 1;
      *(_WORD *)(v22 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v22 + 152) )
        return;
      *(_BYTE *)(v22 + 152) = 3;
      *(_WORD *)(v22 + 154) = 16385;
    }
    *(_QWORD *)(v22 + 160) = 0LL;
  }
}
