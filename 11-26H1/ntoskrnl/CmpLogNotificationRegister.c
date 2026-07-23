/*
 * XREFs of CmpLogNotificationRegister @ 0x14085B884
 * Callers:
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall CmpLogNotificationRegister(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-20h] BYREF
  char v8; // [rsp+50h] [rbp-10h]
  char v9; // [rsp+51h] [rbp-Fh]
  char v10; // [rsp+52h] [rbp-Eh]
  int v11; // [rsp+53h] [rbp-Dh]
  char v12; // [rsp+57h] [rbp-9h]

  v10 = a5;
  v7[0] = a1;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  v11 = 0;
  v12 = 0;
  v6[0] = v7;
  v6[1] = 19LL;
  return EtwTraceKernelEvent((int)v6, 1, 0x42000000u, 2352, 6297858);
}
