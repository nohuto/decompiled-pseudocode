/*
 * XREFs of sub_14006FED8 @ 0x14006FED8
 * Callers:
 *     sub_14006F36C @ 0x14006F36C (sub_14006F36C.c)
 *     sub_14007E0B8 @ 0x14007E0B8 (sub_14007E0B8.c)
 *     sub_1400829EC @ 0x1400829EC (sub_1400829EC.c)
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008C144 @ 0x14008C144 (sub_14008C144.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     sub_14008DFD0 @ 0x14008DFD0 (sub_14008DFD0.c)
 *     sub_14008E060 @ 0x14008E060 (sub_14008E060.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14008E63C @ 0x14008E63C (sub_14008E63C.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 *     sub_14008EAAC @ 0x14008EAAC (sub_14008EAAC.c)
 *     sub_1400BB548 @ 0x1400BB548 (sub_1400BB548.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     sub_1400F2A1C @ 0x1400F2A1C (sub_1400F2A1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006FED8(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // al
  _BYTE *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = a1[v4];
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
