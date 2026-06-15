/*
 * XREFs of sub_140023FE0 @ 0x140023FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002487C @ 0x14002487C (sub_14002487C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140023FE0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  if ( *(_DWORD *)(a1 + 256) )
  {
    v3 = *(_QWORD **)(a1 + 168);
    while ( v3 )
    {
      v5 = v3[2];
      v3 = (_QWORD *)*v3;
      sub_14002487C(v5);
    }
    sub_14002487C(*(_QWORD *)(a1 + 160));
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 945, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", -2005139437);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
}
