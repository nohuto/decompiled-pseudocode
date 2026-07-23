/*
 * XREFs of CmpCreateObjectTypes @ 0x140CF09C0
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 */

__int64 CmpCreateObjectTypes()
{
  __int16 v1; // [rsp+20h] [rbp-29h] BYREF
  char v2; // [rsp+22h] [rbp-27h]
  char v3; // [rsp+23h] [rbp-26h]
  int v4; // [rsp+24h] [rbp-25h]
  int v5; // [rsp+28h] [rbp-21h]
  int v6; // [rsp+2Ch] [rbp-1Dh]
  int v7; // [rsp+30h] [rbp-19h]
  int v8; // [rsp+34h] [rbp-15h]
  int v9; // [rsp+38h] [rbp-11h]
  int v10; // [rsp+3Ch] [rbp-Dh]
  int v11; // [rsp+44h] [rbp-5h]
  int v12; // [rsp+48h] [rbp-1h]
  __int64 v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  _KAFFINITY_EX *(__fastcall *v15)(__int64, __int64, __int64, unsigned __int64); // [rsp+60h] [rbp+17h]
  _KAFFINITY_EX *(__fastcall *v16)(__int64); // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall *v17)(__int64, __int64, __int64, unsigned __int8, int, __int64, __int128 *, __int64, __int64, __int64, _QWORD *); // [rsp+70h] [rbp+27h]
  __int64 (__fastcall *v18)(__int64, int, unsigned int *, void *, __int64, __int64, int, __int64); // [rsp+78h] [rbp+2Fh]
  __int64 (__fastcall *v19)(__int64, __int64, __int64, unsigned int, __int64, char); // [rsp+80h] [rbp+37h]

  memset_0(&v1, 0, 0x78uLL);
  v3 |= 1u;
  v1 = 120;
  v9 = 983103;
  v10 = 983103;
  v5 = 48;
  v6 = 131097;
  v2 = v2 & 0xE2 | 0xD;
  v15 = CmpCloseKeyObject;
  v16 = CmpDeleteKeyObject;
  v17 = CmpParseKey;
  v18 = CmpSecurityMethod;
  v19 = CmpQueryKeyName;
  v7 = 131078;
  v8 = 131129;
  v12 = 112;
  v11 = 1;
  v4 = 256;
  v13 = 0LL;
  v14 = 0LL;
  return ObCreateObjectType((const UNICODE_STRING *)&CmpKeyTypeNameString, &v1, 0LL, (__int64)&CmKeyObjectType);
}
