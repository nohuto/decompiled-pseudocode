/*
 * XREFs of MapChildVaSpace @ 0x140234DE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapChildVaSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 *a7,
        _QWORD *a8)
{
  __int64 Pool2; // rsi
  int v14; // eax
  __int64 v15; // rax
  struct _KPROCESS *v16; // rcx
  HANDLE *v17; // r14
  NTSTATUS v18; // edi
  int v19; // edx
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF

  Pool2 = ExAllocatePool2(256LL, 48LL, 1265072196LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 16081;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate channel context",
      16081LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v14 = *(_DWORD *)(a1 + 408);
  if ( (v14 & 0x100) != 0 )
    v15 = *(_QWORD *)(a1 + 592);
  else
    v15 = a1 & -(__int64)((v14 & 0x80u) != 0);
  v16 = *(struct _KPROCESS **)(*(_QWORD *)(v15 + 592) + 280LL);
  *(_QWORD *)(Pool2 + 40) = v16;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v16, &ApcState);
  if ( a2 )
  {
    v17 = (HANDLE *)(Pool2 + 16);
    v18 = ObOpenObjectByPointer(a2, 0x200u, 0LL, 0, 0LL, 0, (PHANDLE)(Pool2 + 16));
    if ( v18 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 16110;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to insert section to process",
        16110LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_18:
      if ( *v17 )
        ObCloseHandle(*v17, 0);
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 16142;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmbChannelMapChildVaSpace failed: 0x%I64x",
        v18,
        0LL,
        0LL,
        0LL,
        0LL);
      ExFreePoolWithTag((PVOID)Pool2, 0x4B677844u);
      goto LABEL_22;
    }
    v19 = 0;
    *(_DWORD *)(Pool2 + 24) = a6;
    v20 = 0;
  }
  else
  {
    v19 = a6;
    v20 = a5;
  }
  *a8 = 0LL;
  v21 = *(_DWORD *)(a1 + 408);
  if ( (v21 & 0x100) != 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_13:
    v23 = (_QWORD *)(v22 + 160);
    goto LABEL_17;
  }
  if ( (v21 & 0x80u) != 0 )
  {
    v22 = *(_QWORD *)(a1 + 592);
    goto LABEL_13;
  }
  v23 = 0LL;
LABEL_17:
  v17 = (HANDLE *)(Pool2 + 16);
  v18 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, int, int, __int64, _QWORD *))qword_1401686A8)(
          *v23,
          a3,
          a4 >> 12,
          Pool2 + 16,
          v20,
          v19,
          Pool2,
          a8);
  if ( v18 < 0 )
    goto LABEL_18;
  *a7 = Pool2;
  _InterlockedIncrement(&g_VgpuNumVaToGpaMappings);
  _InterlockedAdd64(&g_VgpuSizeVaToGpaMappings, a4);
LABEL_22:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v18;
}
