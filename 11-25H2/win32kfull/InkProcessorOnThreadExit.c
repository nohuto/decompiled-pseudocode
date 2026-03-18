/*
 * XREFs of InkProcessorOnThreadExit @ 0x1401A9880
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1401A98B8 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 */

void __fastcall InkProcessorOnThreadExit(struct tagTHREADINFO *a1, __int64 a2)
{
  InkProcessor *v3; // rcx

  v3 = *(InkProcessor **)(W32GetUserSessionState(a1, a2) + 3272);
  if ( v3 )
    InkProcessor::OnThreadExit(v3, a1);
}
