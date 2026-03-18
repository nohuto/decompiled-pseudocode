/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C9DA0 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140931C40 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140959250 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140A82858 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        _QWORD *a1,
        const WCHAR *a2,
        unsigned int a3,
        int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        ULONG *a8)
{
  const WCHAR *v11; // rbx
  wchar_t *v12; // r13
  unsigned int v13; // r14d
  void *v14; // rdi
  unsigned __int64 v15; // rdi
  int DeviceInterfaceRegKeyPath; // eax
  int inited; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v19; // r11d
  wchar_t *Buffer; // r10
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v22; // r8d
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  const WCHAR *v25; // r15
  _QWORD *v26; // rdx
  HANDLE v27; // r13
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  struct _LIST_ENTRY *v32; // rax
  unsigned __int16 v33; // dx
  wchar_t *v34; // r10
  struct _LIST_ENTRY *v35; // rbx
  unsigned __int16 v36; // r11
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  __int64 v39; // rcx
  ACCESS_MASK v40; // edi
  HANDLE v41; // rax
  int v42; // eax
  _QWORD *v43; // rdx
  __int64 v44; // [rsp+28h] [rbp-69h]
  unsigned int v45; // [rsp+48h] [rbp-49h] BYREF
  void *v46; // [rsp+50h] [rbp-41h] BYREF
  wchar_t *Pool2; // [rsp+58h] [rbp-39h]
  HANDLE v48; // [rsp+60h] [rbp-31h] BYREF
  HANDLE v49; // [rsp+68h] [rbp-29h] BYREF
  void *v50; // [rsp+70h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF

  v45 = 0;
  v50 = 0LL;
  v11 = a2;
  v49 = 0LL;
  v12 = 0LL;
  v48 = 0LL;
  v13 = 4;
  Handle = 0LL;
  v14 = 0LL;
  v46 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
  {
LABEL_23:
    inited = -1073741811;
    goto LABEL_35;
  }
  LODWORD(v15) = (a3 & 0x200) != 0 ? 600 : 480;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_34;
    }
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  (unsigned int)v15 >> 1,
                                  v11,
                                  a3,
                                  a4,
                                  v44,
                                  Pool2,
                                  (unsigned int)v15 >> 1,
                                  (size_t)&v45);
    inited = DeviceInterfaceRegKeyPath;
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v12, 0);
    v12 = 0LL;
    v15 = 2LL * v45;
    if ( v15 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_34;
    }
    v11 = a2;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_34;
  if ( (a3 & 0x100) != 0 )
  {
    v25 = v12;
    if ( a1 )
      v39 = a1[28];
    else
      v39 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v39, 0LL, 0x2000000LL, &v49);
    if ( inited >= 0 )
    {
      v27 = v49;
      goto LABEL_28;
    }
  }
  else
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, v12);
    if ( inited >= 0 )
    {
      if ( DestinationString.Length >= (unsigned int)v15
        || DestinationString.Length <= 0x32u
        || (CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(),
            Buffer = `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer,
            Flink = CurrentServerSiloGlobals[75].Flink,
            v19 < v22) )
      {
LABEL_22:
        v14 = v46;
        goto LABEL_23;
      }
      while ( Buffer < `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer + 25 )
      {
        v23 = *Buffer;
        v24 = *(wchar_t *)((char *)Buffer
                         + (char *)DestinationString.Buffer
                         - (char *)`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer);
        if ( (_WORD)v23 != (_WORD)v24 )
        {
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
          if ( (unsigned int)v24 >= 0x61 )
          {
            if ( (unsigned int)v24 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v24 >= 0xC0u )
                LOWORD(v24) = *((_WORD *)&Flink->Flink
                              + (v24 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v24 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v24 >> 8))))
                            + v24;
            }
            else
            {
              LOWORD(v24) = v24 - 32;
            }
          }
          if ( (_WORD)v23 != (_WORD)v24 )
            goto LABEL_22;
        }
        ++Buffer;
      }
      v25 = v12 + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Length = v19 - 50;
      DestinationString.Buffer = v12 + 25;
      v32 = PsGetCurrentServerSiloGlobals();
      v34 = `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer;
      v35 = v32[75].Flink;
      if ( v36 < 0x2Cu )
      {
LABEL_96:
        if ( RtlPrefixUnicodeString(
               &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
               &DestinationString,
               1u) )
        {
          v13 = 14;
          v25 = v12 + 43;
        }
      }
      else
      {
        while ( v34 < `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer + 22 )
        {
          v37 = *v34;
          v38 = *(unsigned __int16 *)((char *)v34
                                    + (char *)v25
                                    - (char *)`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer);
          if ( (_WORD)v37 != (_WORD)v38 )
          {
            if ( (unsigned int)v37 >= 0x61 )
            {
              if ( (unsigned int)v37 > 0x7A )
              {
                if ( v35 && (unsigned __int16)v37 >= v33 )
                {
                  v33 = 192;
                  LOWORD(v37) = *((_WORD *)&v35->Flink
                                + (v37 & 0xF)
                                + *((unsigned __int16 *)&v35->Flink
                                  + ((unsigned __int8)v37 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&v35->Flink + (v37 >> 8))))
                              + v37;
                }
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
                if ( v35 && (unsigned __int16)v38 >= v33 )
                  LOWORD(v38) = *((_WORD *)&v35->Flink
                                + (v38 & 0xF)
                                + *((unsigned __int16 *)&v35->Flink
                                  + ((unsigned __int8)v38 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&v35->Flink + (v38 >> 8))))
                              + v38;
              }
              else
              {
                LOWORD(v38) = v38 - 32;
              }
            }
            if ( (_WORD)v37 != (_WORD)v38 )
              goto LABEL_96;
            v33 = 192;
          }
          ++v34;
        }
        v13 = 9;
        v25 = v12 + 47;
      }
      v26 = (_QWORD *)a1[v13 + 12];
      if ( !v26 )
      {
        if ( v13 <= 0xA && v13 != 9 || (v43 = (_QWORD *)a1[7], v43 == a1 + 7) )
          v26 = (_QWORD *)a1[11];
        else
          v26 = v43 - 2;
        a1[v13 + 12] = v26;
      }
      inited = PnpCtxGetCachedNodeBaseKey((__int64)a1, v26, v13, &v50);
      if ( inited >= 0 )
      {
        v27 = v50;
LABEL_28:
        if ( a1 && (v28 = a1[28]) != 0 )
          v29 = *(_QWORD *)(v28 + 8);
        else
          v29 = 0LL;
        v30 = RegRtlOpenKeyTransacted((__int64)v27, v25, 0, a5, a7, v29);
        if ( !v30 )
        {
          *a8 = 2;
LABEL_33:
          v12 = Pool2;
          goto LABEL_34;
        }
        if ( v30 != -1073741444 )
        {
          if ( v30 != -1073741772 )
            goto LABEL_95;
          if ( !a6 )
          {
            if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
              inited = -1073741772;
            else
              inited = -1073741127;
            goto LABEL_33;
          }
          if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
          {
            inited = CmOpenDeviceInterfaceRegKey((_DWORD)a1, (_DWORD)a2, 48, 0, 1, 0, (__int64)&Handle, 0LL);
            if ( inited < 0 )
              goto LABEL_33;
          }
          inited = CmGetDeviceInterfaceRegKeySecurityDescriptor(a1, a3, &v46);
          if ( inited < 0 )
            goto LABEL_33;
          v40 = a5;
          if ( v46 )
            v40 = 917510;
          v30 = PnpCtxRegCreateTree((__int64)a1, v27, v25, 0, v40, (__int64)v46, &v48, a8);
          if ( v30 != -1073741444 )
          {
            if ( v30 >= 0 )
            {
              if ( v40 == a5 )
              {
                v41 = v48;
                v48 = 0LL;
                *a7 = v41;
                goto LABEL_33;
              }
              v42 = PnpCtxRegOpenKey((__int64)a1, (__int64)v48, 0LL, 0, a5, (__int64)a7);
              if ( v42 == -1073741444 )
              {
                inited = -1073741772;
                goto LABEL_33;
              }
              v12 = Pool2;
              if ( v42 < 0 )
                inited = v42;
              goto LABEL_34;
            }
LABEL_95:
            inited = v30;
            goto LABEL_33;
          }
        }
        inited = -1073741595;
        goto LABEL_33;
      }
    }
  }
LABEL_34:
  v14 = v46;
LABEL_35:
  if ( Handle )
    ZwClose(Handle);
  if ( v49 )
    ZwClose(v49);
  if ( v48 )
    ZwClose(v48);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)inited;
}
