/*
 * XREFs of ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000CBD0
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE8 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003144 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 * Callees:
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003ECC (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000AF88 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall CDwmAppHost::ReportEventWithDword(CDwmAppHost *this, WORD a2, DWORD a3)
{
  CDwmAppHost *v5; // rcx
  unsigned __int16 v6[8]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  __int16 v8; // [rsp+44h] [rbp-14h]

  v7 = 0;
  v8 = 0;
  *(_OWORD *)v6 = 0LL;
  StringCchPrintfW(v6, 0xBuLL, (size_t *)L"0x%x");
  CDwmAppHost::ReportEventW(v5, a2, a3, v6);
}
