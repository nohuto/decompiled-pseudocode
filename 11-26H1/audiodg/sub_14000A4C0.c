/*
 * XREFs of sub_14000A4C0 @ 0x14000A4C0
 * Callers:
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 * Callees:
 *     sub_140009C48 @ 0x140009C48 (sub_140009C48.c)
 *     sub_140009CB0 @ 0x140009CB0 (sub_140009CB0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000A4C0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 **v5; // r10
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rdi
  int v9; // r9d
  unsigned int v11; // edi
  __int64 v12; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v5 = (__int64 **)(a1 + 152);
  v6 = *(__int64 **)(a1 + 152);
  while ( v6 )
  {
    v7 = v6;
    v8 = v6[2];
    v6 = (__int64 *)*v6;
    if ( *(_QWORD *)(v8 + 16) == a2 )
      goto LABEL_4;
  }
  v8 = 0LL;
  v7 = 0LL;
LABEL_4:
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( !(v9 + *(_DWORD *)(v8 + 12)) && !v9 )
    {
      sub_140009C48(v5, v7);
      sub_140009CB0((_QWORD *)v8);
      sub_1400B6010(v8);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v11 = -2005139417;
    v12 = 781LL;
  }
  else
  {
    v11 = -2005139430;
    v12 = 776LL;
  }
  sub_14000C2A8(retaddr, v12, "avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v11);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
