/*
 * XREFs of ExpQuerySystemMemoryNumaInformation @ 0x14077DDAC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaInformation(
        __int64 *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp-48h]

  if ( !a1 )
    return 3221225485LL;
  if ( a2 < 0xC )
    return 3221225485LL;
  v7 = *a1;
  if ( (unsigned int)*a1 != 1 || *((_DWORD *)a1 + 2) || HIDWORD(v7) >= (unsigned __int16)KeNumberNodes || !a3 && a4 )
    return 3221225485LL;
  if ( a4 >= 0x10 )
  {
    result = guard_dispatch_icall_no_overrides(50LL, 24LL);
    if ( (int)result >= 0 )
    {
      result = guard_dispatch_icall_no_overrides(1LL, HIDWORD(v7));
      if ( (int)result >= 0 )
      {
        *a3 = 1;
        a3[1] = 16;
        a3[2] = 0;
        a3[3] = (int)result >= 0;
        if ( a5 )
          *a5 = 16;
        return 0LL;
      }
    }
  }
  else
  {
    result = 3221225507LL;
    if ( a5 )
      *a5 = 16;
  }
  return result;
}
