/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x1405CE230
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405CF098 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     RtlStringCbLengthA @ 0x140597F68 (RtlStringCbLengthA.c)
 *     IoFreeDumpRange @ 0x1405C6FD0 (IoFreeDumpRange.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1405D29D8 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405D7BE8 (IopLiveDumpTraceNoArgs.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E71B4 (KeValidateBugCheckCallbackRecord.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 *__fastcall IopLiveDumpCallRemovePagesCallbacks(_DWORD *a1)
{
  _DWORD *v1; // r13
  unsigned int v2; // edi
  const CHAR *v3; // rsi
  bool IsTracingEnabled; // r12
  __int64 v5; // r14
  __int64 *result; // rax
  __int64 v7; // rcx
  bool v8; // r13
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  char *v12; // rdx
  int v13; // eax
  size_t pcbLength; // [rsp+38h] [rbp-E0h] BYREF
  const CHAR *v15; // [rsp+40h] [rbp-D8h]
  _DWORD *v16; // [rsp+48h] [rbp-D0h]
  __int128 v17; // [rsp+50h] [rbp-C8h]
  __int128 v18; // [rsp+60h] [rbp-B8h]
  __int64 *v19; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-A0h]
  _DWORD *v21; // [rsp+80h] [rbp-98h]
  __int64 v22; // [rsp+88h] [rbp-90h]
  _DWORD *v23; // [rsp+90h] [rbp-88h]
  const CHAR *v24; // [rsp+98h] [rbp-80h]
  __int128 v25; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-58h]
  __int128 v28; // [rsp+D0h] [rbp-48h]
  const CHAR *v29; // [rsp+E0h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+E8h] [rbp-30h]
  int v31; // [rsp+ECh] [rbp-2Ch]

  v1 = a1;
  v16 = a1;
  v21 = a1;
  v23 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v2 = 1;
  pcbLength = 1LL;
  v3 = &File;
  v15 = &File;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  if ( IsTracingEnabled )
    IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START);
  v5 = KeBugCheckAddRemovePagesCallbackListHead;
  result = &KeBugCheckAddRemovePagesCallbackListHead;
  v19 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v22 = v5;
    if ( (__int64 *)v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v20 = v5;
    result = (__int64 *)KeValidateBugCheckCallbackRecord(v5, 6LL, &v19);
    if ( (_BYTE)result )
    {
      if ( IsTracingEnabled )
      {
        v7 = *(_QWORD *)(v5 + 24);
        if ( v7 && MmIsAddressValidEx(v7) && RtlStringCbLengthA(*(STRSAFE_PCNZCH *)(v5 + 24), 0x101uLL, &pcbLength) >= 0 )
        {
          v3 = *(const CHAR **)(v5 + 24);
          v2 = ++pcbLength;
        }
        else
        {
          pcbLength = 1LL;
          v2 = 1;
          v3 = &File;
        }
        v15 = v3;
        v29 = v3;
        v30 = v2;
        v31 = 0;
        IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_START, 1LL, &v29);
      }
      v24 = v3;
      *(_QWORD *)&v17 = 0LL;
      HIDWORD(v17) = *v1;
      do
      {
        v18 = 0uLL;
        DWORD2(v17) = 0;
        v8 = 0;
        guard_dispatch_icall_no_overrides(6LL, v20);
        if ( *((_QWORD *)&v18 + 1) )
        {
          v9 = DWORD2(v17);
          if ( (DWORD2(v17) & 0x80000303) != 0 )
          {
            v10 = DWORD2(v17) & 0x80000000;
            if ( SDWORD2(v17) < 0 )
            {
              v9 = DWORD2(v17) & 0x7FFFFFFF;
              DWORD2(v17) &= ~0x80000000;
            }
            v8 = v10 != 0;
            if ( ((v9 - 1) & v9) != 0 )
            {
              v13 = -1073741811;
            }
            else
            {
              v11 = v9 & 1;
              v12 = (char *)v18;
              if ( !v11 )
                v12 = (char *)((unsigned __int64)v18 >> 12);
              v25 = *((_OWORD *)v23 + 36);
              *(_QWORD *)&v27 = &v25;
              v13 = IoFreeDumpRange((__int64)&v26, v12, *((__int64 *)&v18 + 1), 2 * (v11 ^ 1u));
            }
            if ( v13 < 0 )
            {
              v8 = 0;
              IopLiveDumpTraceRemovePagesCallbackFailure(v3, v2, (unsigned int)v13);
            }
          }
        }
      }
      while ( v8 );
      if ( IsTracingEnabled )
      {
        v29 = v24;
        v30 = v2;
        v31 = 0;
        IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_END, 1LL, &v29);
      }
      v1 = v16;
    }
    else if ( !v19 )
    {
      break;
    }
    v5 = *(_QWORD *)v5;
    result = &KeBugCheckAddRemovePagesCallbackListHead;
  }
  if ( IsTracingEnabled )
    return (__int64 *)IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END);
  return result;
}
