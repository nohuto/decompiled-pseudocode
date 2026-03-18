/*
 * XREFs of _lambda_4804acc9578694ef1c6c05a323239c10_::operator() @ 0x140288384
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_4804acc9578694ef1c6c05a323239c10_::operator()(__int64 a1, const struct tagWND *a2)
{
  char *v2; // rcx
  bool result; // al

  result = a2
        && (v2 = (char *)*((_QWORD *)a2 + 5), (v2[31] & 0x18) == 0x10)
        && (v2[27] & 8) == 0
        && (v2[24] >= 0 || (v2[26] & 4) != 0)
        && !IsWindowCloaked(a2);
  return result;
}
