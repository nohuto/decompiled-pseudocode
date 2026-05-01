/*
 * XREFs of _dynamic_initializer_for__BlockThinking__ @ 0x1801F1BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180029E88 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

int dynamic_initializer_for__BlockThinking__()
{
  void *v0; // rbx
  _DWORD Src[56]; // [rsp+20h] [rbp-E0h] BYREF

  Src[0] = -1269949697;
  Src[1] = -1269949697;
  Src[2] = -1253041153;
  Src[3] = -1253041153;
  Src[4] = -1235934465;
  Src[5] = -1235934465;
  Src[6] = -1168364289;
  Src[7] = -1168364289;
  Src[8] = -1100531201;
  Src[9] = -1100531201;
  Src[10] = -998945537;
  Src[11] = -998945537;
  Src[12] = -880451073;
  Src[13] = -880451073;
  Src[14] = -728139009;
  Src[15] = -728139009;
  Src[16] = -592603905;
  Src[17] = -592603905;
  Src[18] = -440225793;
  Src[19] = -440225793;
  Src[20] = -304822017;
  Src[21] = -304822017;
  Src[22] = -186196225;
  Src[23] = -186196225;
  Src[24] = -84676353;
  Src[25] = -84676353;
  Src[26] = -33752321;
  Src[27] = -33752321;
  Src[28] = -257;
  Src[29] = -257;
  Src[30] = -16908801;
  Src[31] = -16908801;
  Src[32] = -67701761;
  Src[33] = -67701761;
  Src[34] = -152443905;
  Src[35] = -152443905;
  Src[36] = -270938625;
  Src[37] = -270938625;
  Src[38] = -423184897;
  Src[39] = -423184897;
  Src[40] = -558786049;
  Src[41] = -558786049;
  Src[42] = -711164161;
  Src[43] = -711164161;
  Src[44] = -863476481;
  Src[45] = -863476481;
  Src[46] = -982036737;
  Src[47] = -982036737;
  Src[48] = -1083687937;
  Src[49] = -1083687937;
  Src[50] = -1168298753;
  Src[51] = -1168298753;
  Src[52] = -1219157505;
  Src[53] = -1219157505;
  Src[54] = -1269818369;
  Src[55] = -1269818369;
  std::vector<Windows::UI::Color>::_Buy_nonzero((__int64 *)&BlockThinking, 0x38uLL);
  v0 = BlockThinking;
  memmove_0(BlockThinking, Src, 0xE0uLL);
  qword_180899FD0 = (__int64)v0 + 224;
  return atexit(dynamic_atexit_destructor_for__BlockThinking__);
}
