/*
 * XREFs of ?StaticThreadThunk@FxSystemThread@@CAXPEAX@Z @ 0x1400AC780
 * Callers:
 *     <none>
 * Callees:
 *     ?Thread@FxSystemThread@@AEAAXXZ @ 0x140070D88 (-Thread@FxSystemThread@@AEAAXXZ.c)
 */

void __fastcall FxSystemThread::StaticThreadThunk(FxSystemThread *Context)
{
  FxSystemThread::Thread(Context);
}
