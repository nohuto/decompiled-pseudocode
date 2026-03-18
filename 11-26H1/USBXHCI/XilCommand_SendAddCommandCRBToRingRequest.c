/*
 * XREFs of XilCommand_SendAddCommandCRBToRingRequest @ 0x14002EA28
 * Callers:
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

__int64 __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r15
  int v10; // r14d
  __int64 Pool2; // rax
  int v12; // edx
  __int64 v13; // rsi
  unsigned int v14; // edi
  char v15; // dl
  int v16; // r9d
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // r9d
  const char *v23; // rcx
  int v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 80);
  v25 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = -1;
  v7 = *(_QWORD *)(v5 + 8);
  if ( v2 + 72 >= v2 )
    v6 = v2 + 72;
  v8 = 0;
  v9 = *(_QWORD *)(v7 + 112);
  if ( v2 + 72 >= v2 )
    v8 = v6;
  v10 = v8;
  Pool2 = ExAllocatePool2(64LL, v8, 1229146200LL);
  v13 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(Pool2 + 32) = 19;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a2 + 24);
    v17 = *(_DWORD *)(a2 + 80);
    if ( v17 )
    {
      memmove((void *)(v13 + 72), *(const void **)(a2 + 72), v17);
      *(_DWORD *)(v13 + 68) = *(_DWORD *)(a2 + 80);
    }
    *(_DWORD *)(v13 + 64) = *(_DWORD *)(a2 + 84);
    v18 = *(_DWORD *)(a2 + 84);
    if ( v18 == 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 616LL);
    }
    else if ( v18 == 2 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1328LL);
    }
    else
    {
      if ( v18 )
      {
        v14 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v7 + 72), v12, 7, 20, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids);
        }
        v22 = 570;
        v23 = "Crb->InputContextType is invalid";
        goto LABEL_29;
      }
      v19 = 0LL;
    }
    *(_QWORD *)(v13 + 56) = v19;
    v20 = SecureChannel_SendRequestSynchronously(v9, (GUID *)v13, v10, (__int64)&v25, 4);
    v14 = v20;
    if ( v20 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v7 + 72),
          v21,
          7,
          21,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v20);
      }
      goto LABEL_30;
    }
    v14 = v25;
    if ( v25 >= 0 )
    {
LABEL_30:
      ExFreePoolWithTag((PVOID)v13, 0x49434858u);
      return v14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 72),
        v21,
        7,
        22,
        (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
        v25);
    }
    v22 = 593;
    v23 = "IOCTL succeeded but CommandAddCommandTRBToRing failed in VTL-1 failed";
LABEL_29:
    Debug_FreAssertMsg((__int64)v23, 0, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c", v22);
    goto LABEL_30;
  }
  v14 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v7 + 72), v12, 7, 19, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        (unsigned int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        v16);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return v14;
}
