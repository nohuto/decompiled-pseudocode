/*
 * XREFs of sub_140050A2C @ 0x140050A2C
 * Callers:
 *     sub_140048090 @ 0x140048090 (sub_140048090.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 *     sub_140050D0C @ 0x140050D0C (sub_140050D0C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140050A2C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rax
  __int64 result; // rax
  int v7; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v9 = v4;
  for ( i = *(_QWORD **)(a1 + 104); i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
    {
      sub_140018FF0(&v9);
      return 0LL;
    }
  }
  try
  {
    v7 = sub_140050D0C();
    if ( v7 < 0 )
      sub_140007934(
        (int)retaddr,
        44,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
        v7);
    sub_14004C84C((_QWORD *)(a1 + 104), &v10);
    sub_140018FF0(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           (int)retaddr,
                           50,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp");
  }
  return result;
}
