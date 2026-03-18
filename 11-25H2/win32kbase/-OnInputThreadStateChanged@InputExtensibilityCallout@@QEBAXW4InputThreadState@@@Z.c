/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020EA60
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x14014FA4C (UserDeactivateMITInputProcessing.c)
 *     UserActivateMITInputProcessing @ 0x14018D99C (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rbx
  _BYTE *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // xmm1_8
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbx
  _BYTE v11[528]; // [rsp+30h] [rbp-238h] BYREF

  v2 = a2;
  if ( !IsInputThread(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 317);
  if ( !v2 )
  {
    memset(v11, 0, sizeof(v11));
    v4 = a1 + 8;
    v5 = v11;
    W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(a1 + 8), 0);
    if ( !*(_QWORD *)(a1 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 327);
    v6 = a1 + 24;
    v7 = a1 + 904;
    while ( v6 != v7 )
    {
      if ( *(_QWORD *)v6 )
      {
        if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
        {
          v8 = *(_QWORD *)(v6 + 32);
          *(_OWORD *)v5 = *(_OWORD *)(v6 + 16);
          *((_QWORD *)v5 + 2) = v8;
          v5 += 24;
          if ( (unsigned __int64)((v5 - v11) / 24) > 0x16 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 337);
        }
      }
      v6 += 40LL;
    }
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v11 < v5 )
    {
      v9 = &v11[16];
      v10 = (v5 - v11 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v9 - 1))(2LL, *v9);
        v9 += 3;
        --v10;
      }
      while ( v10 );
    }
  }
}
