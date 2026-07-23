/*
 * XREFs of WheapPrmTranslateDimmAddressAmd @ 0x1406DB824
 * Callers:
 *     WheaPrmTranslateDimmAddress @ 0x1406DB630 (WheaPrmTranslateDimmAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x1406DB750 (WheapPrmInvokeHandler.c)
 */

__int64 __fastcall WheapPrmTranslateDimmAddressAmd(char *a1, __int64 *a2)
{
  __int64 result; // rax
  char v4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+31h] [rbp-1Fh]
  char v6; // [rsp+39h] [rbp-17h]
  char v7; // [rsp+3Ah] [rbp-16h]
  char v8; // [rsp+3Bh] [rbp-15h]
  int v9; // [rsp+3Ch] [rbp-14h]
  __int16 v10; // [rsp+40h] [rbp-10h]
  char v11; // [rsp+42h] [rbp-Eh]
  char v12; // [rsp+43h] [rbp-Dh]
  __int64 *v13; // [rsp+44h] [rbp-Ch]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(a1 + 1);
  v6 = a1[9];
  v7 = a1[10];
  v8 = a1[11];
  v9 = *((_DWORD *)a1 + 3);
  v10 = *((_WORD *)a1 + 8);
  v11 = a1[18];
  v12 = a1[19];
  v13 = &v14;
  v14 = -1LL;
  result = WheapPrmInvokeHandler(&AMD_DRAM_TO_SPA_PRM_HANDLER_GUID, (__int64)&v4, 28LL);
  if ( (int)result >= 0 )
    *a2 = v14;
  return result;
}
