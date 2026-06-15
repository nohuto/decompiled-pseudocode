/*
 * XREFs of sub_140008EF0 @ 0x140008EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140009018 @ 0x140009018 (sub_140009018.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140008EF0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // edi
  int v10; // eax
  __int64 v12; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 144) + 64LL;
  v14 = v2;
  v6 = (_QWORD *)sub_140009AA8(v5);
  v7 = sub_140009AA8(*v6);
  v8 = *(_QWORD *)v7;
  v9 = sub_140009018(a2, -1LL, *(_QWORD *)(*(_QWORD *)v7 + 8LL));
  if ( v9 < 0 )
  {
    v12 = 1226LL;
LABEL_8:
    sub_14000C2A8(retaddr, v12, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", (unsigned int)v9);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v9;
  }
  v9 = sub_140009018(a2, -2LL, *(_QWORD *)(v8 + 8));
  if ( v9 < 0 )
  {
    v12 = 1229LL;
    goto LABEL_8;
  }
  v10 = sub_1400B6010(a1);
  v9 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8(retaddr, 1231LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", (unsigned int)v10);
    sub_140018FF0(&v14);
    return (unsigned int)v9;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
