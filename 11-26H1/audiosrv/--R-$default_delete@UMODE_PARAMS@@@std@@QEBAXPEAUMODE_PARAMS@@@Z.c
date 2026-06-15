/*
 * XREFs of ??R?$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z @ 0x180069678
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18002AD50 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B04DC (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 * Callees:
 *     ??1MODE_PARAMS@@QEAA@XZ @ 0x1800696D8 (--1MODE_PARAMS@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<MODE_PARAMS>::operator()(__int64 a1, MODE_PARAMS *a2)
{
  if ( a2 )
  {
    MODE_PARAMS::~MODE_PARAMS(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x10);
  }
}
