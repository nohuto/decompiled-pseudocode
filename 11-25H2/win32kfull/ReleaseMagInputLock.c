/*
 * XREFs of ReleaseMagInputLock @ 0x1401656B4
 * Callers:
 *     ApplyMagInputTransform @ 0x140165340 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1401654C0 (EditionMagnificationMousePosition.c)
 *     TransformForInputMagnification @ 0x140165510 (TransformForInputMagnification.c)
 *     _SetMagnificationInputTransform @ 0x140203308 (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseMagInputLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  _InterlockedExchange64((volatile __int64 *)(result + 66056), 0LL);
  return result;
}
