/*
 * XREFs of KiDynamicProcessorAddNotification @ 0x1405F3270
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiDynamicProcessorAddNotification(int a1, int a2, __int16 a3, char a4, int a5, int a6)
{
  unsigned int v7; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v8[3]; // [rsp+28h] [rbp-28h] BYREF
  __int16 v9; // [rsp+34h] [rbp-1Ch]
  char v10; // [rsp+36h] [rbp-1Ah]
  char v11; // [rsp+37h] [rbp-19h]
  int v12; // [rsp+38h] [rbp-18h]

  v12 = a5;
  v8[0] = a1;
  v8[1] = a2;
  v9 = a3;
  v10 = a4;
  v8[2] = a6;
  v11 = 0;
  v7 = 0;
  ExNotifyWithProcessing(ExCbProcessorAdd, (__int64)v8, (int)&v7, 0LL);
  return v7;
}
