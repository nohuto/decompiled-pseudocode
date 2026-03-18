/*
 * XREFs of VidSchTerminateContext @ 0x140116930
 * Callers:
 *     VidSchiCreateContextInternal @ 0x14002D178 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x140026270 (VidSchiDecrementContextReference.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1400418E4 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140043428 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x14004CE0C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     VidSchFlushContext @ 0x140116BF0 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // r14
  int v3; // eax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r8
  __int128 v8; // xmm1
  int v9; // r10d
  int v10; // ecx
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rcx
  void *v14; // rdx
  bool v15; // zf
  __int64 v16; // rax
  int v17; // edx
  __int128 v18; // xmm1
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // r9
  int v22; // ecx
  __int128 v23; // [rsp+88h] [rbp+37h] BYREF
  __int128 v24; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 3128), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 228, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v2 + 3128));
    v23 = 0LL;
    LODWORD(v23) = 15;
    VidSchFlushContext(a1, &v23);
    v3 = *((_DWORD *)a1 + 28);
    if ( (v3 & 1) != 0 && (v14 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v2 + 8), v14);
      v15 = bTracingEnabled == 0;
      *((_QWORD *)a1 + 8) = 0LL;
      if ( !v15 )
      {
        v16 = *((_QWORD *)a1 + 13);
        v17 = *((_DWORD *)a1 + 233);
        v18 = *(_OWORD *)((char *)a1 + 972);
        v19 = *((unsigned int *)a1 + 232);
        v20 = *(_DWORD *)(v16 + 56) >> 4;
        v23 = *(_OWORD *)((char *)a1 + 956);
        v24 = v18;
        if ( v16 )
        {
          v21 = *(_QWORD *)(v16 + 8);
          if ( !v21 )
            v21 = v16;
        }
        else
        {
          v21 = 0LL;
        }
        v22 = (2 * (v20 & 1)) | 1;
        if ( (byte_14008A201 & 8) != 0 )
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v22,
            &EventDestroyContext,
            v19,
            v21,
            v19,
            v17,
            v23,
            SBYTE4(v23),
            SBYTE8(v23),
            SBYTE12(v23),
            v24,
            v22,
            a1);
      }
    }
    else if ( (v3 & 4) != 0 && bTracingEnabled )
    {
      v5 = *((_QWORD *)a1 + 13);
      v6 = *((_DWORD *)a1 + 28) & 0x40;
      v7 = *((unsigned int *)a1 + 233);
      v8 = *(_OWORD *)((char *)a1 + 972);
      v9 = *((_DWORD *)a1 + 232);
      v10 = *(_DWORD *)(v5 + 56) >> 4;
      v23 = *(_OWORD *)((char *)a1 + 956);
      v24 = v8;
      if ( v5 )
      {
        v11 = *(_QWORD *)(v5 + 8);
        if ( !v11 )
          v11 = v5;
      }
      else
      {
        v11 = 0LL;
      }
      v12 = (v6 != 0 ? 5 : 1) | (2 * (v10 & 1));
      if ( (byte_14008A201 & 8) != 0 )
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v12,
          &EventDestroyContext,
          v7,
          v11,
          v9,
          v7,
          v23,
          SBYTE4(v23),
          SBYTE8(v23),
          SBYTE12(v23),
          v24,
          v12,
          a1);
    }
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5606;
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 3221225485LL;
  }
}
