/*
 * XREFs of sub_14005123C @ 0x14005123C
 * Callers:
 *     sub_140047F7C @ 0x140047F7C (sub_140047F7C.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 *     sub_1400516A0 @ 0x1400516A0 (sub_1400516A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005123C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rax
  __int64 result; // rax
  int v7; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v9 = v4;
  for ( i = *(_QWORD **)(a1 + 120); i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
    {
      sub_140018FF0(&v9);
      return 0LL;
    }
  }
  try
  {
    v7 = sub_1400516A0();
    if ( v7 < 0 )
      sub_140007934(
        (int)retaddr,
        116,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        v7);
    sub_14004C84C((_QWORD *)(a1 + 120), &v10);
    sub_140018FF0(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           (int)retaddr,
                           122,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp");
  }
  return result;
}
