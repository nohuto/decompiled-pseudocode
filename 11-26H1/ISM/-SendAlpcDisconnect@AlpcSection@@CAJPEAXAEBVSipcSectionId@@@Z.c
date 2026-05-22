/*
 * XREFs of ?SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z @ 0x1801130CC
 * Callers:
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010F7D0 (--1AlpcSection@@UEAA@XZ.c)
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x180110384 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x180112378 (-IsInitialized@SipcSectionId@@QEBA_NXZ.c)
 */

__int64 __fastcall AlpcSection::SendAlpcDisconnect(void *a1, const struct SipcSectionId *a2)
{
  __int128 *v2; // rdx
  __int64 v3; // r10
  __int128 v4; // xmm1
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v9[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h]
  __int128 v11; // [rsp+70h] [rbp-90h]
  __int128 v12; // [rsp+80h] [rbp-80h]
  __int64 v13[9]; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( !SipcSectionId::IsInitialized(a2) )
    return 0LL;
  v4 = v2[1];
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  v8 = 0LL;
  v13[0] = 1610612736LL;
  v11 = *v2;
  LODWORD(v9[0]) = 4718624;
  v12 = v4;
  v5 = NtAlpcSendWaitReceivePort(v3, 0x10000LL, v9, v13, 0LL, 0LL, 0LL, &v8);
  if ( v5 >= 0 )
    return 0LL;
  v6 = v5 | 0x10000000;
  result = 2147549183LL;
  if ( v6 < 0 )
    return (unsigned int)v6;
  return result;
}
