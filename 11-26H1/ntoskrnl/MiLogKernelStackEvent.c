/*
 * XREFs of MiLogKernelStackEvent @ 0x1405000AC
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogKernelStackEvent(__int64 a1, __int64 a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+48h] [rbp-20h] BYREF

  v4[1] = a1;
  v4[2] = a2;
  v5[1] = 24LL;
  v4[0] = 11LL;
  v5[0] = v4;
  return EtwTraceKernelEvent((int)v5, 1, 0x20000001u, 633 - (a3 != 0), 290462468);
}
