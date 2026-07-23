/*
 * XREFs of VhdInitialize @ 0x140D08C34
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbCatW @ 0x14041D8F0 (RtlStringCbCatW.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x140723720 (Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     RtlStringFromGUID @ 0x1409F98E0 (RtlStringFromGUID.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140D08F30 (VhdiGetDiskParameters.c)
 */

__int64 __fastcall VhdInitialize(__int64 a1)
{
  const char *v2; // rcx
  unsigned int v3; // ebx
  char *v4; // rax
  _QWORD *v5; // rax
  _QWORD *i; // rcx
  int DiskParameters; // edi
  ULONG_PTR v8; // rsi
  const wchar_t *v9; // r13
  int v10; // ecx
  __int64 v11; // r15
  __int64 v12; // rax
  ULONG_PTR v13; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v15; // r14
  __int64 v16; // r12
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r12d
  ULONG_PTR v20; // rax
  _DWORD *v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v26; // [rsp+40h] [rbp-99h] BYREF
  __int128 v27; // [rsp+50h] [rbp-89h]
  _BYTE v28[208]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v30; // [rsp+148h] [rbp+6Fh] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+150h] [rbp+77h] BYREF
  __int64 v32; // [rsp+158h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v27 = 0LL;
  memset_0(v28, 0, 0x90uLL);
  v2 = *(const char **)(a1 + 184);
  v3 = 0;
  GuidString = 0LL;
  LOBYTE(v29) = 0;
  pszSrc = 0LL;
  v32 = 0LL;
  v30 = 0;
  v4 = strstr(v2, "vdisk(");
  if ( v4 && strstr(v4 + 1, "partition(") )
  {
    v5 = *(_QWORD **)(a1 + 232);
    for ( i = (_QWORD *)*v5; ; i = (_QWORD *)*i )
    {
      if ( i == v5 )
        return v3;
      if ( i[7] )
        break;
    }
    if ( i )
    {
      DiskParameters = VhdiGetDiskParameters(i[7], v28, &v32, &v29, &pszSrc);
      if ( DiskParameters < 0 )
      {
        v8 = 1LL;
        goto LABEL_38;
      }
      v9 = pszSrc;
      if ( (_BYTE)v29 )
      {
        v10 = 108;
      }
      else
      {
        *(_QWORD *)&v27 = pszSrc;
        *(_QWORD *)&v26 = v28;
        *((_QWORD *)&v26 + 1) = v32;
        v8 = 2LL;
        *((_QWORD *)&v27 + 1) = &v30;
        DiskParameters = PnpBootDeviceWait(a1, 2, (__int64)&VhdiInitializeBootDisk, (__int64)&v26);
        if ( DiskParameters < 0 )
          goto LABEL_38;
        v10 = 72;
      }
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( v9[v12] );
      v13 = (unsigned int)(v10 + 2 + 2 * v12);
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, v13, 0x42646856u);
      v15 = Pool2;
      if ( !Pool2 )
        goto LABEL_17;
      if ( (_BYTE)v29 )
      {
        if ( RtlStringFromGUID(&RamdiskBootDiskGuid, &GuidString) < 0 )
        {
LABEL_17:
          v8 = 3LL;
LABEL_37:
          DiskParameters = -1073741801;
LABEL_38:
          KeBugCheckEx(0x12Fu, v8, DiskParameters, 0LL, 0LL);
        }
        DiskParameters = RtlStringCbPrintfW(v15, 0x6EuLL, L"\\\\Device\\Ramdisk%wZ", &GuidString);
        RtlFreeAnsiString(&GuidString);
      }
      else
      {
        DiskParameters = RtlStringCbPrintfW(Pool2, 0x4AuLL, L"\\\\Device\\HarddiskVolume%lu", v30);
      }
      if ( DiskParameters < 0 )
      {
        v8 = 4LL;
        goto LABEL_38;
      }
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      RtlStringCbCatW(v15, v13, v9);
      if ( (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v15[v18] );
        v17 = 2 * v18;
      }
      else
      {
        v17 = 0;
      }
      DiskParameters = VhdiMountVhdFile(v15, v17, 0, 1, 0LL);
      if ( DiskParameters < 0 )
      {
        v8 = 5LL;
        goto LABEL_38;
      }
      qword_140EF00C0 = (__int64)v15;
      v19 = v16 - 1;
      do
        ++v11;
      while ( v9[v11] );
      v29 = 2 * (v19 + v11) + 14;
      v20 = ExAllocatePool2(64LL, v29, 0x42646856u);
      if ( !v20 )
      {
        v8 = 7LL;
        goto LABEL_37;
      }
      v21 = (_DWORD *)v20;
      memmove((void *)(v20 + 8), v15 + 1, 2LL * v19);
      v22 = 2 * v19 + 10;
      v21[1] = v22;
      memmove((char *)v21 + v22, v9, 2LL * (unsigned int)(v11 + 1));
      v23 = v29;
      off_140E0A5F8 = v21;
      *(_BYTE *)v21 = 1;
      v3 = DiskParameters;
      LODWORD(Size) = v23;
    }
  }
  return v3;
}
