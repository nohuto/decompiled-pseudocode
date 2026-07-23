/*
 * XREFs of EtwpWriteProcessorTrace @ 0x1406CC500
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwpWriteProcessorTrace(__int64 *a1, __int64 a2, int a3, int a4)
{
  int v4; // r10d
  unsigned int v5; // r10d
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+4Ch] [rbp-Ch]

  v4 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 9) = a4;
  v10[2] = a2;
  v5 = v4 & 0xFFFFE600 | 2;
  v6 = *a1;
  *((_DWORD *)a1 + 12) = v5;
  *((_DWORD *)a1 + 8) = a3;
  v11 = a3;
  v7 = *(_DWORD *)v6;
  v8 = *(_QWORD *)(v6 + 1360);
  v10[0] = a1 + 1;
  v10[1] = 32LL;
  v12 = 0;
  return EtwpLogKernelEvent((__int64)v10, v8, v7, 2u, 0x1F20u, v5);
}
