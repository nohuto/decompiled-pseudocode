/*
 * XREFs of sub_14008ADAC @ 0x14008ADAC
 * Callers:
 *     sub_14008C1A0 @ 0x14008C1A0 (sub_14008C1A0.c)
 * Callees:
 *     sub_14000253C @ 0x14000253C (sub_14000253C.c)
 *     sub_140002614 @ 0x140002614 (sub_140002614.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008ADAC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  int v20; // ebx
  int v21; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  int v24; // [rsp+50h] [rbp+8h] BYREF
  int v25; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 6;
  *(_QWORD *)(a2 + 8) = a1[5];
  *(_DWORD *)(a2 + 16) = 560;
  v6 = (_DWORD *)a1[2];
  if ( *v6 > 5u )
  {
    v24 = 6;
    sub_14000253C((__int64)v6, (__int64)&unk_1400D2E37, a3, a4, (__int64)&v24);
  }
  if ( (int)sub_1400B6010(a1[4]) < 0 )
  {
    v7 = (_DWORD *)a1[2];
    if ( *v7 > 2u )
    {
      CurrentProcessId = GetCurrentProcessId();
      v9 = a1[4];
      v24 = CurrentProcessId;
      v25 = sub_1400B6010(v9);
      sub_140002614((__int64)v7, (__int64)&unk_1400D2E00, v10, v11, (__int64)&v25, (__int64)&v24);
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
  if ( *(_DWORD *)a2 != 6 )
    goto LABEL_22;
  v16 = *(_DWORD *)(a2 + 24);
  if ( v16 > 3 )
    goto LABEL_22;
  v17 = 0;
  if ( v16 )
  {
    while ( *(_WORD *)(88LL * v17 + a2 + 60) <= 0x36u )
    {
      if ( ++v17 >= v16 )
        goto LABEL_15;
    }
    goto LABEL_22;
  }
LABEL_15:
  v18 = *(_DWORD *)(a2 + 28);
  if ( v18 > 3 )
  {
LABEL_22:
    v20 = -2147024809;
    v21 = 93;
    goto LABEL_23;
  }
  v19 = 0;
  if ( v18 )
  {
    while ( *(_WORD *)(88LL * v19 + a2 + 324) <= 0x36u )
    {
      if ( ++v19 >= v18 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  v20 = *(_DWORD *)(a2 + 4);
  if ( v20 >= 0 )
    return 0LL;
  v21 = 94;
LABEL_23:
  sub_14000C2A8((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\DspObjectBase.h", v20);
  return (unsigned int)v20;
}
