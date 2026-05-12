/*
 * XREFs of NvmeNamespaceGetStorageDeviceProperty @ 0x1401BDC3C
 * Callers:
 *     NvmeNamespaceStorageQueryDevicePropertyIoctl @ 0x1401BDE9C (NvmeNamespaceStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     StorBuildNVMeSerialNumber @ 0x140047788 (StorBuildNVMeSerialNumber.c)
 *     StorCopyNVMeFirmwareRevision @ 0x14004FCB8 (StorCopyNVMeFirmwareRevision.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceGetStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdi
  char v8; // al
  unsigned int v9; // r14d
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // ecx
  char v13; // al
  int v14; // ecx
  __int64 i; // rax
  char v16; // dl
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  char v24; // dl
  __int64 result; // rax
  _DWORD Src[14]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v27[2]; // [rsp+59h] [rbp-A7h]
  int v28; // [rsp+79h] [rbp-87h]
  __int16 v29; // [rsp+7Dh] [rbp-83h]
  char v30; // [rsp+7Fh] [rbp-81h]
  char v31; // [rsp+99h] [rbp-67h]
  __int128 v32; // [rsp+9Ah] [rbp-66h]
  char v33; // [rsp+AAh] [rbp-56h]
  _BYTE v34[261]; // [rsp+ABh] [rbp-55h] BYREF
  __int128 v35; // [rsp+1B0h] [rbp+B0h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v3 + 592);
  v35 = 0LL;
  memset_0(Src, 0, 0x18CuLL);
  v8 = *(_BYTE *)(v3 + 136);
  v9 = *a3;
  v10 = *(_OWORD *)(v7 + 24);
  if ( *a3 > 0x18C )
    v9 = 396;
  v11 = *(_OWORD *)(v7 + 40);
  Src[1] = 396;
  Src[0] = 40;
  v28 = *(_DWORD *)(v7 + 56);
  v12 = (v8 & 2) != 0 ? 3 : 0;
  v29 = *(_WORD *)(v7 + 60);
  v13 = *(_BYTE *)(v7 + 62);
  Src[7] = v12 + 17;
  Src[2] = 0x1000000;
  v27[0] = v10;
  v30 = v13;
  v27[1] = v11;
  Src[4] = 57;
  StorCopyNVMeFirmwareRevision(v7, (__int64)&v35, 0x11u);
  Src[5] = 122;
  v32 = v35;
  StorBuildNVMeSerialNumber(a1, 0x100u, (__int64)v34);
  v14 = 63;
  v31 = 0;
  for ( i = 63LL; i >= 0; --i )
  {
    v16 = *((_BYTE *)v27 + i);
    if ( v16 == 32 )
    {
      *((_BYTE *)v27 + i) = 0;
    }
    else if ( v16 )
    {
      break;
    }
    --v14;
  }
  v17 = v14;
  v18 = 15;
  *((_BYTE *)v27 + v17 + 1) = 0;
  v19 = 15LL;
  v33 = 0;
  do
  {
    v20 = *((_BYTE *)&v32 + v19);
    if ( v20 == 32 )
    {
      *((_BYTE *)&v32 + v19) = 0;
    }
    else if ( v20 )
    {
      break;
    }
    --v18;
    --v19;
  }
  while ( v19 >= 0 );
  v21 = v18;
  v22 = 254;
  *((_BYTE *)&v32 + v21 + 1) = 0;
  v23 = 254LL;
  v34[255] = 0;
  do
  {
    v24 = v34[v23];
    if ( v24 == 32 )
    {
      v34[v23] = 0;
    }
    else if ( v24 )
    {
      break;
    }
    --v22;
    --v23;
  }
  while ( v23 >= 0 );
  v34[v22 + 1] = 0;
  Src[6] = 139;
  memmove(a2, Src, v9);
  result = 0LL;
  *a3 = v9;
  return result;
}
