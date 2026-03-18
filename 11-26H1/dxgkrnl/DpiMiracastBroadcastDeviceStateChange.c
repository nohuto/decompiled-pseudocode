/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x14024C2F4
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastTargetDeviceChange @ 0x140088AC0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024C928 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x140089BB8 (McTemplateK0xqq_EtwWriteTransfer.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rsi
  int *v4; // rdi
  _DWORD *Pool2; // rax
  int updated; // ebx
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int *)(a1 + 416);
  v4 = (int *)(a1 + 408);
  DestinationString = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    v10 = *v3;
    v9 = *v4;
    McTemplateK0xqq_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 96), v9, v10);
  }
  if ( !*(_QWORD *)(a1 + 592) )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 532LL, 1953656900LL);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( !Pool2 )
    {
      updated = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 764;
      return (unsigned int)updated;
    }
    *Pool2 = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 524LL) = *v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *v3;
  updated = ZwUpdateWnfStateData(&WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION, *(_QWORD *)(a1 + 592), 532LL);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 815;
  }
  return (unsigned int)updated;
}
