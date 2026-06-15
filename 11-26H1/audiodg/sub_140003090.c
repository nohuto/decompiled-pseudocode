/*
 * XREFs of sub_140003090 @ 0x140003090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000369C @ 0x14000369C (sub_14000369C.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140010154 @ 0x140010154 (sub_140010154.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140003090(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdi
  _QWORD *i; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  if ( (unsigned __int8)sub_1400B6010(a2) )
  {
    sub_14000C2A8(retaddr, 1049LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", 2147549183LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2147549183LL;
  }
  else
  {
    v5 = sub_14000369C(a1, a2);
    if ( v5 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      for ( i = *(_QWORD **)(a1 + 120); i && i[2] != v5; i = (_QWORD *)*i )
        ;
      sub_140010154();
      if ( a1 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      j_j__o_free(v5, 16LL);
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
