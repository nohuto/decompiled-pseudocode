/*
 * XREFs of sub_14008CC5C @ 0x14008CC5C
 * Callers:
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 * Callees:
 *     sub_140002614 @ 0x140002614 (sub_140002614.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008CC5C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  _DWORD *v12; // rbp
  DWORD CurrentProcessId; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  UINT v19; // esi
  HANDLE CurrentProcess; // rax
  int v21; // esi
  _DWORD v23[10]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v25; // [rsp+60h] [rbp+8h] BYREF

  if ( a1[5] )
  {
    v6 = -2147418113;
    v7 = 105;
LABEL_19:
    sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h", v6);
    return v6;
  }
  a1[2] = a2;
  v8 = a1 + 3;
  sub_14005DFF0(a1 + 3, a3);
  *(_DWORD *)a4 = 3;
  *(_DWORD *)(a4 + 16) = 200;
  v11 = (_DWORD *)a1[2];
  if ( *v11 > 5u )
  {
    v25 = *(_DWORD *)(a4 + 24);
    v23[0] = 3;
    sub_140002614((__int64)v11, (__int64)&unk_1400D3176, v9, v10, (__int64)v23, (__int64)&v25);
  }
  if ( (int)sub_1400B6010(*v8) < 0 )
  {
    v12 = (_DWORD *)a1[2];
    if ( *v12 > 2u )
    {
      CurrentProcessId = GetCurrentProcessId();
      v14 = *v8;
      v25 = CurrentProcessId;
      v23[0] = sub_1400B6010(v14);
      sub_140002614((__int64)v12, (__int64)&unk_1400D313F, v15, v16, (__int64)v23, (__int64)&v25);
    }
    v17 = sub_1400B6010(*v8);
    v18 = *v8;
    if ( (v17 & 0x1FFF0000) == 0x70000 )
      v19 = (unsigned __int16)sub_1400B6010(v18);
    else
      v19 = sub_1400B6010(v18);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, v19);
  }
  if ( *(_DWORD *)a4 != 3 || *(_DWORD *)(a4 + 24) != 5 || *(_WORD *)(a4 + 48) > 0x36u )
  {
    v6 = -2147024809;
    v7 = 119;
    goto LABEL_19;
  }
  v21 = *(_DWORD *)(a4 + 4);
  if ( v21 >= 0 )
  {
    a1[5] = *(_QWORD *)(a4 + 8);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      120,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h",
      v21);
    return (unsigned int)v21;
  }
}
