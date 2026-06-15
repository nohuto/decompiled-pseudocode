/*
 * XREFs of sub_140046B38 @ 0x140046B38
 * Callers:
 *     sub_1400469CC @ 0x1400469CC (sub_1400469CC.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 *     sub_14004E9D4 @ 0x14004E9D4 (sub_14004E9D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140046B38(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rax
  __int64 result; // rax
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v9 = v4;
  for ( i = *(_QWORD **)(a1 + 88); i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
    {
      sub_140018FF0(&v9);
      return 0LL;
    }
  }
  try
  {
    v7 = sub_14004E9D4();
    if ( v7 < 0 )
      sub_140007934(
        (int)retaddr,
        38,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
        v7);
    sub_14004C84C(a1 + 88, &v10);
    sub_140018FF0(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           retaddr,
                           44LL,
                           "avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp");
  }
  return result;
}
