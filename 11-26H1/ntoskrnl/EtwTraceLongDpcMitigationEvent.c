/*
 * XREFs of EtwTraceLongDpcMitigationEvent @ 0x1406C8814
 * Callers:
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceLongDpcMitigationEvent(__int64 a1, __int64 a2, char a3, char a4, char a5, char a6)
{
  int v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+34h] [rbp-2Ch]
  char v9; // [rsp+38h] [rbp-28h]
  char v10; // [rsp+39h] [rbp-27h]
  char v11; // [rsp+3Ah] [rbp-26h]
  char v12; // [rsp+3Bh] [rbp-25h]
  _QWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a1 + 1296);
  if ( a2 )
    v8 = *(_DWORD *)(a2 + 1296);
  else
    v8 = -1;
  v11 = a5;
  v12 = a6;
  v9 = a3;
  v10 = a4;
  v13[0] = &v7;
  v13[1] = 12LL;
  return EtwTraceKernelEvent((int)v13, 1, 0x20040000u, 3959, 5245442);
}
