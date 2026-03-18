/*
 * XREFs of ZwAlpcOpenSenderThread @ 0x140724530
 * Callers:
 *     DifZwAlpcOpenSenderThreadWrapper @ 0x14069B620 (DifZwAlpcOpenSenderThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
