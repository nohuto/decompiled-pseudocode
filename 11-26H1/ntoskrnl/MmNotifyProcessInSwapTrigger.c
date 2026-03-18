/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1402C7BAC
 * Callers:
 *     KiRequestProcessInSwap @ 0x1402C6AEC (KiRequestProcessInSwap.c)
 *     KiInSwapSingleProcess @ 0x1402C79E4 (KiInSwapSingleProcess.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404E33C4 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9
  int v3; // ecx
  __int64 v4; // r11
  int v5; // r8d
  int v6; // [rsp+20h] [rbp-39h]
  int v7; // [rsp+28h] [rbp-31h]
  int v8; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h] BYREF
  __int64 v10[4]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v11[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  __int64 *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  if ( stru_140E36558.FirstArgument
    && (HIBYTE(*(_DWORD *)(a1 + 1208)) & 0x30) == 0x20
    && *(_DWORD *)stru_140E36558.FirstArgument > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(stru_140E36558.FirstArgument, 8LL) )
    {
      tlgCreate1Sz_char(v11, v1 + 824);
      v3 = *(_DWORD *)(v2 + 464);
      v12 = &v8;
      v8 = v3;
      v14 = &v9;
      v13 = 4LL;
      v9 = 0x1000000LL;
      v15 = v4;
      tlgWriteEx_EtwWriteEx(v5, (int)&dword_14005765C, v5, v4 - 7, v6, v7, 5u, (__int64)v10);
    }
  }
}
