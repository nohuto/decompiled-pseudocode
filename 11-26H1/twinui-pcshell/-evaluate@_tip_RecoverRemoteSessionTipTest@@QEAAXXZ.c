/*
 * XREFs of ?evaluate@_tip_RecoverRemoteSessionTipTest@@QEAAXXZ @ 0x180642B94
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x1806426F0 (-evaluate@-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_RecoverRemoteSessionTipTest::evaluate(_tip_RecoverRemoteSessionTipTest *this, const char *a2)
{
  __int64 v2; // r8
  tip2::details *v3; // rax
  __int64 v4; // r8
  char v5; // r10
  __int64 v6; // r8
  tip2::details *v7; // r9
  char v8; // r10
  __int16 v9; // r9
  char v10; // r10

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( *((_QWORD *)this + 12) > 1uLL )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::multipleHostInstances", a2);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 2;
LABEL_17:
    *(_QWORD *)(v4 + 160) = v3;
    return;
  }
  if ( *((_BYTE *)this + 112) && *((_QWORD *)this + 12) )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::hostInstantiatedInLocal", a2);
    if ( *(_BYTE *)(v6 + 152) == v8 )
    {
      *(_QWORD *)(v6 + 160) = v7;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 3;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
      if ( *(_BYTE *)(v4 + 152) != v10 )
        return;
      *(_BYTE *)(v4 + 152) = v9;
      *(_WORD *)(v4 + 154) = v9;
      goto LABEL_17;
    }
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_WORD *)(v2 + 154) = 16385;
LABEL_4:
      *(_BYTE *)(v2 + 152) = 3;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
  }
}
