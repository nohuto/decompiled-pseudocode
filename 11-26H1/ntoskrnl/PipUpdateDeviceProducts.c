/*
 * XREFs of PipUpdateDeviceProducts @ 0x1405D7EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryBootTimeValues @ 0x1404CD5EC (KeQueryBootTimeValues.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _PnpCtxRegSetValue @ 0x14090AB14 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x14090B324 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x14091A194 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegEnumValue @ 0x14091ACF0 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14091B2F8 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegCreateTree @ 0x14091E1FC (_PnpCtxRegCreateTree.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     _PnpCtxRegCloseKey @ 0x140A9BD98 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AEABA0 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipUpdateDeviceProducts(PVOID P)
{
  unsigned int v1; // esi
  PVOID v2; // rbx
  void *v3; // rdi
  void *v4; // r15
  void *v5; // r12
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r13d
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // r14d
  __int64 v16; // rcx
  void *v17; // r13
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+50h] [rbp-51h] BYREF
  void *v22; // [rsp+58h] [rbp-49h]
  PVOID v23; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+74h] [rbp-2Dh] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h] BYREF
  LARGE_INTEGER v28; // [rsp+80h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-Dh] BYREF
  int v32; // [rsp+98h] [rbp-9h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-1h] BYREF
  void *Pool2; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+Fh] BYREF
  wchar_t Str1[8]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  v23 = P;
  v2 = P;
  v28.QuadPart = 0LL;
  v35 = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  Pool2 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v33 = 0LL;
  LODWORD(v20) = 0;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v21 = 0;
  v22 = 0LL;
  if ( (int)PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 15LL, &Pool2) < 0
    || (unsigned int)PnpCtxRegOpenKey(0, (_DWORD)Pool2, (unsigned int)L"Current\\ProductIds", 0, 131097, (__int64)&v33) == -1073741772
    || (unsigned int)RtlGetPersistedStateLocation(L"DynamicInstalledProducts", 0LL, 0, (__int64)&v20) != -2147483643 )
  {
    v17 = 0LL;
    goto LABEL_55;
  }
  v6 = v20;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v4 = Pool2;
  if ( !Pool2 )
    goto LABEL_52;
  if ( (int)RtlGetPersistedStateLocation(L"DynamicInstalledProducts", Pool2, v6, (__int64)&v20) < 0 )
    goto LABEL_52;
  if ( (unsigned int)PnpCtxRegCreateTree(0LL, 0LL, v4, 0LL, 131103, 0LL, &v29, 0LL) )
    goto LABEL_52;
  KeQueryBootTimeValues(&v20, &v28, &v35);
  v28.QuadPart -= v35;
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v7, v29, &v30, &v25, 0LL, 0LL, 0LL) )
    goto LABEL_52;
  v9 = v30;
  if ( !v30 )
    goto LABEL_36;
  v10 = v25 + 1;
  v5 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v5 )
  {
LABEL_52:
    v17 = 0LL;
    goto LABEL_54;
  }
  if ( !v9 )
    goto LABEL_36;
  do
  {
    v25 = v10;
    if ( v24 )
    {
      PnpCtxRegCloseKey();
      v24 = 0LL;
    }
    if ( (int)PnpCtxRegEnumKey(v8, v29, v1, v5, &v25) >= 0
      && (int)PnpCtxRegOpenKey(0, v29, (_DWORD)v5, 0, 131103, (__int64)&v24) >= 0 )
    {
      LODWORD(v20) = 14;
      if ( (int)PnpCtxRegQueryValue(v8, v24, L"Source", &v21, Str1, &v20) >= 0
        && v21 == 1
        && (_DWORD)v20 == 14
        && !wcsicmp(Str1, L"SMBIOS") )
      {
        LODWORD(v20) = 0;
        if ( (unsigned int)PnpCtxRegQueryValue(v8, v33, v5, 0LL, 0LL, &v20) == -1073741772 )
        {
          if ( v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          LODWORD(v20) = 0;
          v11 = PnpCtxRegQueryValue(v8, v24, L"Version", &v21, v3, &v20);
          if ( v11 == -1073741789 )
          {
            v12 = v20;
            v3 = (void *)ExAllocatePool2(0x100uLL);
            if ( !v3 )
            {
LABEL_31:
              PnpCtxRegSetValue(v8, v24, L"DeactivationTime", 3LL, &v28, 8);
              if ( v3 )
                PnpCtxRegSetValue(v13, v24, L"DeactivationVersion", 1LL, v3, v12);
              PnpCtxRegDeleteValue(v13, v24, L"Version");
              goto LABEL_34;
            }
            v11 = PnpCtxRegQueryValue(v8, v24, L"Version", &v21, v3, &v20);
          }
          if ( v11 == -1073741772 )
            goto LABEL_34;
          v12 = v20;
          if ( (v11 < 0 || v21 != 1 || (unsigned int)v20 < 2) && v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          goto LABEL_31;
        }
      }
    }
LABEL_34:
    ++v1;
  }
  while ( v1 < v9 );
  v4 = Pool2;
LABEL_36:
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v8, v33, 0LL, 0LL, &v31, &v26, 0LL) || (v14 = v31) == 0 )
  {
    v17 = v22;
  }
  else
  {
    v15 = v26 + 1;
    v17 = (void *)ExAllocatePool2(0x100uLL);
    if ( v17 )
    {
      v18 = 0;
      if ( v14 )
      {
        do
        {
          v26 = v15;
          if ( v27 )
          {
            PnpCtxRegCloseKey();
            v27 = 0LL;
          }
          if ( (int)PnpCtxRegEnumValue(v16, v33, v18, v17, &v26, 0LL, 0LL, 0LL) >= 0
            && (int)PnpCtxRegCreateKey(0, v29, (_DWORD)v17, 0, 131078, 0LL, (__int64)&v27, (__int64)&v32) >= 0 )
          {
            if ( v32 == 1 )
              PnpCtxRegSetValue(v16, v27, L"CreationTime", 3LL, &v28, 8);
            LODWORD(v20) = 0;
            if ( (unsigned int)PnpCtxRegQueryValue(v16, v27, L"Version", 0LL, 0LL, &v20) == -1073741772
              && (int)PnpCtxRegSetValue(v16, v27, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
            {
              PnpCtxRegSetValue(v16, v27, L"ActivationTime", 3LL, &v28, 8);
              PnpCtxRegSetValue(v19, v27, L"Source", 1LL, L"SMBIOS", 14);
            }
          }
          ++v18;
        }
        while ( v18 < v14 );
        v4 = Pool2;
      }
    }
  }
LABEL_54:
  v2 = v23;
LABEL_55:
  if ( v27 )
    PnpCtxRegCloseKey();
  if ( v33 )
    PnpCtxRegCloseKey();
  if ( v24 )
    PnpCtxRegCloseKey();
  if ( v29 )
    PnpCtxRegCloseKey();
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
