/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x1409B50C0
 * Callers:
 *     PiDeviceRegistration @ 0x1409B4E08 (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
 *     PiForEachDriverQueryRoutine @ 0x1409B55F4 (PiForEachDriverQueryRoutine.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  void *v5; // rsi
  __int64 v6; // rdx
  _WORD *v7; // rdi
  unsigned __int64 v8; // rcx
  _WORD *v9; // rax
  int DeviceRegProp; // ebx
  unsigned int i; // r15d
  __int64 v13; // r12
  char v14; // cl
  __int64 v15; // rax
  int ObjectProperty; // eax
  __int64 v17; // rcx
  char *v18; // r9
  int v19; // r8d
  _BYTE *v20; // rdx
  int InstallerClassRegProp; // eax
  _WORD *Pool2; // rax
  ULONG v23; // [rsp+60h] [rbp-79h] BYREF
  ULONG v24; // [rsp+64h] [rbp-75h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-71h] BYREF
  int v26; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v28; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v29[4]; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v30[80]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v26 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1[1];
  if ( (unsigned __int16)v6 < 2u || (v7 = (_WORD *)*((_QWORD *)a1 + 1)) == 0LL )
  {
    v7 = 0LL;
    goto LABEL_12;
  }
  v8 = *a1;
  if ( (unsigned __int16)v8 > (unsigned __int16)v6 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v8 )
  {
    if ( !*v7 )
      goto LABEL_12;
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
  if ( *v7
    && ((_WORD)v8 != (_WORD)v6 || v7[((unsigned __int64)(unsigned int)v8 >> 1) - 1])
    && (v8 > v6 - 2 || v7[(v8 >> 1) - 1] && v7[v8 >> 1]) )
  {
    v9 = (_WORD *)ExAllocatePool2(0x100uLL);
    v7 = v9;
    if ( v9 )
    {
      memmove(v9, *((const void **)a1 + 1), *a1);
      v7[(unsigned __int64)*a1 >> 1] = 0;
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
LABEL_12:
  DeviceRegProp = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 16, 0, 131097, 0, (__int64)&v28, 0LL);
  if ( DeviceRegProp >= 0 )
  {
    v24 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v7,
                      (__int64)v28,
                      9u,
                      (__int64)&v25,
                      (__int64)v30,
                      (__int64)&v24,
                      0);
    if ( DeviceRegProp >= 0 && v25 == 1 && v24 )
      DeviceRegProp = CmOpenCommonClassRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)v30,
                        32,
                        0,
                        131097,
                        0,
                        (__int64)&Handle,
                        0LL);
    v29[2] = a3;
    v29[0] = a1;
    v29[1] = PiProcessDriverInstance;
    v24 = 170;
    v5 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v5 )
    {
LABEL_18:
      DeviceRegProp = -1073741670;
      goto LABEL_19;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= 5 )
        goto LABEL_19;
      v13 = 4LL * i;
      v14 = qword_140001F60[v13 + 2];
      if ( !v14 || Handle )
        break;
LABEL_39:
      ;
    }
    v15 = qword_140001F60[v13 + 1];
    v23 = v24;
    if ( v14 )
    {
      if ( v15 )
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v30,
                           2,
                           (char *)Handle,
                           0LL,
                           v15,
                           &v26,
                           (__int64)v5,
                           v24,
                           (__int64)&v23,
                           0);
      else
        ObjectProperty = CmGetInstallerClassRegProp(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v30,
                           (__int64)Handle,
                           qword_140001F60[v13],
                           (__int64)&v25,
                           (__int64)v5,
                           (__int64)&v23);
    }
    else if ( v15 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v7,
                         1,
                         (char *)v28,
                         0LL,
                         v15,
                         &v26,
                         (__int64)v5,
                         v24,
                         (__int64)&v23,
                         0);
    }
    else
    {
      ObjectProperty = CmGetDeviceRegProp(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v7,
                         (__int64)v28,
                         qword_140001F60[v13],
                         (__int64)&v25,
                         (__int64)v5,
                         (__int64)&v23,
                         0);
    }
    DeviceRegProp = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
    {
LABEL_37:
      if ( DeviceRegProp == -1073741275 )
      {
        DeviceRegProp = 0;
      }
      else
      {
        if ( DeviceRegProp < 0 )
          goto LABEL_19;
        DeviceRegProp = PiForEachDriverQueryRoutine(v25, v5, v23, qword_140001F60[4 * i + 3], v29);
        if ( DeviceRegProp < 0 )
          goto LABEL_19;
      }
      goto LABEL_39;
    }
    ExFreePoolWithTag(v5, 0);
    v24 = v23;
    v5 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v5 )
      goto LABEL_18;
    v17 = qword_140001F60[v13 + 1];
    if ( LOBYTE(qword_140001F60[4 * i + 2]) )
    {
      if ( !v17 )
      {
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v30,
                                  (__int64)Handle,
                                  qword_140001F60[4 * i],
                                  (__int64)&v25,
                                  (__int64)v5,
                                  (__int64)&v23);
        goto LABEL_51;
      }
      v18 = (char *)Handle;
      v20 = v30;
      v19 = 2;
    }
    else
    {
      if ( !v17 )
      {
        InstallerClassRegProp = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v7,
                                  (__int64)v28,
                                  qword_140001F60[4 * i],
                                  (__int64)&v25,
                                  (__int64)v5,
                                  (__int64)&v23,
                                  0);
        goto LABEL_51;
      }
      v18 = (char *)v28;
      v19 = 1;
      v20 = v7;
    }
    InstallerClassRegProp = PnpGetObjectProperty(
                              *(__int64 *)&PiPnpRtlCtx,
                              (__int64)v20,
                              v19,
                              v18,
                              0LL,
                              v17,
                              &v26,
                              (__int64)v5,
                              v24,
                              (__int64)&v23,
                              0);
LABEL_51:
    DeviceRegProp = InstallerClassRegProp;
    goto LABEL_37;
  }
LABEL_19:
  if ( v7 )
    PnpUnicodeStringToWstrFree(v7, a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    ZwClose(v28);
  return (unsigned int)DeviceRegProp;
}
