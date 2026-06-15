/*
 * XREFs of sub_140023334 @ 0x140023334
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140023428 @ 0x140023428 (sub_140023428.c)
 *     sub_1400234EC @ 0x1400234EC (sub_1400234EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140023334(struct _RTL_CRITICAL_SECTION *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  try
  {
    if ( a1[2].DebugInfo )
    {
      sub_14000C2A8(
        (int)retaddr,
        91,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        -2147418113);
      if ( v2 )
        LeaveCriticalSection(v2);
      result = 2147549183LL;
    }
    else
    {
      v3 = sub_140023428(v5);
      sub_1400234EC(&a1[2], v3);
      if ( v6 )
        sub_140007588(v6);
      if ( a1[2].DebugInfo )
      {
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 0LL;
      }
      else
      {
        sub_14000C2A8(
          (int)retaddr,
          93,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
          -2147024882);
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 2147942414LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           retaddr,
                           96LL,
                           "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp");
  }
  return result;
}
