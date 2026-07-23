/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x140957750
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x14095335C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegCreateTree @ 0x140978C5C (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140B0B580 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 v10; // r14
  int v11; // ebx
  unsigned __int64 v12; // rdi
  int inited; // r15d
  wchar_t *Pool2; // r13
  int v15; // r8d
  unsigned int v16; // r9d
  int v17; // r10d
  __int64 v18; // rdx
  _WORD *v19; // rcx
  unsigned __int16 *v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  PVOID v24; // r12
  const wchar_t *v26; // rax
  int DeviceSoftwareKeyPath; // eax
  unsigned __int16 Length; // bx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  const wchar_t *v30; // r8
  struct _LIST_ENTRY *Flink; // rsi
  wchar_t *v32; // rsi
  unsigned __int16 v33; // bx
  struct _LIST_ENTRY *v34; // rax
  const wchar_t *v35; // r8
  struct _LIST_ENTRY *v36; // r14
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r10
  struct _LIST_ENTRY *v39; // rax
  const wchar_t *v40; // r11
  __int64 v41; // r15
  wchar_t v42; // bx
  int v43; // edx
  __int64 v44; // r8
  _QWORD *v45; // rdi
  _QWORD *v46; // rdx
  HANDLE v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  __int16 v51; // ax
  __int16 v52; // r10
  int v53; // edi
  __int64 v54; // rcx
  int DeviceRegKeySecurityDescriptor; // eax
  int v56; // r14d
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  _QWORD *v69; // rdx
  int dwFlags; // [rsp+28h] [rbp-69h]
  const wchar_t *cchDest; // [rsp+38h] [rbp-59h]
  PVOID P; // [rsp+60h] [rbp-31h] BYREF
  HANDLE v73; // [rsp+68h] [rbp-29h] BYREF
  HANDLE v74; // [rsp+70h] [rbp-21h] BYREF
  void *v75; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  __int64 v80; // [rsp+E8h] [rbp+57h] BYREF

  LODWORD(v80) = 0;
  v75 = 0LL;
  v74 = 0LL;
  v10 = a2;
  v73 = 0LL;
  Handle = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  v11 = a3 & 0x200;
  LODWORD(v12) = 360;
  if ( (a3 & 0x200) == 0 )
    LODWORD(v12) = 240;
  inited = -1073741675;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_31;
    }
    v15 = 0;
    v16 = (unsigned int)v12 >> 1;
    v17 = 1;
    if ( !v10 )
      goto LABEL_30;
    v18 = 200LL;
    v19 = (_WORD *)v10;
    while ( *v19 )
    {
      ++v19;
      if ( !--v18 )
        goto LABEL_22;
    }
    v20 = (unsigned __int16 *)v10;
    while ( 1 )
    {
      v21 = *v20;
      if ( !(_WORD)v21 )
        break;
      if ( (unsigned __int16)(v21 - 33) > 0x5Eu || (_WORD)v21 == 44 )
        goto LABEL_22;
      if ( (_WORD)v21 == 92 )
      {
        if ( !v15 )
          goto LABEL_22;
        v15 = 0;
        ++v17;
        ++v20;
      }
      else
      {
        ++v15;
        ++v20;
      }
    }
    if ( !v15 || v17 != 3 )
    {
LABEL_22:
      inited = -1073741773;
      goto LABEL_31;
    }
    switch ( (unsigned __int8)a3 )
    {
      case 0x10u:
        if ( v11 )
        {
          if ( a4 )
          {
            if ( a4 == -1 )
              goto LABEL_159;
            v67 = -1LL;
            do
              ++v67;
            while ( *(_WORD *)(v10 + 2 * v67) );
            v68 = v67 + 79;
            if ( v68 > 0xFFFFFFFF )
              goto LABEL_137;
            LODWORD(v80) = v68;
            if ( (unsigned int)v68 <= v16 )
            {
              cchDest = L"System\\CurrentControlSet\\Hardware Profiles";
              DeviceSoftwareKeyPath = RtlStringCchPrintfExW(Pool2, v16, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s");
            }
            else
            {
              DeviceSoftwareKeyPath = -1073741789;
            }
          }
          else
          {
            v65 = -1LL;
            do
              ++v65;
            while ( *(_WORD *)(v10 + 2 * v65) );
            v66 = v65 + 82;
            if ( v66 > 0xFFFFFFFF )
              goto LABEL_137;
            LODWORD(v80) = v66;
            DeviceSoftwareKeyPath = (unsigned int)v66 > v16
                                  ? -1073741789
                                  : RtlStringCchPrintfExW(
                                      Pool2,
                                      v16,
                                      0LL,
                                      0LL,
                                      0x800u,
                                      L"%s\\%s\\%s",
                                      L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                      L"System\\CurrentControlSet\\Enum",
                                      v10);
          }
        }
        else
        {
          v59 = -1LL;
          do
            ++v59;
          while ( *(_WORD *)(v10 + 2 * v59) );
          v60 = v59 + 31;
          if ( v60 > 0xFFFFFFFF )
            goto LABEL_137;
          LODWORD(v80) = v60;
          if ( (unsigned int)v60 > v16 )
          {
            DeviceSoftwareKeyPath = -1073741789;
          }
          else
          {
            cchDest = L"System\\CurrentControlSet\\Enum";
            DeviceSoftwareKeyPath = RtlStringCchPrintfExW(Pool2, v16, 0LL, 0LL, 0x800u, L"%s\\%s");
          }
        }
        break;
      case 0x12u:
        LODWORD(cchDest) = (unsigned int)v12 >> 1;
        DeviceSoftwareKeyPath = CmGetDeviceSoftwareKeyPath((__int64)a1, v10, a3, a4, a6, Pool2, (size_t)cchDest, &v80);
        break;
      case 0x11u:
        LODWORD(cchDest) = (unsigned int)v12 >> 1;
        DeviceSoftwareKeyPath = CmGetDeviceHardwareKeyPath(v21, v10, a3, a4, dwFlags, Pool2, (size_t)cchDest, &v80);
        break;
      case 0x13u:
        if ( (a3 & 0xFFFFFFEC) != 0 )
          goto LABEL_159;
        v63 = -1LL;
        do
          ++v63;
        while ( *(_WORD *)(v10 + 2 * v63) );
        v64 = v63 + 39;
        if ( v64 > 0xFFFFFFFF )
        {
LABEL_137:
          DeviceSoftwareKeyPath = -1073741675;
          break;
        }
        LODWORD(v80) = v64;
        if ( (unsigned int)v64 <= v16 )
        {
          v26 = L"Control";
          goto LABEL_51;
        }
        DeviceSoftwareKeyPath = -1073741789;
        break;
      default:
        if ( (unsigned __int8)a3 != 20 || (a3 & 0xFFFFFFEB) != 0 )
        {
LABEL_159:
          DeviceSoftwareKeyPath = -1073741811;
          break;
        }
        v61 = -1LL;
        do
          ++v61;
        while ( *(_WORD *)(v10 + 2 * v61) );
        v62 = v61 + 39;
        if ( v62 > 0xFFFFFFFF )
          goto LABEL_137;
        LODWORD(v80) = v62;
        if ( (unsigned int)v62 <= v16 )
        {
          v26 = L"LogConf";
LABEL_51:
          DeviceSoftwareKeyPath = RtlStringCchPrintfExW(
                                    Pool2,
                                    v16,
                                    0LL,
                                    0LL,
                                    0x800u,
                                    L"%s\\%s\\%s",
                                    L"System\\CurrentControlSet\\Enum",
                                    v10,
                                    v26);
          break;
        }
        DeviceSoftwareKeyPath = -1073741789;
        break;
    }
    if ( DeviceSoftwareKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v12 = 2LL * (unsigned int)v80;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  inited = DeviceSoftwareKeyPath;
  if ( DeviceSoftwareKeyPath < 0 )
    goto LABEL_31;
  if ( (a3 & 0x100) != 0 )
  {
    v45 = a1;
    v32 = Pool2;
    if ( a1 )
      v54 = a1[28];
    else
      v54 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v54, 0LL, 0x2000000LL, &v74);
    if ( inited >= 0 )
    {
      v47 = v74;
      goto LABEL_89;
    }
LABEL_31:
    v24 = P;
    goto LABEL_32;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_31;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v12 || DestinationString.Length <= 0x32u )
  {
LABEL_30:
    inited = -1073741811;
    goto LABEL_31;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v30 = L"System\\CurrentControlSet\\";
  Flink = CurrentServerSiloGlobals[75].Flink;
  while ( v30 < L"" )
  {
    v22 = *v30;
    v23 = *(const wchar_t *)((char *)v30 + (char *)DestinationString.Buffer - (char *)L"System\\CurrentControlSet\\");
    if ( (_WORD)v22 != (_WORD)v23 )
    {
      if ( (unsigned int)v22 >= 0x61 )
      {
        if ( (unsigned int)v22 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v22 >= 0xC0u )
            LOWORD(v22) = *((_WORD *)&Flink->Flink
                          + (v22 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v22 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v22 >> 8))))
                        + v22;
        }
        else
        {
          LOWORD(v22) = v22 - 32;
        }
      }
      if ( (unsigned int)v23 >= 0x61 )
      {
        if ( (unsigned int)v23 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v23 >= 0xC0u )
            LOWORD(v23) = *((_WORD *)&Flink->Flink
                          + (v23 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v23 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v23 >> 8))))
                        + v23;
        }
        else
        {
          LOWORD(v23) = v23 - 32;
        }
      }
      if ( (_WORD)v22 != (_WORD)v23 )
        goto LABEL_30;
    }
    ++v30;
  }
  v32 = Pool2 + 25;
  v33 = Length - 50;
  v34 = PsGetCurrentServerSiloGlobals();
  v35 = L"Enum\\";
  v36 = v34[75].Flink;
  if ( v33 < 0xAu )
  {
    PsGetCurrentServerSiloGlobals();
    v44 = 4LL;
  }
  else
  {
    while ( 1 )
    {
      if ( v35 >= L"" )
      {
        v44 = 5LL;
        v32 = Pool2 + 30;
        goto LABEL_86;
      }
      v37 = *v35;
      v38 = *(const wchar_t *)((char *)v35 + (char *)v32 - (char *)L"Enum\\");
      if ( (_WORD)v37 != (_WORD)v38 )
      {
        if ( (unsigned int)v37 >= 0x61 )
        {
          if ( (unsigned int)v37 > 0x7A )
          {
            if ( v36 && (unsigned __int16)v37 >= 0xC0u )
              LOWORD(v37) = *((_WORD *)&v36->Flink
                            + (v37 & 0xF)
                            + *((unsigned __int16 *)&v36->Flink
                              + ((unsigned __int8)v37 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v36->Flink + (v37 >> 8))))
                          + v37;
          }
          else
          {
            LOWORD(v37) = v37 - 32;
          }
        }
        if ( (unsigned int)v38 >= 0x61 )
        {
          if ( (unsigned int)v38 > 0x7A )
          {
            if ( v36 && (unsigned __int16)v38 >= 0xC0u )
              LOWORD(v38) = *((_WORD *)&v36->Flink
                            + (v38 & 0xF)
                            + *((unsigned __int16 *)&v36->Flink
                              + ((unsigned __int8)v38 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v36->Flink + (v38 >> 8))))
                          + v38;
          }
          else
          {
            LOWORD(v38) = v38 - 32;
          }
        }
        if ( (_WORD)v37 != (_WORD)v38 )
          break;
      }
      ++v35;
    }
    v39 = PsGetCurrentServerSiloGlobals();
    v40 = L"Hardware Profiles\\";
    v41 = (__int64)v39[75].Flink;
    if ( v33 < 0x24u )
    {
LABEL_95:
      v44 = 4LL;
    }
    else
    {
      while ( v40 < L"" )
      {
        v42 = *v40;
        v43 = *(const wchar_t *)((char *)v40 + (char *)v32 - (char *)L"Hardware Profiles\\");
        if ( *v40 != (_WORD)v43 )
        {
          NLS_UPCASE(v41, v43);
          v51 = NLS_UPCASE(v41, v42);
          if ( v51 != v52 )
            goto LABEL_95;
        }
        ++v40;
      }
      v44 = 14LL;
      v32 = Pool2 + 43;
    }
  }
LABEL_86:
  v45 = a1;
  v46 = (_QWORD *)a1[(unsigned int)v44 + 12];
  if ( !v46 )
  {
    switch ( (int)v44 )
    {
      case 4:
      case 6:
      case 7:
      case 8:
      case 12:
      case 13:
        goto LABEL_177;
      case 5:
      case 9:
      case 10:
      case 11:
      case 14:
      case 15:
        v69 = (_QWORD *)a1[7];
        if ( v69 == a1 + 7 )
LABEL_177:
          v46 = (_QWORD *)a1[11];
        else
          v46 = v69 - 2;
        a1[(unsigned int)v44 + 12] = v46;
        break;
    }
  }
  inited = PnpCtxGetCachedNodeBaseKey(a1, v46, v44, &v75);
  if ( inited < 0 )
    goto LABEL_31;
  v47 = v75;
  v10 = a2;
LABEL_89:
  if ( v45 && (v48 = v45[28]) != 0 )
    v49 = *(_QWORD *)(v48 + 8);
  else
    v49 = 0LL;
  v50 = RegRtlOpenKeyTransacted(v47, v32, 0LL, a5, a7, v49);
  if ( !v50 )
  {
    *a8 = 2;
    goto LABEL_31;
  }
  if ( v50 == -1073741444 )
  {
    inited = -1073741595;
    goto LABEL_31;
  }
  if ( v50 != -1073741772 )
  {
    inited = v50;
    goto LABEL_31;
  }
  v53 = (unsigned __int8)a3;
  if ( !a6 )
  {
    if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      inited = -1073741772;
    else
      inited = -1073741810;
    goto LABEL_31;
  }
  if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
  {
    inited = CmOpenDeviceRegKey((__int64)a1, v10, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_31;
  }
  DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
  v24 = P;
  inited = DeviceRegKeySecurityDescriptor;
  if ( DeviceRegKeySecurityDescriptor >= 0 )
  {
    v56 = a5;
    if ( P )
      v56 = 917510;
    v57 = PnpCtxRegCreateTree(a1, v47, v32, v53 == 19, v56, P, &v73, a8);
    if ( v57 == -1073741444 )
    {
      inited = -1073741595;
    }
    else if ( v57 < 0 )
    {
      inited = v57;
    }
    else if ( v56 == a5 )
    {
      *a7 = v73;
      v73 = 0LL;
    }
    else
    {
      v58 = PnpCtxRegOpenKey((_DWORD)a1, (_DWORD)v73, 0, 0, a5, (__int64)a7);
      if ( v58 == -1073741444 )
      {
        inited = -1073741772;
      }
      else if ( v58 < 0 )
      {
        inited = v58;
      }
    }
  }
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  if ( v74 )
    ZwClose(v74);
  if ( v73 )
    ZwClose(v73);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
