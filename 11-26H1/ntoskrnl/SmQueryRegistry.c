/*
 * XREFs of SmQueryRegistry @ 0x140D0AA58
 * Callers:
 *     SmInitSystem @ 0x140C7F2E8 (SmInitSystem.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall SmQueryRegistry(_DWORD *a1)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  const wchar_t *v6; // [rsp+40h] [rbp-9h]
  _DWORD *v7; // [rsp+48h] [rbp-1h]
  int v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+90h] [rbp+47h]
  int v17; // [rsp+98h] [rbp+4Fh]

  v7 = a1;
  v4 = 0LL;
  v9 = 0LL;
  v6 = L"EnableDirtyStores";
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v5 = 288;
  v8 = 0x4000000;
  RtlQueryRegistryValuesEx(
    0,
    (int)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    (int)&v4,
    0);
  v2 = *a1;
  if ( (*a1 & 0x100) != 0 && (*a1 & 0x200) == 0 || (v2 & 0x2000) != 0 && (v2 & 0x200) == 0 )
    *a1 = 0;
  return 0LL;
}
