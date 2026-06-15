/*
 * XREFs of sub_140056FE0 @ 0x140056FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400050D8 @ 0x1400050D8 (sub_1400050D8.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140056FE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  unsigned __int16 *v15; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v7 = *(_DWORD *)(a1 + 256) == 0;
  v19 = v3;
  if ( v7 )
  {
    v8 = -2005139437;
    v9 = 874;
LABEL_6:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v8);
    goto LABEL_15;
  }
  v10 = sub_1400050D8(a1, a2);
  if ( !v10 )
  {
    v9 = 878;
LABEL_5:
    v8 = -2005139430;
    goto LABEL_6;
  }
  v12 = *(_QWORD *)sub_140009AA8((_QWORD *)(v10 + 16), v11);
  if ( !v12 )
  {
    v9 = 882;
    goto LABEL_5;
  }
  v18 = 0LL;
  v13 = sub_1400B6010(v12);
  v8 = v13;
  if ( v13 >= 0 )
  {
    v15 = (unsigned __int16 *)sub_1400B6010(v18);
    v13 = sub_140006BCC(v15, a3);
    v8 = v13;
    if ( v13 >= 0 )
    {
      sub_140003238(&v18);
      v8 = 0;
      goto LABEL_15;
    }
    v14 = 892;
  }
  else
  {
    v14 = 886;
  }
  sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v13);
  sub_140003238(&v18);
LABEL_15:
  sub_140018FF0(&v19);
  return v8;
}
