/*
 * XREFs of ?evaluate@_tip_SwitchToRemoteTipTest@@QEAAXXZ @ 0x180653DF8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x180653990 (-evaluate@-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SwitchToRemoteTipTest::evaluate(_tip_SwitchToRemoteTipTest *this, const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  char v5; // r9
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // r8
  tip2::details *v11; // rax
  __int64 v12; // r8
  char v13; // r9

  if ( !*((_QWORD *)this + 4) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::systemIdNotFound", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    if ( !*((_BYTE *)this + 85) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::serviceCrashed", a2);
      v4 = *(_QWORD *)(v8 + 8);
      if ( *(_BYTE *)(v4 + 152) == v9 )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_5;
      }
      return;
    }
LABEL_13:
    v10 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v10 + 56) & 0x200) != 0 )
    {
      v11 = tip2::details::reason_string((tip2::details *)"reason::switchDeliveredSuccessfully", a2);
      if ( *(_BYTE *)(v12 + 152) == v13 )
      {
        *(_BYTE *)(v12 + 152) = 1;
        *(_WORD *)(v12 + 154) = 4;
        *(_QWORD *)(v12 + 160) = v11;
      }
    }
    else if ( !*(_BYTE *)(v10 + 152) )
    {
      *(_BYTE *)(v10 + 152) = 3;
      *(_WORD *)(v10 + 154) = 16385;
      *(_QWORD *)(v10 + 160) = 0LL;
    }
    return;
  }
  if ( *((_BYTE *)this + 84) )
    goto LABEL_13;
  v2 = tip2::details::reason_string((tip2::details *)"reason:: remoteSystemNotFound", a2);
  v4 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v4 + 152) == v7 )
  {
    *(_WORD *)(v4 + 154) = 2;
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
  }
}
