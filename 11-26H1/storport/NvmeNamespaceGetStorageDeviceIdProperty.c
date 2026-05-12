/*
 * XREFs of NvmeNamespaceGetStorageDeviceIdProperty @ 0x1401A650C
 * Callers:
 *     NvmeNamespaceStorageQueryDeviceIdPropertyIoctl @ 0x1401AC0E0 (NvmeNamespaceStorageQueryDeviceIdPropertyIoctl.c)
 * Callees:
 *     StorBuildNVMeIdentifier @ 0x1400969B4 (StorBuildNVMeIdentifier.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceGetStorageDeviceIdProperty(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // eax
  _BYTE Src[128]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(Src, 0, sizeof(Src));
  if ( *a3 < 8 )
    return 3221225485LL;
  memset_0(a2, 0, *a3);
  *a2 = 16;
  a2[1] = 12;
  v8 = StorBuildNVMeIdentifier(a1, v7, (__int64)Src);
  v9 = (v8 + 20) & 0xFFFFFFFC;
  v10 = v9 + 12;
  if ( *a3 < v9 + 12 )
  {
    v11 = a2[1];
    if ( v11 >= *a3 )
      v11 = *a3;
  }
  else
  {
    *((_WORD *)a2 + 11) = v9;
    a2[2] = 1;
    a2[3] = 3;
    a2[4] = 8;
    *((_WORD *)a2 + 10) = v8;
    a2[6] = 0;
    memmove(a2 + 7, Src, v8);
    v11 = v10;
  }
  *a3 = v11;
  result = 0LL;
  a2[1] = v10;
  return result;
}
