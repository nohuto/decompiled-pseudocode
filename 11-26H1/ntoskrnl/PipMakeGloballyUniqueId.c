/*
 * XREFs of PipMakeGloballyUniqueId @ 0x140AF4A38
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMakeGloballyUniqueId(__int64 a1, __int64 a2, wchar_t **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  wchar_t **v6; // r12
  wchar_t *v7; // r15
  wchar_t *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  int CachedContextBaseKey; // ebx
  unsigned int v13; // r12d
  wchar_t *v14; // rax
  __int64 v15; // rax
  wchar_t *Pool2; // rax
  wchar_t *Buffer; // rcx
  int v19; // edx
  int v20; // ebx
  int v21; // ebx
  wchar_t *v22; // rax
  unsigned int v23; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v26; // [rsp+30h] [rbp-69h]
  __int64 v27; // [rsp+38h] [rbp-61h]
  ULONG v28; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v29; // [rsp+58h] [rbp-41h]
  int Data; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+78h] [rbp-21h]
  HANDLE v33; // [rsp+80h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-11h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+90h] [rbp-9h]
  __int64 v36; // [rsp+98h] [rbp-1h]
  __int64 v37; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v39; // [rsp+ACh] [rbp+13h]
  int v40; // [rsp+B0h] [rbp+17h]
  unsigned int v41; // [rsp+B4h] [rbp+1Bh]

  v37 = a2;
  Data = 0;
  KeyHandle = 0LL;
  v28 = 0;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = -1LL;
  v29 = a3;
  v6 = a3;
  v33 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( a1 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v10 = 0LL;
  v11 = *(_QWORD *)(v10 + 48);
  v36 = v10;
  SourceString = (PCUNICODE_STRING)(v10 + 40);
  CachedContextBaseKey = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, 16, 0, 131103, 0, (__int64)&KeyHandle, 0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = L"UniqueParentID";
    *(_DWORD *)&ValueName.Length = 1966108;
    CachedContextBaseKey = ZwQueryValueKey(
                             KeyHandle,
                             &ValueName,
                             KeyValuePartialInformation,
                             KeyValueInformation,
                             0x10u,
                             &v28);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v39 != 4 || v40 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_17;
      }
      v32 = v41;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v8 = Pool2;
      if ( Pool2 )
      {
        RtlStringCbPrintfW(Pool2, 0x12uLL, L"%x", v32);
LABEL_10:
        if ( v37 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( *(_WORD *)(v37 + 2 * v15) );
        }
        else
        {
          LODWORD(v15) = 0;
        }
        do
          ++v5;
        while ( v8[v5] );
        v28 = v5 + v15 + 2;
        v7 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( v7 )
        {
          if ( v37 )
            RtlStringCchPrintfW(v7, v28, L"%s&%s", v8, v37);
          else
            RtlStringCchCopyW(v7, v28, v8);
          goto LABEL_16;
        }
      }
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      ValueName.Buffer = L"ParentIdPrefix";
      v28 = 66;
      v9 = ExAllocatePool2(0x100uLL);
      if ( v9 )
      {
        CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)v9, v28, &v28);
        if ( CachedContextBaseKey < 0 )
        {
          v28 = 31;
          CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, SourceString, 1u);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          Buffer = ValueName.Buffer;
          v19 = 0;
          while ( Buffer < &ValueName.Buffer[(unsigned __int64)ValueName.Length >> 1] )
            v19 = *Buffer++ + 37 * v19;
          v20 = -314159269 * v19;
          if ( -314159269 * v19 < 0 )
            v20 = 314159269 * v19;
          v21 = v20 % 1000000007;
          v32 = v21;
          RtlFreeAnsiString(&ValueName);
          SourceString = (PCUNICODE_STRING)(2 * v28);
          v22 = (wchar_t *)ExAllocatePool2(0x100uLL);
          v8 = v22;
          if ( !v22 )
            goto LABEL_15;
          LODWORD(ResultLength) = *(_DWORD *)(v36 + 152);
          Length[0] = v21;
          RtlStringCbPrintfW(v22, (size_t)SourceString, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 5, (__int64)&v33);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          RtlInitUnicodeString(&ValueName, v8);
          if ( ZwQueryValueKey(v33, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v28) >= 0
            && v39 == 4
            && v40 == 4 )
          {
            v23 = v41;
          }
          else
          {
            v23 = 0;
          }
          Data = v23 + 1;
          CachedContextBaseKey = ZwSetValueKey(v33, &ValueName, 0, 4u, &Data, 4u);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          ValueName.Buffer = L"ParentIdPrefix";
          --Data;
          LODWORD(v27) = v32;
          *(_DWORD *)&ValueName.Length = 1966108;
          v33 = v8;
          LODWORD(v26) = *(_DWORD *)(v36 + 152);
          RtlStringCchPrintfExW(
            v8,
            (unsigned __int64)SourceString >> 1,
            (NTSTRSAFE_PWSTR *)&v33,
            0LL,
            0,
            L"%x&%x&%x",
            v26,
            v27,
            Data);
          v28 = (((_BYTE *)v33 - (_BYTE *)v8) >> 1) + 1;
          CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v8, 2 * v28);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          goto LABEL_10;
        }
        if ( *(_DWORD *)(v9 + 4) != 1 )
        {
          CachedContextBaseKey = -1073741811;
          goto LABEL_16;
        }
        v13 = *(_DWORD *)(v9 + 8);
        v14 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v8 = v14;
        if ( v14 )
        {
          RtlStringCbCopyW(v14, v13, (NTSTRSAFE_PCWSTR)(v9 + 12));
          goto LABEL_10;
        }
      }
    }
LABEL_15:
    CachedContextBaseKey = -1073741670;
LABEL_16:
    v6 = v29;
LABEL_17:
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *v6 = v7;
  return (unsigned int)CachedContextBaseKey;
}
