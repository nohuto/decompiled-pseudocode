/*
 * XREFs of ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x18065D554
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x18065D1E0 (-evaluate@-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x1800303F0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_RemoteSessionOnStateChangedTipTest::evaluate(
        _tip_RemoteSessionOnStateChangedTipTest *this,
        const char *a2)
{
  tip2::details *v3; // rax
  __int64 v4; // rdx
  const char *v5; // rdx
  __int64 v6; // r8
  tip2::details *v7; // rax
  __int64 v8; // r8

  if ( *((_BYTE *)this + 93) )
  {
    if ( *((_BYTE *)this + 88) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::systemIdNotFoundByRSWM", a2);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_6;
      }
      return;
    }
  }
  else if ( *((_BYTE *)this + 88) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::stateChangeWhenNoActiveSession", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 5;
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 20) == *((_DWORD *)this + 21) && *((_BYTE *)this + 89) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::succeededNoStateChange", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = 2;
      goto LABEL_6;
    }
  }
  else if ( !std::wstring::_Equal((__int64)this + 48, (__int64)&pvData) || *((_DWORD *)this + 20) == 99 )
  {
    v6 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v6 + 56) & 0x200) != 0 )
    {
      v7 = tip2::details::reason_string((tip2::details *)"reason::succeeded", v5);
      if ( !*(_BYTE *)(v8 + 152) )
      {
        *(_QWORD *)(v8 + 160) = v7;
        *(_BYTE *)(v8 + 152) = 1;
        *(_WORD *)(v8 + 154) = 1;
      }
    }
    else if ( !*(_BYTE *)(v6 + 152) )
    {
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 16385;
      *(_QWORD *)(v6 + 160) = 0LL;
    }
  }
  else
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::remoteDesktopIdNotFound", v5);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 4;
LABEL_5:
      *(_BYTE *)(v4 + 152) = 3;
LABEL_6:
      *(_QWORD *)(v4 + 160) = v3;
    }
  }
}
