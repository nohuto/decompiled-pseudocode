/*
 * XREFs of sub_1400085D0 @ 0x1400085D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_140008734 @ 0x140008734 (sub_140008734.c)
 *     sub_140009934 @ 0x140009934 (sub_140009934.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 */

__int64 __fastcall sub_1400085D0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v17 = v2;
  v5 = sub_140008734(a1, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = (_QWORD *)sub_140009AA8(v7 + 64);
      v9 = sub_140009AA8(*v8);
      v10 = sub_140008528(a2, *(_QWORD *)(*(_QWORD *)v9 + 8LL));
      v11 = v10;
      if ( v10 >= 0 )
        goto LABEL_4;
      sub_14000C2A8(retaddr, 905LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v10);
      if ( v2 )
        LeaveCriticalSection(v2);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 272);
      if ( !v13 || (v14 = sub_140009934(v13, 0LL), v15 = sub_140008528(a2, *(_QWORD *)(v14 + 8)), v11 = v15, v15 >= 0) )
      {
LABEL_4:
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      sub_14000C2A8(retaddr, 911LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v15);
      sub_140018FF0(&v17);
    }
    return v11;
  }
  sub_14000C2A8(retaddr, 897LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v5);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
