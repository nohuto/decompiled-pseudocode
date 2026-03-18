/*
 * XREFs of ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1400E3DB8
 * Callers:
 *     DeferSysPeekMsg @ 0x1400E32C0 (DeferSysPeekMsg.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400E4028 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 */

void __fastcall KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2,
        int a3)
{
  int v3; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  __int64 UserSessionState; // rax

  v3 = *((_DWORD *)this + 47);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      *((_DWORD *)this + 2) = 0;
    }
    *((_DWORD *)this + 47) = a2;
    if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 18944) )
    {
      v10 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 18944);
      if ( *(_QWORD *)(v10 + 456) )
      {
        v13 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 18944);
        if ( *((_DWORD *)this + 46) != *(_DWORD *)(*(_QWORD *)(v13 + 456) + 56LL) )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 18944) + 456LL) + 56LL);
          *((_DWORD *)this + 46) = v15;
          UserSessionState = W32GetUserSessionState(v15, v16, v17);
          RtlStringCchCopyW(
            (char *)this + 24,
            16LL,
            (char *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18944) + 456LL) + 976LL));
        }
      }
    }
  }
}
