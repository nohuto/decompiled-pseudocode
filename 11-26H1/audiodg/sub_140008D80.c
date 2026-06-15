/*
 * XREFs of sub_140008D80 @ 0x140008D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140009018 @ 0x140009018 (sub_140009018.c)
 *     sub_140009400 @ 0x140009400 (sub_140009400.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140048178 @ 0x140048178 (sub_140048178.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140008D80(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v5 = *(_QWORD *)(a1 + 24);
  v15 = v2;
  if ( v5 )
  {
    v6 = (_QWORD *)sub_140009AA8(v5 + 64);
    v7 = sub_140009AA8(*v6);
    v8 = sub_140009018(a2, -1LL, *(_QWORD *)(*(_QWORD *)v7 + 8LL));
    if ( v8 < 0 )
    {
      v13 = 836LL;
    }
    else
    {
      v9 = sub_140009400(*(_QWORD *)(a1 + 24));
      if ( !v9 )
        goto LABEL_5;
      v8 = sub_140009018(a2, -2LL, *(_QWORD *)(v9 + 8));
      if ( v8 >= 0 )
        goto LABEL_5;
      v13 = 842LL;
    }
    sub_14000C2A8(retaddr, v13, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v8);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v8;
  }
  if ( *(_QWORD *)(a1 + 272) )
  {
    v10 = sub_140048178(a2);
    v8 = v10;
    if ( v10 < 0 )
    {
      v12 = 847LL;
LABEL_18:
      sub_14000C2A8(retaddr, v12, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v10);
      sub_140018FF0(&v15);
      return (unsigned int)v8;
    }
  }
LABEL_5:
  v10 = sub_1400B6010(a1);
  v8 = v10;
  if ( v10 < 0 )
  {
    v12 = 850LL;
    goto LABEL_18;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
