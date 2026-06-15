/*
 * XREFs of sub_140037928 @ 0x140037928
 * Callers:
 *     sub_140041100 @ 0x140041100 (sub_140041100.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140037928(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v7 = v4;
  for ( i = *(_QWORD **)(a1 + 88); i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
    {
      sub_140018FF0(&v7);
      return;
    }
  }
  try
  {
    sub_14004C84C(a1 + 88, &v8);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    sub_140050410(retaddr, 57LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp");
  }
}
