/*
 * XREFs of sub_140030E30 @ 0x140030E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140030E30(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int16 *v9; // rax
  int v10; // eax
  int v12; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v15 = v4;
  if ( !*(_DWORD *)(a1 + 240) )
  {
    v8 = -2005139437;
    v12 = 909;
LABEL_16:
    sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v8);
LABEL_12:
    if ( v4 )
      LeaveCriticalSection(v4);
    return v8;
  }
  v6 = *(_QWORD *)sub_140009AA8((_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL), v5);
  if ( !v6 )
  {
    v8 = -2005139430;
    v12 = 913;
    goto LABEL_16;
  }
  v14 = 0LL;
  v7 = sub_1400B6010(v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 917, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v7);
    if ( v14 )
      sub_1400B6010(v14);
    goto LABEL_12;
  }
  v9 = (unsigned __int16 *)sub_1400B6010(v14);
  v10 = sub_140006BCC(v9, a2);
  v8 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8((int)retaddr, 919, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v10);
    sub_140003238(&v14);
    sub_140018FF0(&v15);
    return v8;
  }
  if ( v14 )
    sub_1400B6010(v14);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
