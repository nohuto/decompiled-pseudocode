/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1401AB1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1400E62F0 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqqqqq_EtwWriteTransfer @ 0x14012C028 (McTemplateK0cppppqqqqq_EtwWriteTransfer.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401DBD10 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall EtwTraceBeginSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rbx
  unsigned __int8 ThreadId; // al
  __int64 v7; // rcx
  char v8; // r14
  char v9; // r12
  __int64 v10; // rdx
  int v11; // r13d
  char v12; // bp
  __int64 v13; // r15
  __int64 *v14; // rax
  char CallbackCount; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  char v20; // r14
  __int64 *v21; // rbp
  int v22; // r12d
  __int64 v23; // rdx
  int v24; // r15d
  __int64 v25; // rbp
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // [rsp+C8h] [rbp+20h]

  if ( (W32kEtwEnabledKeyword & 0x400000000400000LL) == 0 )
    return;
  LOBYTE(v4) = 1;
  if ( (unsigned __int8)(byte_1402A9DD8 - 1) <= 2u
    || (qword_1402A9DC0 & 0x400000000400000LL) == 0
    || (qword_1402A9DC8 & 0x400000000400000LL) != qword_1402A9DC8 )
  {
    return;
  }
  LOBYTE(v5) = 0;
  if ( a2 )
  {
    if ( a3 && *(_DWORD *)(a3 + 36) )
      LOBYTE(v4) = 3;
  }
  else
  {
    v4 = a3 != 0 ? 2 : 0;
  }
  if ( (unsigned int)Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 40));
    v7 = *(_QWORD *)(a1 + 40);
    v8 = 18;
    v9 = ThreadId;
    v30 = *(_DWORD *)(a1 + 80);
    v10 = *(_QWORD *)(v7 + 456);
    v11 = *(_DWORD *)(v10 + 56);
    if ( *(_DWORD *)(a1 + 104) == 274 )
    {
      v12 = 112;
      if ( *(_QWORD *)(a1 + 88) == 61808LL )
      {
        v13 = *(_QWORD *)(a1 + 96);
LABEL_18:
        v14 = *(__int64 **)(a1 + 112);
        if ( v14 )
          v5 = *v14;
        CallbackCount = GetCallbackCount(v7, v10);
        McTemplateK0cppppqqqqq_EtwWriteTransfer(v30, v16, v17, CallbackCount, a1, v5, v12, v13, v8, v30, v4, v11, v9);
        return;
      }
      v8 = 0;
      LOBYTE(v13) = 0;
    }
    else
    {
      v8 = 0;
      LOBYTE(v13) = 0;
    }
    v12 = 0;
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v18 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 40));
    v19 = *(_QWORD *)(a1 + 40);
    v20 = v18;
    v21 = *(__int64 **)(a1 + 112);
    v22 = *(_DWORD *)(a1 + 80);
    v23 = *(_QWORD *)(v19 + 456);
    v24 = *(_DWORD *)(v23 + 56);
    if ( v21 )
      v25 = *v21;
    else
      LOBYTE(v25) = 0;
    v26 = GetCallbackCount(v19, v23);
    McTemplateK0cppppqqqqq_EtwWriteTransfer(v28, v27, v29, v26, a1, v25, 0, 0, 0, v22, v4, v24, v20);
  }
}
