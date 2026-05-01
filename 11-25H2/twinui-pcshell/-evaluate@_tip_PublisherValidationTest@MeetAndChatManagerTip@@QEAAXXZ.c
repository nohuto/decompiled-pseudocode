/*
 * XREFs of ?evaluate@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXXZ @ 0x180225DA4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXXZ @ 0x1805D5CD0 (-evaluate@-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall MeetAndChatManagerTip::_tip_PublisherValidationTest::evaluate(
        MeetAndChatManagerTip::_tip_PublisherValidationTest *this,
        const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  char v4; // r11
  char v5; // r11
  char v6; // dl
  const char *v7; // r8
  const char *v8; // r10
  const char *v9; // r8
  const char *v10; // r10

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 0x4000;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
    return;
  }
  if ( !*((_BYTE *)this + 19) )
  {
    if ( *((_BYTE *)this + 17) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::NotTrustedPublisher", a2);
      if ( *(_BYTE *)(v2 + 152) != v4 )
        return;
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 1;
      goto LABEL_25;
    }
    if ( *((_BYTE *)this + 18) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::NotPackaged", a2);
      if ( *(_BYTE *)(v2 + 152) != v5 )
        return;
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 2;
      goto LABEL_25;
    }
  }
  v6 = 114;
  if ( *((_BYTE *)this + 20) )
  {
    v7 = "reason::Fallback";
    v8 = "reason::Fallback";
    do
    {
      v3 = ++v7;
      if ( v6 != 58 )
        v3 = v8;
      v6 = *v7;
      v8 = v3;
    }
    while ( *v7 );
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_WORD *)(v2 + 154) = 3;
LABEL_24:
      *(_BYTE *)(v2 + 152) = 1;
LABEL_25:
      *(_QWORD *)(v2 + 160) = v3;
    }
  }
  else
  {
    v9 = "reason::PublisherFound";
    v10 = "reason::PublisherFound";
    do
    {
      v3 = ++v9;
      if ( v6 != 58 )
        v3 = v10;
      v6 = *v9;
      v10 = v3;
    }
    while ( *v9 );
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_WORD *)(v2 + 154) = 4;
      goto LABEL_24;
    }
  }
}
