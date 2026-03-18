/*
 * XREFs of _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1401EF420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14002160C (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x140023FA0 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1401EF48C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_(struct tagWND *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  struct tagWND *CompositeAppFrameWindow; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  if ( IsForegroundWindow(a1) )
  {
    CompositeAppFrameWindow = CoreWindowProp::GetCompositeAppFrameWindow(a1, v4);
    if ( IsWindowActivateable(CompositeAppFrameWindow) )
    {
      *(_QWORD *)&v7 = CompositeAppFrameWindow;
      *((_QWORD *)&v7 + 1) = 6LL;
      *a2 = v7;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
