/*
 * XREFs of ?evaluate@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXXZ @ 0x1805ECBC4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x1805ECBB0 (-evaluate@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall PinManagerTipTests::_tip_PinManagerPinTest::evaluate(
        PinManagerTipTests::_tip_PinManagerPinTest *this,
        const char *a2)
{
  __int64 v2; // r9
  int v4; // ecx
  tip2::details *v5; // rax
  __int64 v6; // r9
  int v7; // eax
  __int16 v8; // r11
  char v9; // r8

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_16;
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 == 2 && *((_DWORD *)this + 265) == 1 )
  {
    v5 = tip2::details::reason_string((tip2::details *)"reason::trusted_caller_called_shim", a2);
    if ( *(_BYTE *)(v6 + 152) )
      return;
    *(_WORD *)(v6 + 154) = 0;
    goto LABEL_8;
  }
  v7 = *((_DWORD *)this + 268);
  if ( v7 < 0 && v7 != -2147023728 && (unsigned int)(v4 - 8) > 1 )
  {
    v5 = tip2::details::reason_string((tip2::details *)"reason::pin_failure", a2);
    if ( *(_BYTE *)(v6 + 152) != v9 )
      return;
    *(_WORD *)(v6 + 154) = v8;
LABEL_8:
    *(_BYTE *)(v6 + 152) = 3;
    *(_QWORD *)(v6 + 160) = v5;
    return;
  }
  if ( *(_BYTE *)(v2 + 152) )
    return;
  *(_BYTE *)(v2 + 152) = 1;
  *(_WORD *)(v2 + 154) = 0x8000;
LABEL_16:
  *(_QWORD *)(v2 + 160) = 0LL;
}
