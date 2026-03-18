/*
 * XREFs of EtwTraceBeginRetrieveSendMessage @ 0x1401AB0D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14001E7BC (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400E62F0 (-GetCallbackCount@@YACXZ.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401DBD10 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall EtwTraceBeginRetrieveSendMessage(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // r15d
  char v7; // si
  char v8; // bp
  __int64 v9; // r14
  __int64 *v10; // rax
  char CallbackCount; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rsi
  int v16; // ebp
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8

  result = Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v5) = 0;
  if ( result )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return result;
    v6 = *(_DWORD *)(a1 + 80);
    v7 = 18;
    if ( *(_DWORD *)(a1 + 104) == 274 )
    {
      v8 = 112;
      if ( *(_QWORD *)(a1 + 88) == 61808LL )
      {
        v9 = *(_QWORD *)(a1 + 96);
LABEL_9:
        v10 = *(__int64 **)(a1 + 112);
        if ( v10 )
          v5 = *v10;
        CallbackCount = GetCallbackCount(v4, v3);
        return McTemplateK0cppppqq_EtwWriteTransfer(
                 v12,
                 &BeginRetrieveSendMessage,
                 v13,
                 CallbackCount,
                 a1,
                 v5,
                 v8,
                 v9,
                 v7,
                 v6);
      }
      v7 = 0;
      LOBYTE(v9) = 0;
    }
    else
    {
      v7 = 0;
      LOBYTE(v9) = 0;
    }
    v8 = 0;
    goto LABEL_9;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v14 = *(__int64 **)(a1 + 112);
    LOBYTE(v15) = 0;
    v16 = *(_DWORD *)(a1 + 80);
    if ( v14 )
      v15 = *v14;
    v17 = GetCallbackCount(v4, v3);
    return McTemplateK0cppppqq_EtwWriteTransfer(v18, &BeginRetrieveSendMessage, v19, v17, a1, v15, 0, 0, 0, v16);
  }
  return result;
}
