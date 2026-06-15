/*
 * XREFs of sub_14002F92C @ 0x14002F92C
 * Callers:
 *     sub_14002F8F0 @ 0x14002F8F0 (sub_14002F8F0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14003003C @ 0x14003003C (sub_14003003C.c)
 */

__int64 __fastcall sub_14002F92C(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  *(_QWORD *)a1 = off_1400B8700;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  if ( *(_QWORD *)(a1 + 80) )
  {
    v5 = sub_14003003C(a1);
    if ( v5 < 0 )
      sub_140007934((int)retaddr, 64, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    sub_140007588(v3);
  DeleteCriticalSection(v2);
  sub_140003238((__int64 *)(a1 + 32));
  sub_140003238((__int64 *)(a1 + 24));
  result = sub_140003238((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
