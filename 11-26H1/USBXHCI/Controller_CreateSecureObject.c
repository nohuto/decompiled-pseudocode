/*
 * XREFs of Controller_CreateSecureObject @ 0x140074EE0
 * Callers:
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  int v4; // ecx
  __int128 v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+40h] [rbp-9h]
  GUID v8[4]; // [rsp+50h] [rbp+7h] BYREF

  v7 = 0;
  v6 = 0LL;
  memset(v8, 0, sizeof(v8));
  v2 = *(_OWORD *)(a1 + 736);
  v3 = *(_QWORD *)(a1 + 112);
  v8[3].Data4[0] = *(_BYTE *)(a1 + 1002);
  v8[3].Data4[1] = *(_BYTE *)(a1 + 1003);
  v8[2].Data1 = 1;
  *(_QWORD *)v8[1].Data4 = 0LL;
  *(_OWORD *)v8[2].Data4 = v2;
  v4 = SecureChannel_SendRequestSynchronously(v3, v8, 64, (__int64)&v6, 24);
  if ( v4 >= 0 )
  {
    v4 = v6;
    if ( (int)v6 >= 0 )
    {
      *(_QWORD *)(a1 + 1016) = *((_QWORD *)&v6 + 1);
      *(_DWORD *)(a1 + 1012) = v7;
    }
  }
  return (unsigned int)v4;
}
