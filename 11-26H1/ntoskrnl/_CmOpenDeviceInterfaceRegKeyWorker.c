/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409616A0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140978C5C (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140B2621C (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 v10; // rbx
  void *v11; // r12
  unsigned int v12; // edi
  wchar_t *Pool2; // rsi
  int DeviceInterfaceRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // r15
  struct _LIST_ENTRY *Flink; // rdi
  const wchar_t *i; // rax
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  const WCHAR *v22; // r13
  unsigned __int16 v23; // r15
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v25; // dx
  const wchar_t *v26; // r8
  struct _LIST_ENTRY *v27; // rdi
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned int v30; // r8d
  _QWORD *v31; // r15
  _QWORD *v32; // rdx
  char *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // r14d
  int v39; // eax
  _QWORD *v40; // rdx
  int v41; // eax
  void *v42; // [rsp+48h] [rbp-39h] BYREF
  HANDLE v43; // [rsp+50h] [rbp-31h] BYREF
  HANDLE v44; // [rsp+58h] [rbp-29h] BYREF
  char *v45; // [rsp+60h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-11h] BYREF

  v45 = 0LL;
  v44 = 0LL;
  v10 = a2;
  v43 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v42 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    return 3221225485LL;
  v12 = 600;
  if ( (a3 & 0x200) == 0 )
    v12 = 480;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_24;
    }
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v12 >> 1, v10, a3, a4);
    inited = DeviceInterfaceRegKeyPath;
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v12 = 0;
    v10 = a2;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_24;
  if ( (a3 & 0x100) != 0 )
  {
    v31 = a1;
    v22 = Pool2;
    if ( a1 )
      v37 = a1[28];
    else
      v37 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v37, 0LL, 0x2000000LL, &v44);
    if ( inited >= 0 )
    {
      v33 = (char *)v44;
      goto LABEL_64;
    }
    goto LABEL_24;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_24;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v12 || DestinationString.Length <= 0x32u )
  {
LABEL_23:
    inited = -1073741811;
    goto LABEL_24;
  }
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  for ( i = L"System\\CurrentControlSet\\"; i < L""; ++i )
  {
    v19 = *i;
    v20 = *(const wchar_t *)((char *)i + (char *)DestinationString.Buffer - (char *)L"System\\CurrentControlSet\\");
    if ( (_WORD)v19 != (_WORD)v20 )
    {
      if ( (unsigned int)v19 >= 0x61 )
      {
        if ( (unsigned int)v19 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v19 >= 0xC0u )
            LOWORD(v19) = *((_WORD *)&Flink->Flink
                          + (v19 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v19 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v19 >> 8))))
                        + v19;
        }
        else
        {
          LOWORD(v19) = v19 - 32;
        }
      }
      if ( (unsigned int)v20 >= 0x61 )
      {
        if ( (unsigned int)v20 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v20 >= 0xC0u )
            LOWORD(v20) = *((_WORD *)&Flink->Flink
                          + (v20 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v20 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v20 >> 8))))
                        + v20;
        }
        else
        {
          LOWORD(v20) = v20 - 32;
        }
      }
      if ( (_WORD)v19 != (_WORD)v20 )
        goto LABEL_23;
    }
  }
  v22 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  v23 = Length - 50;
  DestinationString.Length = v23;
  DestinationString.Buffer = Pool2 + 25;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v26 = L"Control\\DeviceClasses\\";
  v27 = CurrentServerSiloGlobals[75].Flink;
  if ( v23 < 0x2Cu )
  {
LABEL_102:
    if ( RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
           &DestinationString,
           1u) )
    {
      v30 = 14;
      v22 = Pool2 + 43;
    }
    else
    {
      v30 = 4;
    }
  }
  else
  {
    while ( v26 < L"" )
    {
      v28 = *v26;
      v29 = *(const wchar_t *)((char *)v26 + (char *)v22 - (char *)L"Control\\DeviceClasses\\");
      if ( (_WORD)v28 != (_WORD)v29 )
      {
        if ( (unsigned int)v28 >= 0x61 )
        {
          if ( (unsigned int)v28 > 0x7A )
          {
            if ( v27 && (unsigned __int16)v28 >= v25 )
            {
              v25 = 192;
              LOWORD(v28) = *((_WORD *)&v27->Flink
                            + (v28 & 0xF)
                            + *((unsigned __int16 *)&v27->Flink
                              + ((unsigned __int8)v28 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v27->Flink + (v28 >> 8))))
                          + v28;
            }
          }
          else
          {
            LOWORD(v28) = v28 - 32;
          }
        }
        if ( (unsigned int)v29 >= 0x61 )
        {
          if ( (unsigned int)v29 > 0x7A )
          {
            if ( v27 && (unsigned __int16)v29 >= v25 )
              LOWORD(v29) = *((_WORD *)&v27->Flink
                            + (v29 & 0xF)
                            + *((unsigned __int16 *)&v27->Flink
                              + ((unsigned __int8)v29 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v27->Flink + (v29 >> 8))))
                          + v29;
          }
          else
          {
            LOWORD(v29) = v29 - 32;
          }
        }
        if ( (_WORD)v28 != (_WORD)v29 )
          goto LABEL_102;
        v25 = 192;
      }
      ++v26;
    }
    v30 = 9;
    v22 = Pool2 + 47;
  }
  v31 = a1;
  v32 = (_QWORD *)a1[v30 + 12];
  if ( !v32 )
  {
    switch ( v30 )
    {
      case 5u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xEu:
      case 0xFu:
        v40 = (_QWORD *)a1[7];
        if ( v40 == a1 + 7 )
          goto LABEL_104;
        v32 = v40 - 2;
        break;
      default:
LABEL_104:
        v32 = (_QWORD *)a1[11];
        break;
    }
    a1[v30 + 12] = v32;
  }
  inited = PnpCtxGetCachedNodeBaseKey((__int64)a1, v32, v30, &v45);
  if ( inited >= 0 )
  {
    v33 = v45;
LABEL_64:
    if ( v31 && (v34 = v31[28]) != 0 )
      v35 = *(_QWORD *)(v34 + 8);
    else
      v35 = 0LL;
    v36 = RegRtlOpenKeyTransacted(v33, v22, 0, a5, a7, v35);
    if ( !v36 )
    {
      *a8 = 2;
LABEL_69:
      v11 = v42;
      goto LABEL_24;
    }
    if ( v36 == -1073741444 )
    {
      v11 = v42;
      inited = -1073741595;
      goto LABEL_24;
    }
    if ( v36 != -1073741772 )
    {
      v11 = v42;
      inited = v36;
      goto LABEL_24;
    }
    if ( a6 )
    {
      if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
      {
        inited = CmOpenDeviceInterfaceRegKey((__int64)a1, a2, 48, 0LL, 1, 0, (__int64)&Handle, 0LL);
        if ( inited < 0 )
        {
          v11 = v42;
          goto LABEL_24;
        }
      }
      inited = CmGetDeviceInterfaceRegKeySecurityDescriptor(a1, a3, &v42);
      if ( inited < 0 )
        goto LABEL_69;
      v38 = a5;
      if ( v42 )
        v38 = 917510;
      v39 = PnpCtxRegCreateTree(a1, v33, v22, 0LL, v38, v42, &v43, a8);
      if ( v39 == -1073741444 )
      {
        v11 = v42;
        inited = -1073741595;
        goto LABEL_24;
      }
      if ( v39 < 0 )
      {
        v11 = v42;
        inited = v39;
        goto LABEL_24;
      }
      if ( v38 == a5 )
      {
        *a7 = v43;
        v11 = v42;
        v43 = 0LL;
        goto LABEL_24;
      }
      v41 = PnpCtxRegOpenKey((__int64)a1, (__int64)v43, 0LL, 0, a5, (__int64)a7);
      if ( v41 != -1073741444 )
      {
        v11 = v42;
        if ( v41 < 0 )
          inited = v41;
        goto LABEL_24;
      }
    }
    else if ( (unsigned __int8)a3 == 48 && (a3 & 0xF00) == 0 )
    {
      v11 = v42;
      inited = -1073741127;
      goto LABEL_24;
    }
    v11 = v42;
    inited = -1073741772;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( v44 )
    ZwClose(v44);
  if ( v43 )
    ZwClose(v43);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
