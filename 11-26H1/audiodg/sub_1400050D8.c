/*
 * XREFs of sub_1400050D8 @ 0x1400050D8
 * Callers:
 *     sub_140004F70 @ 0x140004F70 (sub_140004F70.c)
 *     sub_140056FE0 @ 0x140056FE0 (sub_140056FE0.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400050D8(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rcx
  __int64 v7; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  v5 = *(_QWORD **)(a1 + 168);
  do
  {
    if ( !v5 )
    {
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v7 = v5[2];
    v5 = (_QWORD *)*v5;
  }
  while ( v7 != a2 );
  if ( v4 )
    LeaveCriticalSection(v4);
  return v7;
}
