/*
 * XREFs of sub_14008F17C @ 0x14008F17C
 * Callers:
 *     sub_1400915E0 @ 0x1400915E0 (sub_1400915E0.c)
 * Callees:
 *     sub_140002614 @ 0x140002614 (sub_140002614.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008F17C(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v7; // ebx
  int v8; // edx
  _QWORD *v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // rdi
  DWORD CurrentProcessId; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  UINT v22; // edi
  HANDLE CurrentProcess; // rax
  int v24; // edi
  _DWORD v25[10]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v27; // [rsp+60h] [rbp+8h] BYREF

  if ( a1[5] )
  {
    v7 = -2147418113;
    v8 = 55;
LABEL_3:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h", v7);
    return v7;
  }
  a1[2] = a2;
  v10 = a1 + 4;
  sub_14005DFF0(a1 + 4, a3);
  v13 = a5;
  *a5 = 3;
  v13[4] = 32;
  v13[7] = a4;
  v14 = (_DWORD *)a1[2];
  if ( *v14 > 5u )
  {
    v27 = v13[6];
    v25[0] = 3;
    sub_140002614((__int64)v14, (__int64)&unk_1400D3261, v11, v12, (__int64)v25, (__int64)&v27);
  }
  if ( (int)sub_1400B6010(*v10) < 0 )
  {
    v15 = (_DWORD *)a1[2];
    if ( *v15 > 2u )
    {
      CurrentProcessId = GetCurrentProcessId();
      v17 = *v10;
      v27 = CurrentProcessId;
      v25[0] = sub_1400B6010(v17);
      sub_140002614((__int64)v15, (__int64)&unk_1400D322A, v18, v19, (__int64)v25, (__int64)&v27);
    }
    v20 = sub_1400B6010(*v10);
    v21 = *v10;
    if ( (v20 & 0x1FFF0000) == 0x70000 )
      v22 = (unsigned __int16)sub_1400B6010(v21);
    else
      v22 = sub_1400B6010(v21);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, v22);
  }
  if ( *v13 != 3 )
  {
    v7 = -2147024809;
    v8 = 70;
    goto LABEL_3;
  }
  v24 = v13[1];
  if ( v24 >= 0 )
  {
    a1[5] = *((_QWORD *)v13 + 1);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 71, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h", v24);
    return (unsigned int)v24;
  }
}
