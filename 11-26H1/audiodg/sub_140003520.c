/*
 * XREFs of sub_140003520 @ 0x140003520
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000369C @ 0x14000369C (sub_14000369C.c)
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140003520(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v5 = sub_14000369C(a1, a2);
  if ( v5 )
  {
    *(_BYTE *)(v5 + 8) = 0;
    v7 = sub_140003834(v6, 0xFFFFFFFFLL);
    if ( v7 >= 0 )
    {
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    v9 = 1008LL;
  }
  else
  {
    v7 = -2005139430;
    v9 = 1005LL;
  }
  sub_14000C2A8(retaddr, v9, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v7);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v7;
}
