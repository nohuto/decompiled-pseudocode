/*
 * XREFs of IsCapturedByThread @ 0x14021BCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1, int a2, int a3)
{
  __int64 MouseProcessor; // rax
  char v5; // r8

  MouseProcessor = anonymous_namespace_::GetMouseProcessor((int)a1, a2, a3);
  v5 = 0;
  if ( MouseProcessor )
    return CInputDest::GetThreadInfo((CInputDest *)(MouseProcessor + 3784)) == *a1;
  return v5;
}
