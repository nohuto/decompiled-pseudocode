/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x1405D0A40
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405D18A8 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     RtlStringCbLengthA @ 0x14059A6E8 (RtlStringCbLengthA.c)
 *     IoFreeDumpRange @ 0x1405C98A0 (IoFreeDumpRange.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1405D51C8 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405DA3E0 (IopLiveDumpTraceNoArgs.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E9B24 (KeValidateBugCheckCallbackRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _LIST_ENTRY **__fastcall IopLiveDumpCallRemovePagesCallbacks(_DWORD *a1)
{
  _DWORD *v1; // r13
  unsigned int v2; // edi
  const CHAR *v3; // rsi
  bool IsTracingEnabled; // r12
  struct _LIST_ENTRY *Blink; // r14
  struct _LIST_ENTRY **result; // rax
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
  struct _LIST_ENTRY **p_Blink; // [rsp+70h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+78h] [rbp-A0h]
  _DWORD *v21; // [rsp+80h] [rbp-98h]
  struct _LIST_ENTRY *v22; // [rsp+88h] [rbp-90h]
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
  Blink = KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  result = &KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  p_Blink = &KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  while ( 1 )
  {
    v22 = Blink;
    if ( Blink == (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink )
      break;
    v20 = Blink;
    result = (struct _LIST_ENTRY **)KeValidateBugCheckCallbackRecord(Blink, 6LL, &p_Blink);
    if ( (_BYTE)result )
    {
      if ( IsTracingEnabled )
      {
        v7 = (__int64)Blink[1].Blink;
        if ( v7
          && MmIsAddressValidEx(v7)
          && RtlStringCbLengthA((STRSAFE_PCNZCH)Blink[1].Blink, 0x101uLL, &pcbLength) >= 0 )
        {
          v3 = (const CHAR *)Blink[1].Blink;
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
    else if ( !p_Blink )
    {
      break;
    }
    Blink = Blink->Flink;
    result = &KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  }
  if ( IsTracingEnabled )
    return (struct _LIST_ENTRY **)IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END);
  return result;
}
