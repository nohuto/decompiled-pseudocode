/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x140109CBC
 * Callers:
 *     UmfdLoadFontFile @ 0x140107CD0 (UmfdLoadFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1401090A0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x140109170 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontFile @ 0x140109450 (UmfdQueryFontFile.c)
 *     UmfdQueryFontTree @ 0x1401094A0 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x140109720 (UmfdQueryFont.c)
 *     UmfdDestroyFont @ 0x1401097A0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x140109870 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdQueryAdvanceWidths @ 0x140109940 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x140109A50 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontData @ 0x140109BA0 (UmfdQueryFontData.c)
 *     UmfdUnloadFontFileInternal @ 0x14010A388 (UmfdUnloadFontFileInternal.c)
 *     UmfdDrvFreeInternal @ 0x14010ACF8 (UmfdDrvFreeInternal.c)
 *     UmfdGetTrueTypeFile @ 0x14010ADA0 (UmfdGetTrueTypeFile.c)
 *     UmfdFontManagement @ 0x14010AF00 (UmfdFontManagement.c)
 *     UmfdEscape @ 0x140341020 (UmfdEscape.c)
 *     UmfdQueryGlyphAttrs @ 0x1403410C0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x140002648 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x14010A03C (_UmfdClientSendAndWaitForCompletion_--_2_--_lambda_1_--operator().c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x14010A1D4 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x140177570 (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x14019F868 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r15
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rsi
  struct W32_PUSH_LOCK *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r14
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v21; // rdi
  unsigned int CurrentThreadId; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v26[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+48h] BYREF
  int v29; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+58h]

  v28 = a2;
  v3 = (int)a1;
  if ( (unsigned int)a1 > 3 )
    return 3221225485LL;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104);
  _mm_lfence();
  v5 = *(_QWORD **)(v4 + 8 * v3 + 16);
  v6 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  v10 = v6;
  if ( v6 )
  {
    v26[0] = v5;
    *v6 = 0LL;
    v26[1] = &v28;
    v26[2] = v6;
    v11 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96) + 24256LL);
    GreAcquirePushLockShared(v11);
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 24288LL) )
    {
      v15 = UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator()(v26);
      if ( v11 )
        GreReleasePushLockShared(v11);
      if ( v15 < 0 )
        goto LABEL_13;
      v16 = *v10;
      if ( !*v10 )
      {
        v15 = -1073741811;
        goto LABEL_13;
      }
      if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                           **(_QWORD **)(*v5 + 8LL),
                           **(_QWORD **)(*(_QWORD *)(v16 + 40) + 8LL),
                           0LL,
                           0LL,
                           "0u") == 258 )
      {
        v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_14039BBC0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x200000000000LL) )
        {
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
          v29 = v21;
          v27 = CurrentThreadId;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_14039BBC0,
            (unsigned int)&unk_14036C294,
            v23,
            v24,
            (__int64)&v29,
            (__int64)&v27);
        }
        KeSetEvent(**(PRKEVENT **)(*v5 + 8LL), 1, 0);
        v15 = UmfdClientSignalServerAndWaitForCompletion(v5, v10, 0LL);
        if ( (unsigned int)dword_14039BBC0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x200000000000LL) )
        {
          v30 = (unsigned int)PsGetCurrentThreadId();
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - (unsigned int)v21,
            (__int64)&unk_14036C21E);
        }
        goto LABEL_13;
      }
      v17 = *(_DWORD *)(v16 + 8) == 3;
      v18 = v5[1];
      v19 = *(_QWORD *)(v16 + 40);
      v25 = v16;
      if ( v17 )
      {
        EngFreeMem((PVOID)v16);
        if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v18) > 8 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v18);
          CEventPool::CEventPoolEntry::Destroy((PVOID)v19);
        }
        else
        {
          KeResetEvent(**(PRKEVENT **)(v19 + 8));
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v18 + 16), (PSLIST_ENTRY)v19);
        }
        *v10 = 0LL;
        v15 = 0;
        goto LABEL_13;
      }
      CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v25);
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v18) > 8 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v18);
        CEventPool::CEventPoolEntry::Destroy((PVOID)v19);
      }
      else
      {
        KeResetEvent(**(PRKEVENT **)(v19 + 8));
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v18 + 16), (PSLIST_ENTRY)v19);
      }
      *v10 = 0LL;
    }
    else if ( v11 )
    {
      GreReleasePushLockShared(v11);
    }
    v15 = -1073741823;
LABEL_13:
    EngFreeMem(v10);
    return (unsigned int)v15;
  }
  return 3221225495LL;
}
