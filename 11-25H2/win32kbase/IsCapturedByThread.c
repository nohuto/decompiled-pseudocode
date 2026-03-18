/*
 * XREFs of IsCapturedByThread @ 0x140216780
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1, __int64 a2)
{
  __int64 MouseProcessor; // rax
  char v4; // dl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor((__int64)a1, a2);
  v4 = 0;
  if ( MouseProcessor )
    return CInputDest::GetThreadInfo((CInputDest *)(MouseProcessor + 3776)) == *a1;
  return v4;
}
