/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x140A18390
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x140A17B4C (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceName @ 0x140963098 (_CmGetDeviceInterfaceName.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140A18858 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140A18948 (_CmGetDeviceInterfacePathFormat.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v5; // rsi
  const WCHAR *v6; // rdi
  wchar_t *Buffer; // rcx
  unsigned __int64 Length; // rdx
  __int64 MaximumLength; // r8
  WCHAR *Pool2; // rax
  const WCHAR *v11; // rbx
  const WCHAR *v12; // r13
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  wchar_t *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  wchar_t *v20; // rdi
  char v21; // r12
  UNICODE_STRING *v22; // r12
  __int64 v23; // r9
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  size_t v28; // [rsp+30h] [rbp-D0h]
  size_t v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v37[40]; // [rsp+B0h] [rbp-50h] BYREF

  DestinationString = AliasSymbolicLinkName;
  LOWORD(v30) = 0;
  Handle = 0LL;
  v32 = 0;
  v5 = 0LL;
  v33 = 0;
  v6 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName )
    goto LABEL_38;
  Buffer = SymbolicLinkName->Buffer;
  if ( !Buffer )
    goto LABEL_38;
  Length = SymbolicLinkName->Length;
  if ( !(_WORD)Length )
    goto LABEL_38;
  MaximumLength = SymbolicLinkName->MaximumLength;
  if ( (unsigned __int16)MaximumLength >= 2u )
  {
    if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    {
LABEL_38:
      ObjectProperty = -1073741811;
      goto LABEL_34;
    }
    if ( *Buffer
      && ((_WORD)Length != (_WORD)MaximumLength || Buffer[((unsigned __int64)SymbolicLinkName->Length >> 1) - 1])
      && (Length > MaximumLength - 2 || Buffer[(Length >> 1) - 1] && Buffer[Length >> 1]) )
    {
      Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
      v11 = Pool2;
      if ( !Pool2 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_34;
      }
      memmove(Pool2, SymbolicLinkName->Buffer, SymbolicLinkName->Length);
      v6 = v11;
      v11[(unsigned __int64)SymbolicLinkName->Length >> 1] = 0;
    }
    else
    {
      v6 = Buffer;
    }
  }
  v12 = v6;
  if ( (int)CmValidateDeviceInterfaceName((__int64)Buffer, v6) < 0 )
    goto LABEL_38;
  SeCaptureSubjectContext(&SubjectContext);
  ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v6, 3, 0LL, &SubjectContext, &v30);
  SeReleaseSubjectContext(&SubjectContext);
  if ( ObjectProperty >= 0 )
  {
    if ( !(_BYTE)v30 )
    {
      ObjectProperty = -1073741790;
      goto LABEL_34;
    }
    ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v37);
    if ( ObjectProperty >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v15 = ExAllocatePool2(0x100uLL);
      v16 = (wchar_t *)v15;
      if ( v15 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v6,
                           3,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           &v32,
                           v15,
                           0x190u,
                           (__int64)&v33,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_30;
        if ( v32 != 18 )
        {
          ObjectProperty = -1073741585;
          goto LABEL_30;
        }
        v31 = 128;
        v5 = (void *)ExAllocatePool2(0x100uLL);
        if ( !v5 )
          goto LABEL_37;
        ObjectProperty = CmGetDeviceInterfaceReferenceString(v17, v6, v5, 128LL, &v31);
        if ( ObjectProperty != -1073741789 )
        {
LABEL_21:
          if ( ObjectProperty == -1073741772 )
          {
            ExFreePoolWithTag(v5, 0);
            v5 = 0LL;
          }
          else if ( ObjectProperty < 0 )
          {
            goto LABEL_30;
          }
          ObjectProperty = CmGetDeviceInterfacePathFormat(v18, v6, (char *)&v30 + 1);
          if ( ObjectProperty >= 0 )
          {
            v31 = 512;
            v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
            if ( v20 )
            {
              v21 = BYTE1(v30);
              LODWORD(v28) = 512;
              ObjectProperty = CmGetDeviceInterfaceName(v19, v37, v16, (const wchar_t *)v5, SBYTE1(v30), v20, v28, &v31);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_26:
                if ( ObjectProperty >= 0 )
                {
                  v22 = DestinationString;
                  ObjectProperty = RtlInitUnicodeStringEx(DestinationString, v20);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)v20,
                                       48,
                                       v23,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty >= 0 )
                      ZwClose(Handle);
                    else
                      RtlFreeAnsiString(v22);
                  }
                }
                goto LABEL_30;
              }
              ExFreePoolWithTag(v20, 0);
              v26 = v31;
              v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
              if ( v20 )
              {
                LODWORD(v29) = v26;
                ObjectProperty = CmGetDeviceInterfaceName(v27, v37, v16, (const wchar_t *)v5, v21, v20, v29, &v31);
                goto LABEL_26;
              }
            }
            goto LABEL_37;
          }
LABEL_30:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v6 = v12;
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          goto LABEL_34;
        }
        ExFreePoolWithTag(v5, 0);
        v5 = (void *)ExAllocatePool2(0x100uLL);
        if ( v5 )
        {
          ObjectProperty = CmGetDeviceInterfaceReferenceString(v25, v6, v5, v31, &v31);
          goto LABEL_21;
        }
      }
LABEL_37:
      ObjectProperty = -1073741670;
      goto LABEL_30;
    }
  }
LABEL_34:
  PnpUnicodeStringToWstrFree(v6, SymbolicLinkName);
  return ObjectProperty;
}
