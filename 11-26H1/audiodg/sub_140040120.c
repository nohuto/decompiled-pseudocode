/*
 * XREFs of sub_140040120 @ 0x140040120
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 */

__int64 __fastcall sub_140040120(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 144);
  v11 = v2;
  v6 = sub_140047DB4(v5, 0LL);
  v7 = sub_140008C34(a1 - 16, a2, *(_QWORD *)(v6 + 8));
  v8 = v7;
  if ( v7 >= 0 )
  {
    sub_140018FF0(&v11);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 1297, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v7);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
}
