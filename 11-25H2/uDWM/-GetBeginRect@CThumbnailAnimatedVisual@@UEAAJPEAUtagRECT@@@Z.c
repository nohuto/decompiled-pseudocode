/*
 * XREFs of ?GetBeginRect@CThumbnailAnimatedVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800CF170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThumbnailAnimatedVisual::GetBeginRect(CThumbnailAnimatedVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 8);
  return result;
}
