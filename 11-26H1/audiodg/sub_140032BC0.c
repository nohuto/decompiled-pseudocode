/*
 * XREFs of sub_140032BC0 @ 0x140032BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140032BC0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v3 = *(_QWORD *)(a1 + 304);
  if ( !v3 )
  {
LABEL_4:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v4 = sub_1400B6010(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_14000C2A8((int)retaddr, 969, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v4);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v5;
  }
  else
  {
    v6 = sub_1400B6010(0LL);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_4;
    sub_14000C2A8((int)retaddr, 974, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v6);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
}
