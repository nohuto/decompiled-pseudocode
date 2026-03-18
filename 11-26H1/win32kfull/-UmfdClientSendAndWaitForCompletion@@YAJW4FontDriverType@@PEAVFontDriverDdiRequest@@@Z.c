/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1400D2A18 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1400D2D30 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1400D31B4 (UmfdUnloadFontFileInternal.c)
 *     UmfdDrvFreeInternal @ 0x1400D3888 (UmfdDrvFreeInternal.c)
 *     UmfdDestroyFont @ 0x1400FC9D0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1400FCAAC (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdQueryAdvanceWidths @ 0x1400FCBE0 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x1400FCCF0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontData @ 0x1400FCE50 (UmfdQueryFontData.c)
 *     UmfdQueryFont @ 0x1400FD550 (UmfdQueryFont.c)
 *     UmfdQueryTrueTypeOutline @ 0x1400FD620 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryFontTree @ 0x1401F7D30 (UmfdQueryFontTree.c)
 *     UmfdQueryFontFile @ 0x1401F8250 (UmfdQueryFontFile.c)
 *     UmfdGetTrueTypeFile @ 0x140223FA0 (UmfdGetTrueTypeFile.c)
 *     UmfdFontManagement @ 0x1402354F0 (UmfdFontManagement.c)
 *     UmfdEscape @ 0x14034E5D0 (UmfdEscape.c)
 *     UmfdQueryGlyphAttrs @ 0x14034E680 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x140002924 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F94F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x1400FD2F4 (_UmfdClientSendAndWaitForCompletion_--_2_--_lambda_1_--operator().c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1400FD478 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1401ADEE8 (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1401D1440 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
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
  __int64 *v10; // r14
  struct W32_PUSH_LOCK *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v21; // rdi
  unsigned int CurrentThreadId; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28[4]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+58h] BYREF

  v31 = a2;
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
    v29[0] = v5;
    *v6 = 0LL;
    v29[1] = &v31;
    v29[2] = v6;
    v11 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96) + 24240LL);
    GreAcquirePushLockShared(v11);
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 24272LL) )
    {
      v15 = UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator()(v29);
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
        if ( (unsigned int)dword_1403AAA30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x200000000000LL) )
        {
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
          LODWORD(v32) = v21;
          v30 = CurrentThreadId;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1403AAA30,
            byte_14037AE83,
            v23,
            v24,
            (__int64)&v32,
            (__int64)&v30);
        }
        KeSetEvent(**(PRKEVENT **)(*v5 + 8LL), 1, 0);
        v15 = UmfdClientSignalServerAndWaitForCompletion(v5, v10, 0LL);
        if ( (unsigned int)dword_1403AAA30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x200000000000LL) )
        {
          v25 = (unsigned int)PsGetCurrentThreadId();
          LODWORD(v32) = v21;
          v30 = v25;
          v28[0] = v15;
          v33 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v21;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v33,
            (__int64)&unk_14037AE0D,
            v26,
            v27,
            (__int64)v28,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v30);
        }
        goto LABEL_13;
      }
      v17 = *(_DWORD *)(v16 + 8) == 3;
      v18 = v5[1];
      v19 = *(_QWORD *)(v16 + 40);
      v32 = v16;
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
      CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v32);
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
