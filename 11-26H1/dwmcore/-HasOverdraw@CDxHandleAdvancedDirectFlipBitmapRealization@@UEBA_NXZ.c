/*
 * XREFs of ?HasOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@UEBA_NXZ @ 0x1801CF960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::HasOverdraw(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
