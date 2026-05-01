/*
 * XREFs of ?evaluate@_tip_LaunchRemoteSystemSettingsTipTest@@QEAAXXZ @ 0x18065D294
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x18065D1A0 (-evaluate@-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_LaunchRemoteSystemSettingsTipTest::evaluate(
        _tip_LaunchRemoteSystemSettingsTipTest *this,
        const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  char v5; // r9
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // r8
  tip2::details *v9; // rax
  __int64 v10; // r8
  char v11; // r9

  if ( *((_BYTE *)this + 80) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToLaunchSettings", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 81) )
  {
    v8 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v8 + 80) )
    {
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_WORD *)(v8 + 154) = 0x4000;
    }
    else
    {
      if ( (*(_DWORD *)(v8 + 56) & 0x200) != 0 )
      {
        v9 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
        if ( *(_BYTE *)(v10 + 152) == v11 )
        {
          *(_QWORD *)(v10 + 160) = v9;
          *(_BYTE *)(v10 + 152) = 1;
          *(_WORD *)(v10 + 154) = 1;
        }
        return;
      }
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_WORD *)(v8 + 154) = 16385;
    }
    *(_BYTE *)(v8 + 152) = 3;
    *(_QWORD *)(v8 + 160) = 0LL;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::registrationDataNotFound", a2);
  v4 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v4 + 152) == v7 )
  {
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 3;
LABEL_4:
    *(_QWORD *)(v4 + 160) = v2;
  }
}
