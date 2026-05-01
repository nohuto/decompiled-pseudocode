/*
 * XREFs of ?evaluate@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXXZ @ 0x1802162B8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXXZ @ 0x1805FA7A0 (-evaluate@-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall MeetAndChatManagerTip::_tip_PublisherValidationTest::evaluate(
        MeetAndChatManagerTip::_tip_PublisherValidationTest *this,
        const char *a2)
{
  __int64 v2; // r8
  const char *v3; // rax
  char v4; // r10
  char v5; // r10
  char v6; // al
  const char *v7; // rdx
  const char *v8; // r9
  const char *v9; // rdx

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
    *(_QWORD *)(v2 + 160) = 0LL;
    goto LABEL_26;
  }
  if ( !*((_BYTE *)this + 19) )
  {
    if ( *((_BYTE *)this + 17) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::NotTrustedPublisher", a2);
      if ( *(_BYTE *)(v2 + 152) != v4 )
        return;
      *(_WORD *)(v2 + 154) = 1;
LABEL_6:
      *(_QWORD *)(v2 + 160) = v3;
LABEL_26:
      *(_BYTE *)(v2 + 152) = 3;
      return;
    }
    if ( *((_BYTE *)this + 18) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::NotPackaged", a2);
      if ( *(_BYTE *)(v2 + 152) != v5 )
        return;
      *(_WORD *)(v2 + 154) = 2;
      goto LABEL_6;
    }
  }
  v6 = 114;
  if ( *((_BYTE *)this + 20) )
  {
    v7 = "reason::Fallback";
    v8 = "reason::Fallback";
    do
    {
      ++v7;
      if ( v6 == 58 )
        v8 = v7;
      v6 = *v7;
    }
    while ( *v7 );
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_WORD *)(v2 + 154) = 3;
LABEL_17:
      *(_BYTE *)(v2 + 152) = 1;
      *(_QWORD *)(v2 + 160) = v8;
    }
  }
  else
  {
    v9 = "reason::PublisherFound";
    v8 = "reason::PublisherFound";
    do
    {
      ++v9;
      if ( v6 == 58 )
        v8 = v9;
      v6 = *v9;
    }
    while ( *v9 );
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_WORD *)(v2 + 154) = 4;
      goto LABEL_17;
    }
  }
}
