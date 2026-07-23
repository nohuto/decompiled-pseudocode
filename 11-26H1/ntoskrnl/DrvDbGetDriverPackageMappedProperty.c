/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x140976CE0
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1408A4834 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140B2B98C (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x14072A540 (ZwOpenKeyEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140901A50 (RtlFormatCurrentUserKeyPath.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140974660 (_RegRtlEnumKeyWithCallback.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140976440 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140B2B98C (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140B55104 (DrvDbGetObjectDatabaseNodeName.c)
 *     _RegRtlOpenKey @ 0x140B6D1FC (_RegRtlOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 a1,
        _WORD *a2,
        char *a3,
        __int64 a4,
        _DWORD *Handle,
        void *a6,
        unsigned int a7,
        __int64 (**a8)[3])
{
  _DWORD *v8; // r12
  unsigned int v9; // edi
  unsigned int *v10; // r15
  int v14; // r8d
  __int64 v15; // r11
  int DriverPackageMappedProperty; // ebx
  void *v17; // r9
  int ObjectDatabaseNodeName; // eax
  int v19; // r8d
  int v20; // r8d
  int v21; // eax
  _BYTE *v22; // rcx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v24; // rdi
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  bool v28; // zf
  unsigned __int16 *v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // r8d
  _WORD *v33; // r9
  _WORD *v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r10
  int v37; // ecx
  unsigned int v38; // edx
  void *v39; // rcx
  wchar_t *v40; // rax
  _WORD *v41; // rdx
  __int64 v42; // rcx
  size_t v43; // r8
  void *v44; // rcx
  __int64 v45; // rdx
  unsigned int v46; // edx
  __int64 (**v47)[3]; // r10
  __int64 v48; // rcx
  __int64 v50; // rax
  const wchar_t *v51; // rdx
  unsigned __int64 v52; // r14
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // edx
  __int64 v56; // rcx
  void *v57; // rax
  unsigned int v58; // ecx
  int v59; // eax
  char v60; // dl
  char *v61; // rax
  int v62; // eax
  int v63; // r8d
  int v64; // r8d
  int v65; // eax
  int v66; // r8d
  int v67; // eax
  int v68; // eax
  _BYTE *v69; // rcx
  __int64 v70; // rcx
  HANDLE v71; // rdx
  NTSTATUS v72; // eax
  __int64 v73; // rdx
  void *v74; // rcx
  unsigned int v75; // eax
  HANDLE v76; // rdx
  int RegValueMappedProperty; // eax
  HANDLE v78; // r8
  _WORD *v79; // r10
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // r8
  _WORD *v82; // rcx
  __int16 v83; // ax
  _WORD *v84; // rax
  unsigned int v85; // [rsp+20h] [rbp-C9h]
  HANDLE v86; // [rsp+50h] [rbp-99h] BYREF
  int v87; // [rsp+58h] [rbp-91h] BYREF
  int v88; // [rsp+5Ch] [rbp-8Dh] BYREF
  int v89; // [rsp+60h] [rbp-89h] BYREF
  int v90; // [rsp+64h] [rbp-85h] BYREF
  int v91; // [rsp+68h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-79h] BYREF
  __int128 v93; // [rsp+78h] [rbp-71h] BYREF
  __int64 v94; // [rsp+88h] [rbp-61h]
  UNICODE_STRING CurrentUserKeyPath; // [rsp+90h] [rbp-59h] BYREF
  __int128 *v96; // [rsp+A0h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-41h] BYREF
  UNICODE_STRING *p_CurrentUserKeyPath; // [rsp+B8h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-29h] BYREF
  char v101; // [rsp+148h] [rbp+5Fh] BYREF

  v8 = Handle;
  v9 = 0;
  v10 = (unsigned int *)a8;
  v86 = 0LL;
  KeyHandle = 0LL;
  *Handle = 0;
  *v10 = 0;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = a1;
  v94 = 0LL;
  DriverPackageMappedProperty = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v89 = 0;
  v87 = 0;
  v88 = 0;
  v90 = 0;
  v91 = 0;
  *(_QWORD *)&CurrentUserKeyPath.Length = 0LL;
  v101 = 0;
  v93 = 0LL;
  switch ( v14 )
  {
    case 2:
      if ( *(_QWORD *)a4 == DEVPKEY_NODE && *(_QWORD *)(a4 + 8) == 0xAFF7382B37DAFF89uLL )
      {
        v17 = a6;
        v85 = a7 >> 1;
        *v8 = 18;
        ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 2LL, a2, v17, v85, v10);
        DriverPackageMappedProperty = ObjectDatabaseNodeName;
        if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
          *v10 *= 2;
        goto LABEL_284;
      }
      goto LABEL_76;
    case 18:
      if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Configurable || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
        goto LABEL_76;
      if ( a3 )
      {
        v19 = (int)a3;
      }
      else
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_284;
        v19 = (int)v86;
        LODWORD(v15) = a1;
      }
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      v15,
                                      (int)a2,
                                      v19,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      v8,
                                      a6,
                                      a7,
                                      (__int64)v10);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
        goto LABEL_284;
      v20 = (int)v86;
      if ( a3 )
        v20 = (int)a3;
      v21 = DrvDbGetDriverPackageMappedProperty(
              a1,
              (int)a2,
              v20,
              (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
              v8,
              &v89,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v21;
      if ( v21 == -1073741789 )
      {
        DriverPackageMappedProperty = 0;
      }
      else
      {
        if ( v21 < 0 )
          goto LABEL_284;
        if ( *v8 == 7 && *v10 == 4 )
        {
          v9 = v89;
          goto LABEL_21;
        }
      }
      v9 = -1;
      v89 = -1;
LABEL_21:
      v22 = a6;
      *v8 = 17;
      *v10 = 1;
      if ( v22 && a7 )
      {
        *v22 = (v9 != 0) - 1;
        goto LABEL_284;
      }
      goto LABEL_283;
    case 33:
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
      {
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_284;
        }
        Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        v24 = Pool2;
        if ( !Pool2 )
        {
          DriverPackageMappedProperty = -1073741801;
          goto LABEL_284;
        }
        v25 = (int)v86;
        if ( a3 )
          v25 = (int)a3;
        v26 = DrvDbGetDriverPackageMappedProperty(
                a1,
                (int)a2,
                v25,
                (int)&DEVPKEY_DriverPackage_ProviderName,
                v8,
                Pool2,
                1042,
                (__int64)v10);
        DriverPackageMappedProperty = v26;
        if ( v26 == -1073741789 )
          goto LABEL_247;
        if ( v26 < 0 )
          goto LABEL_256;
        if ( *v8 != 18
          || *v10 - 2 > 0x206
          || (v27 = (*v10 >> 1) - 1,
              v28 = v24[v27] == 0,
              v29 = &v24[v27],
              *(_QWORD *)&DestinationString.Length = v29,
              !v28) )
        {
LABEL_255:
          DriverPackageMappedProperty = -1073741823;
          goto LABEL_256;
        }
        v30 = (int)v86;
        v31 = 2 * v27;
        LODWORD(a8) = 2 * v27;
        if ( a3 )
          v30 = (int)a3;
        LODWORD(Handle) = 1040 - v31;
        *(_QWORD *)&CurrentUserKeyPath.Length = v29 + 1;
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        a1,
                                        (int)a2,
                                        v30,
                                        (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                        v8,
                                        v29 + 1,
                                        1040 - v31,
                                        (__int64)v10);
        if ( DriverPackageMappedProperty == -1073741275 )
        {
          v32 = (int)v86;
          if ( a3 )
            v32 = (int)a3;
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          a1,
                                          (int)a2,
                                          v32,
                                          (int)&DEVPKEY_DriverPackage_DriverInfName,
                                          v8,
                                          *(void **)&CurrentUserKeyPath.Length,
                                          (int)Handle,
                                          (__int64)v10);
        }
        if ( DriverPackageMappedProperty == -1073741789 )
        {
LABEL_247:
          DriverPackageMappedProperty = -1073741595;
          ExFreePoolWithTag(v24, 0);
          goto LABEL_284;
        }
        if ( DriverPackageMappedProperty >= 0 )
        {
          if ( *v8 == 18 && *v10 - 2 <= 0x206 )
          {
            v33 = *(_WORD **)&DestinationString.Length;
            v34 = v24;
            **(_WORD **)&DestinationString.Length = 45;
            v35 = *v24;
            if ( (_WORD)v35 )
            {
              v36 = 0x400200100000000LL;
              do
              {
                if ( (unsigned __int16)v35 <= 0x3Au && _bittest64(&v36, v35) || (_WORD)v35 == 126 )
                  *v34 = 95;
                v35 = (unsigned __int16)v34[1];
                ++v34;
              }
              while ( (_WORD)v35 );
            }
            v37 = (int)a8;
            *v33 = 45;
            *v8 = 18;
            v38 = v37 + 2 + *v10;
            v39 = a6;
            *v10 = v38;
            if ( v39 && a7 >= v38 )
            {
              memmove(v39, v24, v38);
              ExFreePoolWithTag(v24, 0);
              goto LABEL_284;
            }
LABEL_254:
            DriverPackageMappedProperty = -1073741789;
            ExFreePoolWithTag(v24, 0);
            goto LABEL_284;
          }
          goto LABEL_255;
        }
LABEL_256:
        ExFreePoolWithTag(v24, 0);
        goto LABEL_284;
      }
      goto LABEL_76;
  }
  if ( v14 != 42 )
  {
    v45 = DEVPKEY_DriverPackage_ConfigurationScopes;
    switch ( v14 )
    {
      case 29:
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Configurations || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_76;
LABEL_85:
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_284;
          a3 = (char *)v86;
          v45 = DEVPKEY_DriverPackage_ConfigurationScopes;
          v15 = a1;
        }
        if ( *(_QWORD *)v15 )
        {
          v50 = *(_QWORD *)(*(_QWORD *)v15 + 224LL);
          if ( v50 )
          {
            DriverPackageMappedProperty = RegRtlOpenKeyTransacted(
                                            a3,
                                            L"Configurations",
                                            0,
                                            9u,
                                            &KeyHandle,
                                            *(_QWORD *)(v50 + 8));
            goto LABEL_116;
          }
        }
        Handle = 0LL;
        memset(&ObjectAttributes, 0, 44);
        DestinationString = 0LL;
        if ( (unsigned __int64)(a3 + 0x80000000) > 7 )
        {
LABEL_109:
          DriverPackageMappedProperty = RtlInitUnicodeStringEx(&DestinationString, L"Configurations");
          if ( DriverPackageMappedProperty >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            if ( Handle )
              a3 = (char *)Handle;
            ObjectAttributes.RootDirectory = a3;
            ObjectAttributes.ObjectName = &DestinationString;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            DriverPackageMappedProperty = ZwOpenKeyEx(&KeyHandle, 9u, &ObjectAttributes, 0);
          }
          v45 = DEVPKEY_DriverPackage_ConfigurationScopes;
LABEL_114:
          if ( !Handle )
            goto LABEL_117;
          ZwClose(Handle);
LABEL_116:
          v45 = DEVPKEY_DriverPackage_ConfigurationScopes;
LABEL_117:
          if ( DriverPackageMappedProperty != -1073741772 )
          {
            if ( DriverPackageMappedProperty < 0 )
              goto LABEL_284;
            v28 = *(_DWORD *)(a4 + 16) == 30;
            *(_QWORD *)&v93 = a6;
            HIDWORD(v93) = 0;
            HIDWORD(v94) = 0;
            if ( !v28 || *(_QWORD *)a4 != v45 || (LOBYTE(v94) = 1, *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL) )
              LOBYTE(v94) = 0;
            v52 = a7;
            if ( a6 )
              DWORD2(v93) = a7 >> 1;
            else
              DWORD2(v93) = 0;
            v53 = 0LL;
            if ( *(_QWORD *)a1 )
              v53 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
            *(_QWORD *)&CurrentUserKeyPath.Length = *(_QWORD *)a1;
            *(_QWORD *)&DestinationString.Length = v53;
            CurrentUserKeyPath.Buffer = (wchar_t *)DrvDbGetConfigurationSubKeyCallback;
            v96 = &v93;
            DestinationString.Buffer = (wchar_t *)PnpCtxInternalEnumKeyCallback;
            p_CurrentUserKeyPath = &CurrentUserKeyPath;
            DriverPackageMappedProperty = RegRtlEnumKeyWithCallback(KeyHandle, v45, &DestinationString);
            if ( DriverPackageMappedProperty >= 0 )
            {
              if ( !HIDWORD(v93) )
              {
                DriverPackageMappedProperty = -1073741275;
                goto LABEL_284;
              }
              v54 = v93;
              v55 = HIDWORD(v93) + 1;
              DriverPackageMappedProperty = HIDWORD(v94);
              *v8 = 8210;
              HIDWORD(v93) = v55;
              *v10 = 2 * v55;
              if ( v54 && 2 * (unsigned __int64)v55 <= v52 )
              {
                *(_WORD *)(v54 + 2LL * (v55 - 1)) = 0;
                goto LABEL_284;
              }
              goto LABEL_283;
            }
            if ( v94 < 0 )
              DriverPackageMappedProperty = HIDWORD(v94);
            goto LABEL_284;
          }
          goto LABEL_118;
        }
        CurrentUserKeyPath = 0LL;
        if ( a3 == (char *)2147483650LL )
        {
          v51 = L"\\REGISTRY\\MACHINE";
        }
        else if ( a3 == (char *)0x80000000LL )
        {
          v51 = L"\\REGISTRY\\MACHINE\\SOFTWARE\\CLASSES";
        }
        else if ( a3 == (char *)2147483651LL )
        {
          v51 = L"\\REGISTRY\\USER";
        }
        else if ( a3 == (char *)2147483653LL )
        {
          v51 = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT";
        }
        else
        {
          if ( a3 != (char *)2147483649LL )
          {
            DriverPackageMappedProperty = -1073741816;
LABEL_106:
            if ( CurrentUserKeyPath.Buffer )
            {
              ExFreePool(CurrentUserKeyPath.Buffer);
              v45 = DEVPKEY_DriverPackage_ConfigurationScopes;
            }
            if ( DriverPackageMappedProperty < 0 )
              goto LABEL_114;
            goto LABEL_109;
          }
          DriverPackageMappedProperty = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
          if ( DriverPackageMappedProperty < 0 )
          {
LABEL_104:
            v45 = DEVPKEY_DriverPackage_ConfigurationScopes;
            goto LABEL_106;
          }
          LODWORD(v51) = CurrentUserKeyPath.Buffer;
        }
        DriverPackageMappedProperty = RegRtlOpenKey(0, (_DWORD)v51, 0, 0x2000000, (__int64)&Handle);
        goto LABEL_104;
      case 30:
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_ConfigurationScopes || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_76;
        goto LABEL_85;
      case 32:
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
        {
          *v8 = 18;
          v56 = -1LL;
          do
            v28 = a2[++v56] == 0;
          while ( !v28 );
          v57 = a6;
          v58 = 2 * v56 + 2;
          *v10 = v58;
          if ( !v57 || a7 < v58 )
            return 3221225507LL;
          memmove(v57, a2, v58);
          return (unsigned int)DriverPackageMappedProperty;
        }
        goto LABEL_76;
      case 38:
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Integrated || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_76;
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                          a1,
                                          0,
                                          2,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&v86,
                                          0LL,
                                          (__int64)&CurrentUserKeyPath);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_284;
          LODWORD(a3) = (_DWORD)v86;
          LODWORD(v15) = a1;
        }
        v59 = DrvDbGetDriverPackageMappedProperty(
                v15,
                (int)a2,
                (int)a3,
                (int)&DEVPKEY_DriverPackage_Inbox,
                v8,
                &v101,
                1,
                (__int64)v10);
        DriverPackageMappedProperty = v59;
        if ( v59 == -1073741789 )
        {
          DriverPackageMappedProperty = 0;
        }
        else
        {
          if ( v59 == -1073741275 )
          {
            DriverPackageMappedProperty = 0;
            goto LABEL_160;
          }
          if ( v59 < 0 )
            goto LABEL_284;
          if ( *v8 == 17 && *v10 == 1 )
          {
            v60 = v101;
            if ( !v101 )
              goto LABEL_161;
LABEL_156:
            if ( !v86 )
            {
              DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                              a1,
                                              0,
                                              2,
                                              (_DWORD)a2,
                                              1,
                                              0,
                                              (__int64)&v86,
                                              0LL,
                                              (__int64)&CurrentUserKeyPath);
              if ( DriverPackageMappedProperty < 0 )
                goto LABEL_284;
              v60 = v101;
            }
            if ( (*(_DWORD *)(*(_QWORD *)&CurrentUserKeyPath.Length + 64LL) & 0x10) == 0 )
            {
LABEL_161:
              v61 = (char *)a6;
              *v8 = 17;
              *v10 = 1;
              if ( v61 && a7 )
              {
                *v61 = v60;
                goto LABEL_284;
              }
              goto LABEL_283;
            }
LABEL_160:
            v60 = 0;
            v101 = 0;
            goto LABEL_161;
          }
        }
        v60 = -1;
        v101 = -1;
        goto LABEL_156;
      case 40:
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Primitive || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_76;
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_284;
          LODWORD(a3) = (_DWORD)v86;
          LODWORD(v15) = a1;
        }
        v62 = DrvDbGetDriverPackageMappedProperty(
                v15,
                (int)a2,
                (int)a3,
                (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                v8,
                &v88,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v62;
        if ( v62 == -1073741789 || v62 == -1073741275 )
        {
          DriverPackageMappedProperty = 0;
        }
        else
        {
          if ( v62 < 0 )
            goto LABEL_284;
          if ( *v8 == 7 && *v10 == 4 )
          {
            v9 = v88;
            goto LABEL_21;
          }
        }
        v9 = -1;
        v88 = -1;
        goto LABEL_21;
    }
    if ( v14 != 46 )
    {
      if ( v14 == 53 )
      {
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_KernelMode || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_76;
      }
      else if ( v14 != 54
             || *(_QWORD *)a4 != DEVPKEY_DriverPackage_UserMode
             || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
      {
        goto LABEL_76;
      }
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_284;
        LODWORD(a3) = (_DWORD)v86;
        LODWORD(v15) = a1;
      }
      v68 = DrvDbGetDriverPackageMappedProperty(
              v15,
              (int)a2,
              (int)a3,
              (int)&DEVPKEY_DriverPackage_ExecutionModes,
              v8,
              &v90,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v68;
      if ( v68 < 0 )
      {
        if ( v68 == -1073741789 )
          DriverPackageMappedProperty = -1073741275;
        goto LABEL_284;
      }
      if ( *v8 == 7 && *v10 == 4 )
      {
        v69 = a6;
        *v8 = 17;
        *v10 = 1;
        if ( v69 && a7 )
        {
          if ( *(_DWORD *)(a4 + 16) == 53
            && *(_QWORD *)a4 == DEVPKEY_DriverPackage_KernelMode
            && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
          {
            v90 &= 0xFF0u;
            *v69 = -(v90 != 0);
          }
          else
          {
            v90 &= 0xFFF000u;
            *v69 = -(v90 != 0);
          }
          goto LABEL_284;
        }
        goto LABEL_283;
      }
LABEL_118:
      DriverPackageMappedProperty = -1073741275;
      goto LABEL_284;
    }
    if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Isolated || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
      goto LABEL_76;
    if ( a3 )
    {
      v63 = (int)a3;
    }
    else
    {
      DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
      if ( DriverPackageMappedProperty < 0 )
        goto LABEL_284;
      v63 = (int)v86;
      LODWORD(v15) = a1;
    }
    DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                    v15,
                                    (int)a2,
                                    v63,
                                    (int)&DEVPKEY_DriverPackage_IsolatedOverride,
                                    v8,
                                    a6,
                                    a7,
                                    (__int64)v10);
    if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
      goto LABEL_284;
    v64 = (int)v86;
    if ( a3 )
      v64 = (int)a3;
    v65 = DrvDbGetDriverPackageMappedProperty(
            a1,
            (int)a2,
            v64,
            (int)&DEVPKEY_DriverPackage_IsolationFlags,
            v8,
            &v87,
            4,
            (__int64)v10);
    DriverPackageMappedProperty = v65;
    if ( v65 != -1073741789 )
    {
      if ( v65 != -1073741275 )
      {
        if ( v65 < 0 )
          goto LABEL_284;
        if ( *v8 == 7 && *v10 == 4 )
        {
          v9 = v87;
          goto LABEL_21;
        }
        goto LABEL_212;
      }
      v66 = (int)v86;
      if ( a3 )
        v66 = (int)a3;
      v67 = DrvDbGetDriverPackageMappedProperty(
              a1,
              (int)a2,
              v66,
              (int)&DEVPKEY_DriverPackage_StatusFlags,
              v8,
              &v87,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v67;
      if ( v67 != -1073741789 )
      {
        if ( v67 == -1073741275 )
        {
          DriverPackageMappedProperty = 0;
          v87 = 0;
          goto LABEL_21;
        }
        if ( v67 < 0 )
          goto LABEL_284;
        if ( *v8 == 7 && *v10 == 4 )
        {
          v9 = v87 & 0x8000100F;
          v87 &= 0x8000100F;
          goto LABEL_21;
        }
LABEL_212:
        v9 = -1;
        v87 = -1;
        goto LABEL_21;
      }
    }
    DriverPackageMappedProperty = 0;
    goto LABEL_212;
  }
  if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_UniqueId && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
  {
    v40 = wcsrchr(a2, 0x5Fu);
    if ( !v40 )
    {
      DriverPackageMappedProperty = -1073741773;
      goto LABEL_284;
    }
    v41 = v40 + 1;
    v42 = -1LL;
    do
      v28 = v41[++v42] == 0;
    while ( !v28 );
    *v8 = 18;
    v43 = *v10 + 2 * ((_DWORD)v42 + 1);
    v44 = a6;
    *v10 = v43;
    if ( v44 && a7 >= (unsigned int)v43 )
    {
      memmove(v44, v41, v43);
      goto LABEL_284;
    }
    goto LABEL_283;
  }
LABEL_76:
  v46 = 0;
  while ( 1 )
  {
    v47 = &off_14000FAE0 + 5 * v46;
    v48 = (__int64)*v47;
    a8 = v47;
    if ( *(_DWORD *)(v48 + 16) == v14 && *(_QWORD *)v48 == *(_QWORD *)a4 && *(_QWORD *)(v48 + 8) == *(_QWORD *)(a4 + 8) )
      break;
    if ( ++v46 >= 0x2A )
      return 3221225494LL;
  }
  if ( !v47 )
    return 3221225494LL;
  if ( !a3 )
  {
    DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v15, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v86, 0LL, 0LL);
    if ( DriverPackageMappedProperty < 0 )
      goto LABEL_284;
    v47 = a8;
  }
  if ( *((_DWORD *)v47 + 8) )
  {
    LODWORD(Handle) = 48;
    v24 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( !v24 )
    {
      DriverPackageMappedProperty = -1073741801;
      goto LABEL_284;
    }
    v71 = v86;
    if ( a3 )
      v71 = a3;
    v72 = PnpCtxRegQueryValue(v70, v71, L"Version", &DestinationString, v24, (unsigned int *)&Handle);
    DriverPackageMappedProperty = v72;
    if ( v72 == -1073741772 )
    {
      DriverPackageMappedProperty = -1073741275;
      ExFreePoolWithTag(v24, 0);
      goto LABEL_284;
    }
    if ( v72 == -1073741789 )
      goto LABEL_247;
    if ( v72 >= 0 )
    {
      if ( *(_DWORD *)&DestinationString.Length == 3 && (_DWORD)Handle == 48 )
      {
        v73 = (__int64)a8;
        v74 = a6;
        *v8 = *((_DWORD *)a8 + 2);
        v75 = *(_DWORD *)(v73 + 32);
        *v10 = v75;
        if ( v74 && a7 >= v75 )
        {
          memmove(v74, (char *)v24 + *(unsigned int *)(v73 + 28), *(unsigned int *)(v73 + 32));
          ExFreePoolWithTag(v24, 0);
          goto LABEL_284;
        }
        goto LABEL_254;
      }
      goto LABEL_255;
    }
    goto LABEL_256;
  }
  v76 = v86;
  if ( a3 )
    v76 = a3;
  RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v48, v76, (__int64)v47, v8, (int *)a6, a7, v10);
  DriverPackageMappedProperty = RegValueMappedProperty;
  if ( (RegValueMappedProperty == -1073741275
     || (!RegValueMappedProperty || RegValueMappedProperty == -1073741789) && *v8 == 18 && *v10 == 2)
    && *(_DWORD *)(a4 + 16) == 7
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName
    && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
  {
    v78 = v86;
    if ( a3 )
      v78 = a3;
    if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v78, &v91) >= 0 && v91 == 218103811 )
    {
      v79 = a6;
      *v8 = 18;
      *v10 = 36;
      if ( v79 && a7 >= 0x24 )
      {
        v80 = (unsigned __int64)a7 >> 1;
        if ( v80 )
        {
          v81 = 2147483646 - v80;
          v82 = v79;
          do
          {
            if ( !(v81 + v80) )
              break;
            v83 = *(_WORD *)((char *)v82 + (char *)L"Microsoft Windows" - (char *)v79);
            if ( !v83 )
              break;
            *v82++ = v83;
            --v80;
          }
          while ( v80 );
          v84 = v82 - 1;
          if ( v80 )
            v84 = v82;
          *v84 = 0;
          if ( !v80 )
            *v79 = 0;
        }
        DriverPackageMappedProperty = 0;
        goto LABEL_284;
      }
LABEL_283:
      DriverPackageMappedProperty = -1073741789;
    }
  }
LABEL_284:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( !v86 )
    return (unsigned int)DriverPackageMappedProperty;
  ZwClose(v86);
  return (unsigned int)DriverPackageMappedProperty;
}
