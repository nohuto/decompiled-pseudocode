/*
 * XREFs of sub_1400562A0 @ 0x1400562A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140009018 @ 0x140009018 (sub_140009018.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400562A0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 144);
  LOBYTE(v6) = *(_DWORD *)(a2 + 132) == 3;
  v10 = v2;
  v7 = sub_140047DB4(v5, v6);
  v8 = sub_140009018(a2, -1LL, *(_QWORD *)(v7 + 8));
  if ( v8 >= 0 )
    v8 = sub_1400B6010(a1);
  sub_140018FF0(&v10);
  return (unsigned int)v8;
}
