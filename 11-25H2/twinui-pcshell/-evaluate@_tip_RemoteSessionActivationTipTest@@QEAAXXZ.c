/*
 * XREFs of ?evaluate@_tip_RemoteSessionActivationTipTest@@QEAAXXZ @ 0x180637880
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x1806376A0 (-evaluate@-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_RemoteSessionActivationTipTest::evaluate(
        _tip_RemoteSessionActivationTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  const char *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // r10
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  const char *v15; // rax
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // r9
  char v19; // r10

  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::registrationDataNotFound", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 2;
LABEL_26:
    *(_QWORD *)(v4 + 160) = v2;
    *(_BYTE *)(v4 + 152) = 3;
    return;
  }
  if ( *((_BYTE *)this + 18) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::failedToLaunchProviderApp", a2);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v8 + 152) == v9 )
    {
      *(_QWORD *)(v8 + 160) = v6;
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 3;
    }
    return;
  }
  if ( !*((_QWORD *)this + 9) || !*((_QWORD *)this + 5) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::invalidRemoteSystemAttributes", a2);
    v4 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v4 + 152) != v19 )
      return;
    *(_WORD *)(v4 + 154) = 4;
    goto LABEL_26;
  }
  if ( !*((_QWORD *)this + 13) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::remoteDesktopCreationFailed", a2);
    v4 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v4 + 152) != v11 )
      return;
    *(_WORD *)(v4 + 154) = 5;
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::remoteSessionAlreadyConnected", a2);
    v4 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v4 + 152) != v13 )
      return;
    *(_WORD *)(v4 + 154) = 6;
    goto LABEL_26;
  }
  v14 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v14 + 80) )
  {
    if ( *(_BYTE *)(v14 + 152) )
      return;
    *(_WORD *)(v14 + 154) = 0x4000;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v14 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v14 + 152) )
      return;
    *(_WORD *)(v14 + 154) = 16385;
LABEL_18:
    *(_BYTE *)(v14 + 152) = 3;
    *(_QWORD *)(v14 + 160) = 0LL;
    return;
  }
  v15 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
  if ( *(_BYTE *)(v16 + 152) == v17 )
  {
    *(_QWORD *)(v16 + 160) = v15;
    *(_BYTE *)(v16 + 152) = 1;
    *(_WORD *)(v16 + 154) = 1;
  }
}
