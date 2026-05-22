/*
 * XREFs of ?InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ @ 0x180112078
 * Callers:
 *     ?Create@SipcPrivateNamespace@@QEAAJXZ @ 0x180110910 (-Create@SipcPrivateNamespace@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetSidFromCurrentProcessToken @ 0x180111EC0 (_anonymous_namespace_--GetSidFromCurrentProcessToken.c)
 */

signed int __fastcall SipcPrivateNamespaceAttributes::InitializeForCurrentProcess(PUCHAR pbBuffer)
{
  signed int result; // eax
  NTSTATUS v3; // ecx
  int v4; // ecx
  int v5; // eax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm1
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-61h] BYREF
  __int128 v14; // [rsp+48h] [rbp-51h]
  __int128 v15; // [rsp+58h] [rbp-41h]
  __int128 v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+78h] [rbp-21h]
  __int64 v18[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v20; // [rsp+A0h] [rbp+7h]
  __int128 v21; // [rsp+B0h] [rbp+17h]
  __int128 v22; // [rsp+C0h] [rbp+27h]
  int v23; // [rsp+D0h] [rbp+37h]

  memset_0(&v12, 0, 0x50uLL);
  result = anonymous_namespace_::GetSidFromCurrentProcessToken(TokenAppContainerSid, &v12, 0x50u, &v12, (__int64)v13);
  if ( result >= 0 )
  {
    memset_0(v18, 0, 0x58uLL);
    result = anonymous_namespace_::GetSidFromCurrentProcessToken(TokenUser, v18, 0x58u, v18, (__int64)v19);
    if ( result >= 0 )
    {
      v3 = BCryptGenRandom(0LL, pbBuffer, 0x10u, 2u);
      if ( v3 >= 0 )
      {
        v5 = v17;
        v6 = v14;
        *((_OWORD *)pbBuffer + 1) = *(_OWORD *)v13;
        v7 = v15;
        *((_OWORD *)pbBuffer + 2) = v6;
        v8 = v16;
        *((_OWORD *)pbBuffer + 3) = v7;
        *(_OWORD *)(pbBuffer + 84) = *(_OWORD *)v19;
        v9 = v21;
        *((_OWORD *)pbBuffer + 4) = v8;
        *((_DWORD *)pbBuffer + 20) = v5;
        v10 = v23;
        *(_OWORD *)(pbBuffer + 100) = v20;
        v11 = v22;
        *(_OWORD *)(pbBuffer + 116) = v9;
        *(_OWORD *)(pbBuffer + 132) = v11;
        *((_DWORD *)pbBuffer + 37) = v10;
        return 0;
      }
      else
      {
        v4 = v3 | 0x10000000;
        result = -2147418113;
        if ( v4 < 0 )
          return v4;
      }
    }
  }
  return result;
}
