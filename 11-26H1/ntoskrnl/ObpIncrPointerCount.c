/*
 * XREFs of ObpIncrPointerCount @ 0x14043BE10
 * Callers:
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x140971174 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
