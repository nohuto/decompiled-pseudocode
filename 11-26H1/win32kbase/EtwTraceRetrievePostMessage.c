/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x1401AB3D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x14001E6E4 (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401DBD10 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall EtwTraceRetrievePostMessage(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // di
  int v8; // r15d
  char v9; // si
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  char v15; // r9
  int v16; // edi
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // r9

  result = Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline();
  if ( result )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return result;
    v7 = 18;
    v8 = *(_DWORD *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 24) == 274 )
    {
      v9 = 112;
      if ( *(_QWORD *)(a1 + 32) == 61808LL )
      {
        v10 = *(_QWORD *)(a1 + 40);
        goto LABEL_9;
      }
      v7 = 0;
      LOBYTE(v10) = 0;
    }
    else
    {
      v7 = 0;
      LOBYTE(v10) = 0;
    }
    v9 = 0;
LABEL_9:
    v11 = *(_QWORD *)(a1 + 16);
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v6, v5);
    if ( CurrentThreadWin32Thread && (v13 = *CurrentThreadWin32Thread) != 0 )
      v15 = *(_BYTE *)(v13 + 1456);
    else
      v15 = -1;
    return McTemplateK0cppppqqq_EtwWriteTransfer(v13, &RetrievePostMessage, v14, v15, a1, v11, v9, v10, v7, v8, a2);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 48);
    v17 = *(_QWORD *)(a1 + 16);
    v18 = (__int64 *)PsGetCurrentThreadWin32Thread(v6, v5);
    if ( v18 && (v19 = *v18) != 0 )
      v21 = *(_BYTE *)(v19 + 1456);
    else
      v21 = -1;
    return McTemplateK0cppppqqq_EtwWriteTransfer(v19, &RetrievePostMessage, v20, v21, a1, v17, 0, 0, 0, v16, a2);
  }
  return result;
}
