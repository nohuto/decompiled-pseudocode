/*
 * XREFs of ?evaluate@_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@QEAAXXZ @ 0x1805D36D4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXXZ @ 0x1805D36C0 (-evaluate@-$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@EE.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall MeetAndChatManagerTip::_tip_IrisContentLoadedTest::evaluate(
        MeetAndChatManagerTip::_tip_IrisContentLoadedTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  const char *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
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
  __int64 v20; // rax

  if ( !*((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::iris_init_failed", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::network_request_failure", a2);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v8 + 152) == v9 )
    {
      *(_BYTE *)(v8 + 152) = 4;
      *(_WORD *)(v8 + 154) = 7;
      *(_QWORD *)(v8 + 160) = v6;
    }
    return;
  }
  if ( !*((_BYTE *)this + 18) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::creative_download_failed", a2);
    v4 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v4 + 152) != v11 )
      return;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 19) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::creative_parse_failed", a2);
    v4 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v4 + 152) == v13 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 3;
      goto LABEL_5;
    }
    return;
  }
  if ( *((_BYTE *)this + 20) )
  {
    if ( *((int *)this + 6) <= 0 )
    {
LABEL_17:
      v2 = tip2::details::reason_string((tip2::details *)"reason::invalid_img_dl_count", a2);
      v4 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v4 + 152) == v15 )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 6;
        goto LABEL_5;
      }
      return;
    }
    if ( *((_BYTE *)this + 21) )
    {
      if ( *((_BYTE *)this + 22) )
        goto LABEL_27;
      v2 = tip2::details::reason_string((tip2::details *)"reason::invalid_mime_type", a2);
      v4 = *(_QWORD *)(v18 + 8);
      if ( *(_BYTE *)(v4 + 152) != v19 )
        return;
      *(_WORD *)(v4 + 154) = 5;
    }
    else
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::image_download_failed", a2);
      v4 = *(_QWORD *)(v16 + 8);
      if ( *(_BYTE *)(v4 + 152) != v17 )
        return;
      *(_WORD *)(v4 + 154) = 4;
    }
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
    return;
  }
  if ( *((int *)this + 6) > 0 )
    goto LABEL_17;
LABEL_27:
  v20 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v20 + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v20 + 152) )
      return;
    *(_BYTE *)(v20 + 152) = 1;
    *(_WORD *)(v20 + 154) = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v20 + 152) )
      return;
    *(_BYTE *)(v20 + 152) = 3;
    *(_WORD *)(v20 + 154) = 16385;
  }
  *(_QWORD *)(v20 + 160) = 0LL;
}
