/*
 * XREFs of VhdInitialize @ 0x140C4BF5C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlStringCbCatW @ 0x14044D218 (RtlStringCbCatW.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x14069646C (Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x140964800 (RtlStringFromGUID.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140C4C258 (VhdiGetDiskParameters.c)
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
  __int64 v11; // r12
  __int64 v12; // rax
  ULONG_PTR v13; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v15; // r15
  __int64 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rdx
  unsigned int v19; // r14d
  ULONG_PTR v20; // rax
  _DWORD *v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v26; // [rsp+40h] [rbp-99h]
  __int128 v27; // [rsp+50h] [rbp-89h]
  _BYTE v28[4]; // [rsp+60h] [rbp-79h] BYREF
  int v29; // [rsp+64h] [rbp-75h]
  unsigned int v30; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v31; // [rsp+148h] [rbp+6Fh] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+150h] [rbp+77h] BYREF
  __int64 v33; // [rsp+158h] [rbp+7Fh] BYREF

  v29 = 0;
  v26 = 0LL;
  v27 = 0LL;
  memset_0(v28, 0, 0x8CuLL);
  v2 = *(const char **)(a1 + 184);
  v3 = 0;
  GuidString = 0LL;
  LOBYTE(v30) = 0;
  pszSrc = 0LL;
  v33 = 0LL;
  v31 = 0;
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
      DiskParameters = VhdiGetDiskParameters(i[7], v28, &v33, &v30, &pszSrc);
      if ( DiskParameters < 0 )
      {
        v8 = 1LL;
        goto LABEL_38;
      }
      v9 = pszSrc;
      if ( (_BYTE)v30 )
      {
        v10 = 110;
      }
      else
      {
        *(_QWORD *)&v27 = pszSrc;
        *(_QWORD *)&v26 = v28;
        *((_QWORD *)&v26 + 1) = v33;
        v8 = 2LL;
        *((_QWORD *)&v27 + 1) = &v31;
        DiskParameters = PnpBootDeviceWait(a1, 2);
        if ( DiskParameters < 0 )
          goto LABEL_38;
        v10 = 74;
      }
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( v9[v12] );
      v13 = (unsigned int)(v10 + 2 * v12);
      Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, v13, 0x42646856uLL);
      v15 = Pool2;
      if ( !Pool2 )
        goto LABEL_17;
      if ( (_BYTE)v30 )
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
        DiskParameters = RtlStringCbPrintfW(Pool2, 0x4AuLL, L"\\\\Device\\HarddiskVolume%lu", v31);
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
      NtVhdBootFile = (__int64)v15;
      v19 = v16 - 1;
      do
        ++v11;
      while ( v9[v11] );
      v30 = 2 * (v11 + v19) + 14;
      v20 = ExAllocatePool2(0x40uLL, v30, 0x42646856uLL);
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
      v23 = v30;
      off_140E0A4B0 = v21;
      *(_BYTE *)v21 = 1;
      v3 = DiskParameters;
      LODWORD(dword_140E0EEF8) = v23;
    }
  }
  return v3;
}
