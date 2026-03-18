/*
 * XREFs of xxxCallMouseHook @ 0x1400C4174
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 */

_BOOL8 __fastcall xxxCallMouseHook(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  struct tagTHREADINFO *v6; // rax
  __int64 Valid; // rax

  v4 = a1;
  v6 = PtiCurrent(a1, a2);
  Valid = PhkFirstValid(v6, 7LL);
  return xxxCallHook2(Valid, a3 == 0 ? 3 : 0, v4, a2, 1) != 0;
}
