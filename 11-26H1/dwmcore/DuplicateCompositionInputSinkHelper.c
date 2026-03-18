/*
 * XREFs of DuplicateCompositionInputSinkHelper @ 0x1801A5A00
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DuplicateCompositionInputSinkHelper(HANDLE hSourceHandle, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax

  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  return !DuplicateHandle(v5, hSourceHandle, CurrentProcess, lpTargetHandle, 0, 0, 2u) ? 0xC0000008 : 0;
}
