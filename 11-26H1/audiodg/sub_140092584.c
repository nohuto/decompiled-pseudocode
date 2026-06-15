/*
 * XREFs of sub_140092584 @ 0x140092584
 * Callers:
 *     sub_140092B10 @ 0x140092B10 (sub_140092B10.c)
 * Callees:
 *     sub_140002614 @ 0x140002614 (sub_140002614.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140092584(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v7; // ebx
  int v8; // edx
  _QWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rbx
  _DWORD *v13; // rcx
  _DWORD *v14; // rbp
  DWORD CurrentProcessId; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  UINT v21; // esi
  HANDLE CurrentProcess; // rax
  int v23; // esi
  _DWORD v25[10]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v27; // [rsp+60h] [rbp+8h] BYREF

  if ( a1[5] )
  {
    v7 = -2147418113;
    v8 = 55;
LABEL_19:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h", v7);
    return v7;
  }
  a1[2] = a2;
  v9 = a1 + 4;
  sub_14005DFF0(a1 + 4, a3);
  v12 = a5;
  *a5 = 3;
  v12[4] = 36;
  v12[7] = a4;
  v13 = (_DWORD *)a1[2];
  if ( *v13 > 5u )
  {
    v27 = v12[6];
    v25[0] = 3;
    sub_140002614((__int64)v13, (__int64)&unk_1400D3A3A, v10, v11, (__int64)v25, (__int64)&v27);
  }
  if ( (int)sub_1400B6010(*v9) < 0 )
  {
    v14 = (_DWORD *)a1[2];
    if ( *v14 > 2u )
    {
      CurrentProcessId = GetCurrentProcessId();
      v16 = *v9;
      v27 = CurrentProcessId;
      v25[0] = sub_1400B6010(v16);
      sub_140002614((__int64)v14, (__int64)&unk_1400D3AEF, v17, v18, (__int64)v25, (__int64)&v27);
    }
    v19 = sub_1400B6010(*v9);
    v20 = *v9;
    if ( (v19 & 0x1FFF0000) == 0x70000 )
      v21 = (unsigned __int16)sub_1400B6010(v20);
    else
      v21 = sub_1400B6010(v20);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, v21);
  }
  if ( *v12 != 3 || v12[6] != 9 || v12[8] > 1u )
  {
    v7 = -2147024809;
    v8 = 70;
    goto LABEL_19;
  }
  v23 = v12[1];
  if ( v23 >= 0 )
  {
    a1[5] = *((_QWORD *)v12 + 1);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 71, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h", v23);
    return (unsigned int)v23;
  }
}
