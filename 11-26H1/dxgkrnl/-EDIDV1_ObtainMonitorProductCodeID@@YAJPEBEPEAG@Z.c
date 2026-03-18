/*
 * XREFs of ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x140042918
 * Callers:
 *     ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403EADF0 (-AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorProductCodeID(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  _WORD *v4; // r11
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  _QWORD v7[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7[0] = a1;
  v7[10] = 1LL;
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v7, (bool)a2);
  if ( (int)result >= 0 )
  {
    v5 = *(_BYTE *)(v3 + 11) & 0xF;
    v6 = *(unsigned __int16 *)(v3 + 10);
    v4[4] = 0;
    *v4 = a0123456789abcd[v6 >> 12];
    v4[1] = a0123456789abcd[v5];
    v4[2] = a0123456789abcd[(unsigned __int8)v6 >> 4];
    v4[3] = a0123456789abcd[v6 & 0xF];
    return 0LL;
  }
  return result;
}
