/*
 * XREFs of KiHeadlessDisplayString @ 0x1405EAEEC
 * Callers:
 *     KiBugCheckDebugBreak @ 0x1405E9EC0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x1405E9FA0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1406CF8A0 (HeadlessDispatch.c)
 */

__int64 __fastcall KiHeadlessDisplayString(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return HeadlessDispatch(23LL, a1, a2);
  }
  return result;
}
