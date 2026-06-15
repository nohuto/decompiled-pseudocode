/*
 * XREFs of sub_140090550 @ 0x140090550
 * Callers:
 *     sub_1400910F0 @ 0x1400910F0 (sub_1400910F0.c)
 * Callees:
 *     sub_14000253C @ 0x14000253C (sub_14000253C.c)
 *     sub_140002614 @ 0x140002614 (sub_140002614.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140090550(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rcx
  _DWORD *v7; // rsi
  DWORD CurrentProcessId; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  UINT v14; // edi
  HANDLE CurrentProcess; // rax
  int v16; // ebx
  int v17; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  int v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 22;
  *(_QWORD *)(a2 + 8) = a1[5];
  *(_DWORD *)(a2 + 16) = 24;
  v6 = (_DWORD *)a1[2];
  if ( *v6 > 5u )
  {
    v20 = 22;
    sub_14000253C((__int64)v6, (__int64)&unk_1400D350D, a3, a4, (__int64)&v20);
  }
  if ( (int)sub_1400B6010(a1[4]) < 0 )
  {
    v7 = (_DWORD *)a1[2];
    if ( *v7 > 2u )
    {
      CurrentProcessId = GetCurrentProcessId();
      v9 = a1[4];
      v20 = CurrentProcessId;
      v21 = sub_1400B6010(v9);
      sub_140002614((__int64)v7, (__int64)&unk_1400D34D6, v10, v11, (__int64)&v21, (__int64)&v20);
    }
    v12 = sub_1400B6010(a1[4]);
    v13 = a1[4];
    if ( (v12 & 0x1FFF0000) == 0x70000 )
      v14 = (unsigned __int16)sub_1400B6010(v13);
    else
      v14 = sub_1400B6010(v13);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, v14);
  }
  if ( *(_DWORD *)a2 != 22 )
  {
    v16 = -2147024809;
    v17 = 93;
LABEL_12:
    sub_14000C2A8(
      (int)retaddr,
      v17,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h",
      v16);
    return (unsigned int)v16;
  }
  v16 = *(_DWORD *)(a2 + 4);
  if ( v16 < 0 )
  {
    v17 = 94;
    goto LABEL_12;
  }
  return 0LL;
}
