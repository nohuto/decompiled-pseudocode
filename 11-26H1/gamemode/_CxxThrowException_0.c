/*
 * XREFs of _CxxThrowException_0 @ 0x18000FD13
 * Callers:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z @ 0x180005260 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEA_W_KPEA_N@Z @ 0x1800054C0 (-ResultFromCaughtExceptionInternal@details@wil@@YA-AUResultStatus@12@PEA_W_KPEA_N@Z.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x1800055B0 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180005E20 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
