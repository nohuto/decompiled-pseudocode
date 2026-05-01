/*
 * XREFs of ?evaluate@_tip_FileMappingTipTest@@QEAAXXZ @ 0x180653B88
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x180653950 (-evaluate@-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_FileMappingTipTest::evaluate(_tip_FileMappingTipTest *this, const char *a2)
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
  char v11; // r9
  __int64 v12; // r8
  tip2::details *v13; // rax
  __int64 v14; // r8
  char v15; // r9

  if ( !*((_QWORD *)this + 2) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::invalidWindow", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 24) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      if ( *((int *)this + 10) >= 0 )
      {
        v12 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v12 + 80) )
        {
          if ( *(_BYTE *)(v12 + 152) )
            return;
          *(_WORD *)(v12 + 154) = 0x4000;
        }
        else
        {
          if ( (*(_DWORD *)(v12 + 56) & 0x200) != 0 )
          {
            v13 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
            if ( *(_BYTE *)(v14 + 152) == v15 )
            {
              *(_QWORD *)(v14 + 160) = v13;
              *(_BYTE *)(v14 + 152) = 1;
              *(_WORD *)(v14 + 154) = 1;
            }
            return;
          }
          if ( *(_BYTE *)(v12 + 152) )
            return;
          *(_WORD *)(v12 + 154) = 16385;
        }
        *(_BYTE *)(v12 + 152) = 3;
        *(_QWORD *)(v12 + 160) = 0LL;
        return;
      }
      v2 = tip2::details::reason_string((tip2::details *)"reason::stateInvalid", a2);
      v4 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)(v4 + 152) != v11 )
        return;
      *(_WORD *)(v4 + 154) = 5;
    }
    else
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::invalidTimestamp", a2);
      v4 = *(_QWORD *)(v8 + 8);
      if ( *(_BYTE *)(v4 + 152) != v9 )
        return;
      *(_WORD *)(v4 + 154) = 4;
    }
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::getBufferFailed", a2);
  v4 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v4 + 152) == v7 )
  {
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 3;
    goto LABEL_5;
  }
}
