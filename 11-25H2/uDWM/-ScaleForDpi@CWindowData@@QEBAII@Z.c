/*
 * XREFs of ?ScaleForDpi@CWindowData@@QEBAII@Z @ 0x18008249C
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CWindowData::ScaleForDpi(CWindowData *this)
{
  return MulDiv(5, *((_DWORD *)this + 87), 96);
}
