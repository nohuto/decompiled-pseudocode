/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x180084F70
 * Callers:
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180086610 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetNtPathFromDosPath(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm0
  int v6; // eax
  __int128 *v7; // [rsp+40h] [rbp-88h] BYREF
  __int128 v8; // [rsp+48h] [rbp-80h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v10; // [rsp+60h] [rbp-68h]
  __int64 v11; // [rsp+68h] [rbp-60h]
  int v12; // [rsp+70h] [rbp-58h]
  int v13; // [rsp+74h] [rbp-54h]
  __int128 v14; // [rsp+78h] [rbp-50h]
  _BYTE v15[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-20h]

  v16 = 0LL;
  v7 = 0LL;
  v9[1] = 0;
  v13 = 0;
  v8 = 0LL;
  memset(v15, 0, sizeof(v15));
  result = RtlpDosPathNameToRelativeNtPathName(1, a1, (unsigned __int16 *)a2, (unsigned __int16 *)&v8, &v7, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v7 == &v8 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v4 )
        RtlpSysVolFree(v4);
      v5 = v8;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v5;
    }
    v6 = 64;
    v9[0] = 48;
    v10 = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v6 = 2112;
    v11 = a2;
    v12 = v6;
    v14 = 0LL;
    return ZwQueryAttributesFile(v9, v15);
  }
  return result;
}
