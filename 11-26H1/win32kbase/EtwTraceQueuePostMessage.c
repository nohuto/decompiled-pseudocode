/*
 * XREFs of EtwTraceQueuePostMessage @ 0x1400E6690
 * Callers:
 *     EtwTraceQueueMessage @ 0x1400E63B0 (EtwTraceQueueMessage.c)
 * Callees:
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14001E7BC (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400E62F0 (-GetCallbackCount@@YACXZ.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401DBD10 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall EtwTraceQueuePostMessage(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r15d
  char v7; // bp
  __int64 v8; // r14
  bool v9; // zf
  __int64 v10; // rbx
  char CallbackCount; // al
  __int64 v12; // rcx
  __int64 v13; // r8

  result = Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v4) = 0;
  if ( !result )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return result;
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v5 - 581) <= 2 )
    {
      v7 = *(_DWORD *)(a1 + 24);
      v3 = 582LL;
      if ( (_DWORD)v5 == 582 || (_DWORD)v5 == 581 || (_DWORD)v5 == 583 )
      {
        v8 = *(_QWORD *)(a1 + 40);
        if ( (_DWORD)v5 == 582 || (_DWORD)v5 == 581 )
          goto LABEL_29;
        v9 = (_DWORD)v5 == 583;
LABEL_28:
        if ( v9 )
          goto LABEL_29;
        goto LABEL_30;
      }
    }
    else
    {
      v7 = 0;
    }
    LOBYTE(v8) = 0;
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
    return result;
  v5 = *(unsigned int *)(a1 + 24);
  v3 = 582LL;
  v6 = *(_DWORD *)(a1 + 48);
  if ( (_DWORD)v5 == 582
    || (((_DWORD)v5 - 581) & 0xFFFFFFFD) == 0
    || (_DWORD)v5 == 274 && *(_QWORD *)(a1 + 32) == 61808LL )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( (_DWORD)v5 == 582 || (_DWORD)v5 == 581 || (_DWORD)v5 == 583 )
      goto LABEL_14;
  }
  else
  {
    v7 = 0;
  }
  if ( (_DWORD)v5 != 274 || *(_QWORD *)(a1 + 32) != 61808LL )
  {
    LOBYTE(v8) = 0;
    goto LABEL_15;
  }
LABEL_14:
  v8 = *(_QWORD *)(a1 + 40);
LABEL_15:
  if ( (unsigned int)(v5 - 581) <= 2 )
  {
LABEL_29:
    v4 = *(_QWORD *)(a1 + 32);
    goto LABEL_30;
  }
  if ( (_DWORD)v5 == 274 )
  {
    v9 = *(_QWORD *)(a1 + 32) == 61808LL;
    goto LABEL_28;
  }
LABEL_30:
  v10 = *(_QWORD *)(a1 + 16);
  CallbackCount = GetCallbackCount(v5, v3);
  return McTemplateK0cppppqq_EtwWriteTransfer(v12, &QueuePostMessage, v13, CallbackCount, a1, v10, v4, v8, v7, v6);
}
