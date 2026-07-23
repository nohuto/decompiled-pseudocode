/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140973EE8
 * Callers:
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1408A1ED4 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedProperty @ 0x140972FBC (_CmGetInstallerClassMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140A871AC (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _BYTE *v9; // r13
  void *v10; // r11
  int v11; // ebx
  DEVPROPKEY **v12; // rdx
  int v13; // r10d
  int v14; // r15d
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // rcx
  HANDLE v20; // rdx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  HANDLE v26; // rdx
  const WCHAR *v27; // r8
  NTSTATUS v28; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int i; // edi
  const WCHAR *v37; // r8
  int v38; // edx
  int ValueIndirect; // eax
  __int64 v40; // rax
  HANDLE v41; // rdx
  const WCHAR *v42; // rdi
  int v43; // eax
  __int64 v44; // rcx
  int v45; // [rsp+28h] [rbp-81h]
  char v46[4]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v47; // [rsp+44h] [rbp-65h] BYREF
  int v48; // [rsp+48h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  int v50; // [rsp+58h] [rbp-51h] BYREF
  __int64 v51; // [rsp+60h] [rbp-49h]
  _DWORD *v52; // [rsp+68h] [rbp-41h]
  HANDLE v53; // [rsp+70h] [rbp-39h] BYREF
  void *v54; // [rsp+78h] [rbp-31h]
  __int64 v55; // [rsp+80h] [rbp-29h]
  wchar_t Str2[12]; // [rsp+88h] [rbp-21h] BYREF

  v9 = (_BYTE *)a6;
  v10 = a3;
  v55 = a2;
  v11 = 0;
  v54 = a3;
  v12 = &off_140BE1FD0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  v51 = a1;
  v15 = 0;
  v52 = a8;
  Handle = 0LL;
  v53 = 0LL;
  v48 = 0;
  v47 = 0;
  v46[0] = 0;
  v50 = 0;
  do
  {
    v16 = *v12;
    v17 = v12;
    if ( v13 == (*v12)->pid )
    {
      v24 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v24 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v18 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v18 = 0;
  }
  if ( v10 )
  {
LABEL_10:
    v19 = *(unsigned int *)(a4 + 16);
    if ( (_DWORD)v19 != 7 )
      goto LABEL_46;
    v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
      v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
    if ( v25 )
    {
LABEL_46:
      if ( (_DWORD)v19 != 8 )
        goto LABEL_107;
      v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( v31 )
      {
LABEL_107:
        if ( (_DWORD)v19 != 9 )
          goto LABEL_108;
        v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
          v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
        if ( v32 )
        {
LABEL_108:
          if ( (_DWORD)v19 != 10 )
            goto LABEL_14;
          v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
            v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
          if ( v30 )
          {
LABEL_14:
            if ( (_DWORD)v19 != 15 )
            {
              if ( (_DWORD)v19 == 2 )
              {
                v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
                  v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
                if ( !v35 )
                {
                  for ( i = 0; i < 2; ++i )
                  {
                    if ( i )
                    {
                      v37 = &word_140B8A320;
                    }
                    else
                    {
                      v37 = (const WCHAR *)v17[2];
                      if ( !v37 )
                        goto LABEL_38;
                    }
                    v38 = (int)Handle;
                    v47 = v18;
                    if ( v10 )
                      v38 = (int)v10;
                    ValueIndirect = PnpCtxRegQueryValueIndirect(
                                      v51,
                                      v38,
                                      (_DWORD)v37,
                                      (unsigned int)&v48,
                                      (__int64)v9,
                                      (__int64)&v47,
                                      (__int64)v46);
                    v14 = ValueIndirect;
                    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
                    {
                      if ( !ValueIndirect || ValueIndirect == -1073741789 )
                      {
                        v11 = 0;
                        goto LABEL_90;
                      }
                      v11 = ValueIndirect;
                      break;
                    }
                    v10 = v54;
                    v11 = -1073741275;
                  }
                  if ( v11 < 0 )
                    goto LABEL_39;
LABEL_90:
                  v22 = v14 == 0;
                  goto LABEL_23;
                }
                v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
                  v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
                if ( !v40 )
                {
                  v41 = Handle;
                  v42 = (const WCHAR *)v17[2];
                  if ( v10 )
                    v41 = v10;
                  v47 = 4;
                  v43 = PnpOpenPropertiesKey(v51, (__int64)v41, 0LL, 1LL, 0, v45, &v53);
                  v11 = v43;
                  if ( v43 != -1073741772 )
                  {
                    if ( v43 < 0 )
                      goto LABEL_39;
                    v28 = PnpCtxRegQueryValue(v44, v53, v42, &v48, &v50, &v47);
                    if ( v28 != -1073741772 && v28 != -1073741444 )
                    {
                      if ( v28 >= 0 )
                      {
                        *v52 = 1;
                        *a5 = *((_DWORD *)v17 + 2);
                        if ( v18 )
                        {
                          v34 = v50;
                          goto LABEL_75;
                        }
                        goto LABEL_74;
                      }
                      goto LABEL_73;
                    }
                  }
                  goto LABEL_38;
                }
              }
LABEL_16:
              v20 = Handle;
              if ( v10 )
                v20 = v10;
              v47 = v18;
              v21 = guard_dispatch_icall_no_overrides(v51, (__int64)v20);
              if ( v21 != -1073741772 && v21 != -1073741444 )
              {
                if ( v21 && v21 != -1073741789 )
                {
                  v11 = v21;
                  goto LABEL_39;
                }
                if ( v48 != *((_DWORD *)v17 + 6) )
                {
                  v11 = -1073741811;
                  goto LABEL_39;
                }
                v22 = v21 == 0;
LABEL_23:
                *v52 = v47;
                v23 = *((_DWORD *)v17 + 2);
                *a5 = v23;
                if ( !v22 || !v18 )
                  v11 = -1073741789;
                if ( v23 == 18 && v46[0] )
                  *a5 = 25;
                goto LABEL_39;
              }
LABEL_38:
              v11 = -1073741275;
              goto LABEL_39;
            }
            v33 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
            if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
              v33 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
            if ( v33 )
              goto LABEL_16;
          }
        }
      }
    }
    v26 = Handle;
    v27 = (const WCHAR *)v17[2];
    v47 = 22;
    if ( v10 )
      v26 = v10;
    v28 = PnpCtxRegQueryValue(v19, v26, v27, &v48, Str2, &v47);
    if ( v28 != -1073741772 && v28 != -1073741444 )
    {
      if ( v28 >= 0 )
      {
        *v52 = 1;
        *a5 = *((_DWORD *)v17 + 2);
        if ( v18 )
        {
          Str2[10] = 0;
          v34 = wcsicmp(L"0", Str2);
LABEL_75:
          *v9 = -(v34 != 0);
          goto LABEL_39;
        }
LABEL_74:
        v11 = -1073741789;
        goto LABEL_39;
      }
LABEL_73:
      v11 = v28;
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  v11 = CmOpenCommonClassRegKey(v51, v55, 32, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( v11 >= 0 )
  {
    v10 = v54;
    goto LABEL_10;
  }
LABEL_39:
  if ( v53 )
    ZwClose(v53);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
