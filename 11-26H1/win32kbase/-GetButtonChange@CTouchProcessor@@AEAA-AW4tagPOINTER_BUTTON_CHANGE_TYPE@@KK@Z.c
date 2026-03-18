/*
 * XREFs of ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x14010D3A8
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchProcessor::GetButtonChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d

  result = 0LL;
  if ( a2 != a3 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      if ( (a3 & 0x10) == 0 )
        return 2LL;
    }
    else if ( (a3 & 0x10) != 0 )
    {
      return 1LL;
    }
    v4 = a3 & 0x20;
    if ( (a2 & 0x20) != 0 )
    {
      if ( !v4 )
        return 4LL;
    }
    else if ( v4 )
    {
      return 3LL;
    }
  }
  return result;
}
