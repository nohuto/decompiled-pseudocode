/*
 * XREFs of ?evaluate@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXXZ @ 0x180653F14
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x1806539B0 (-evaluate@-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXX.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_UpdateTransitionScreenTimeOutInfoTipTest::evaluate(
        _tip_UpdateTransitionScreenTimeOutInfoTipTest *this,
        const char *a2)
{
  char v2; // al
  tip2::details *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  char v6; // r9
  __int64 v7; // r8
  char v8; // r9
  __int64 v9; // r8
  tip2::details *v10; // rax
  __int64 v11; // r8
  __int16 v12; // r10
  char v13; // r9
  tip2::details *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // r9

  if ( *((_WORD *)this + 8) == 0xFFFF || (v2 = 1, *((_WORD *)this + 8) > 0x14u) )
    v2 = 0;
  if ( *((_DWORD *)this + 5) || !*((_BYTE *)this + 18) )
  {
    v14 = tip2::details::reason_string((tip2::details *)"reason::invalidState", a2);
    v16 = *(_QWORD *)(v15 + 8);
    if ( *(_BYTE *)(v16 + 152) == v17 )
    {
      *(_QWORD *)(v16 + 160) = v14;
      *(_BYTE *)(v16 + 152) = 4;
      *(_WORD *)(v16 + 154) = 4;
    }
    return;
  }
  if ( v2 )
  {
    if ( !*((_BYTE *)this + 19) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::failToUpdate", a2);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_BYTE *)(v5 + 152) != v6 )
        return;
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 2;
      goto LABEL_10;
    }
  }
  else if ( *((_BYTE *)this + 19) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::invalidUpdate", a2);
    v5 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v5 + 152) == v8 )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 3;
LABEL_10:
      *(_QWORD *)(v5 + 160) = v3;
      return;
    }
    return;
  }
  v9 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v9 + 80) )
  {
    if ( *(_BYTE *)(v9 + 152) )
      return;
    *(_WORD *)(v9 + 154) = 0x4000;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x200) != 0 )
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
    if ( *(_BYTE *)(v11 + 152) == v13 )
    {
      *(_BYTE *)(v11 + 152) = v12;
      *(_WORD *)(v11 + 154) = v12;
      *(_QWORD *)(v11 + 160) = v10;
    }
  }
  else if ( !*(_BYTE *)(v9 + 152) )
  {
    *(_WORD *)(v9 + 154) = 16385;
LABEL_18:
    *(_BYTE *)(v9 + 152) = 3;
    *(_QWORD *)(v9 + 160) = 0LL;
  }
}
