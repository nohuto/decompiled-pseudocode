/*
 * XREFs of ?evaluate@_tip_DeactivateRemoteDesktopTipTest@@QEAAXXZ @ 0x1806539C4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x180653930 (-evaluate@-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_DeactivateRemoteDesktopTipTest::evaluate(
        _tip_DeactivateRemoteDesktopTipTest *this,
        const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // r8
  char v7; // r10
  tip2::details *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r8
  char v13; // r10
  __int64 v14; // r8
  char v15; // r10
  tip2::details *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // r10
  __int64 v20; // r9
  char v21; // r10

  if ( !*((_QWORD *)this + 4) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::systemIdNotFound", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 48) )
  {
    if ( !*((_BYTE *)this + 49) )
    {
      v8 = tip2::details::reason_string((tip2::details *)"reason::remoteDesktopNotRemoved", a2);
      v10 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v10 + 152) != v11 )
        return;
      *(_BYTE *)(v10 + 152) = 3;
      *(_WORD *)(v10 + 154) = 4;
      goto LABEL_26;
    }
    if ( *((_BYTE *)this + 50) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::hwndFailureToClose", a2);
      v4 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v4 + 152) != v13 )
        return;
      *(_WORD *)(v4 + 154) = 5;
    }
    else
    {
      if ( !*((_BYTE *)this + 52) )
      {
        if ( *((_BYTE *)this + 53) )
        {
          v16 = tip2::details::reason_string((tip2::details *)"reason::physicalDeviceAccessStateIsSet", a2);
          v18 = *(_QWORD *)(v17 + 8);
          if ( *(_BYTE *)(v18 + 152) == v19 )
          {
            *(_BYTE *)(v18 + 152) = 4;
            *(_WORD *)(v18 + 154) = 7;
            *(_QWORD *)(v18 + 160) = v16;
          }
          return;
        }
        v20 = *((_QWORD *)this + 1);
        if ( (*(_DWORD *)(v20 + 56) & 0x200) == 0 )
        {
          if ( !*(_BYTE *)(v20 + 152) )
          {
            *(_BYTE *)(v20 + 152) = 3;
            *(_WORD *)(v20 + 154) = 16385;
            *(_QWORD *)(v20 + 160) = 0LL;
          }
          return;
        }
        v8 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
        if ( *(_BYTE *)(v10 + 152) != v21 )
          return;
        *(_BYTE *)(v10 + 152) = 1;
        *(_WORD *)(v10 + 154) = 1;
LABEL_26:
        *(_QWORD *)(v10 + 160) = v8;
        return;
      }
      v2 = tip2::details::reason_string((tip2::details *)"reason::removeWindowReturnedFalse", a2);
      v4 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v4 + 152) != v15 )
        return;
      *(_WORD *)(v4 + 154) = 6;
    }
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::remoteSystemNotFound", a2);
  v4 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v4 + 152) == v7 )
  {
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 3;
    goto LABEL_5;
  }
}
