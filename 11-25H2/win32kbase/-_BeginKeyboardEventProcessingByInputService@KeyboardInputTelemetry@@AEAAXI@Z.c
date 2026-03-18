/*
 * XREFs of ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1400C27E4
 * Callers:
 *     DeferSysPeekMsg @ 0x1400C2360 (DeferSysPeekMsg.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C1FCC (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 */

void __fastcall KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        __int64 a2)
{
  int v2; // eax
  int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 UserSessionState; // rax

  v2 = *((_DWORD *)this + 47);
  v3 = a2;
  if ( v2 != (_DWORD)a2 )
  {
    if ( v2 )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this, a2);
      *((_DWORD *)this + 2) = 0;
    }
    *((_DWORD *)this + 47) = v3;
    if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 18904) )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18904);
      if ( *(_QWORD *)(v8 + 464) )
      {
        v10 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18904) + 464LL) + 56LL);
        if ( *((_DWORD *)this + 46) != (_DWORD)v10 )
        {
          v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18904) + 464LL) + 56LL);
          *((_DWORD *)this + 46) = v11;
          UserSessionState = W32GetUserSessionState(v11, v12);
          RtlStringCchCopyW(
            (char *)this + 24,
            16LL,
            (char *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18904) + 464LL) + 976LL));
        }
      }
    }
  }
}
