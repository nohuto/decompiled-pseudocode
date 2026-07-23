/*
 * XREFs of EtwTraceWakeCounter @ 0x140B49EFC
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWakeCounter(__int64 a1, int a2, __int16 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int16 v8; // ax
  unsigned int v9; // r8d
  __int16 v10; // r10
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+44h] [rbp-34h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  _QWORD v16[2]; // [rsp+50h] [rbp-28h] BYREF

  if ( a4 <= 0 )
  {
    if ( !a4 )
    {
      v9 = -2147483136;
      v8 = a2 != 0 ? 928 : 848;
      goto LABEL_7;
    }
    v8 = a2 != 0 ? 912 : 832;
  }
  else
  {
    v8 = a2 != 0 ? 896 : 816;
  }
  v9 = -2147475456;
LABEL_7:
  v10 = v8 + a3;
  v12[0] = a1;
  v12[1] = a7;
  v15 = a5;
  v14 = a4;
  if ( a6 )
    v13 = *(_DWORD *)(a6 + 464);
  else
    v13 = -1;
  v16[1] = 32LL;
  v16[0] = v12;
  return EtwTraceKernelEvent((int)v16, 1, v9, v10, 6297858);
}
