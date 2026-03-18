/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x140007A8C
 * Callers:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140049444 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x14003BC94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x14003CED0 (VidSchiSignalRegisteredSyncObjects.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140041574 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     McTemplateK0ptq_EtwWriteTransfer @ 0x140043B24 (McTemplateK0ptq_EtwWriteTransfer.c)
 *     VidSchiNotifyDeviceRemoved @ 0x140046508 (VidSchiNotifyDeviceRemoved.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiMarkDeviceAsError(struct HwQueueStagingList *a1, __int64 a2, int a3, _OWORD *a4)
{
  int v8; // eax
  signed __int32 v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *i; // rbx
  int v19; // [rsp+60h] [rbp-19h] BYREF
  int v20; // [rsp+64h] [rbp-15h] BYREF
  __int128 *v21; // [rsp+68h] [rbp-11h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1h] BYREF
  __int64 v24; // [rsp+80h] [rbp+7h] BYREF
  __int64 v25; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+90h] [rbp+17h] BYREF
  __int128 v27; // [rsp+98h] [rbp+1Fh] BYREF

  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ptq_EtwWriteTransfer(a3 & 0x7FFFFFFF, a2, a3, *(_QWORD *)(a2 + 8), a3 < 0, a3);
  if ( (unsigned int)a3 > 0xE || (v8 = 17024, !_bittest(&v8, a3)) )
  {
    if ( a3 >= 0 && !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A GPU Scheduler device 0x%p from process %s has been put in error due to Reason %d.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks when device is put in error, run \"?? dxgmms2!g_ErrorDeviceDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        (const void *)a2,
        *(const char **)(*(_QWORD *)(a2 + 48) + 2648LL),
        a3,
        (const void *)&g_ErrorDeviceDebugMode);
      __debugbreak();
    }
  }
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 208), a3, 0);
  VidSchiSignalRegisteredSyncObjects(a1);
  if ( a4 )
  {
    *(_OWORD *)(a2 + 216) = *a4;
    *(_OWORD *)(a2 + 232) = a4[1];
  }
  if ( !v9 && a3 != 14 )
  {
    if ( a3 == 7 || a3 == 22 )
    {
      v10 = *(_QWORD *)(a2 + 48);
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
      *(_QWORD *)(v10 + 2856) = *(_QWORD *)(v10 + 2840);
      *(_QWORD *)(v10 + 2864) = *(_QWORD *)(v10 + 2848);
      *(_BYTE *)(v10 + 2832) = 1;
      *(_QWORD *)(v10 + 2872) = *(_QWORD *)(v11 + 412);
      RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 2880), *(PCUNICODE_STRING *)(v11 + 1968));
    }
    v12 = *(_QWORD *)(a2 + 72);
    if ( v12 )
      ((void (__fastcall *)(__int64, _QWORD))DxgCoreInterface[73])(v12, *(unsigned int *)(a2 + 208));
    if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a2);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent() )
    {
      v13 = *(_QWORD *)(a2 + 48);
      v27 = 0LL;
      v27 = *(_OWORD *)(*(_QWORD *)(v13 + 16) + 144LL);
      if ( (unsigned int)dword_14008A048 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_14008A048, 0x400000000010LL) )
        {
          v19 = a3;
          v21 = &v27;
          v22 = *(_QWORD *)(v15 + 2648);
          v23 = *(_QWORD *)(v15 + 2640);
          v16 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
          v24 = *(_QWORD *)(v16 + 1968);
          v25 = *(_QWORD *)(v16 + 412);
          v20 = 2;
          v26 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v16,
            (unsigned int)&unk_14007E7F9,
            v14,
            (unsigned int)&v26,
            (__int64)&v20,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v19,
            (__int64)&v21);
        }
      }
    }
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1496LL) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a2 + 40) + 1464LL), 0, 0);
  v17 = (_QWORD *)(a2 + 96);
  for ( i = *(_QWORD **)(a2 + 96); i != v17; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext(a1, (struct VIDSCH_HW_CONTEXT *)(i - 33));
}
