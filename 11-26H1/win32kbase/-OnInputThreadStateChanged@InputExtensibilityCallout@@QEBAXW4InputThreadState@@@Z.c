/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1401B80C4
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2, int a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // xmm1_8
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  _BYTE v13[560]; // [rsp+30h] [rbp-258h] BYREF

  if ( !IsInputThread(a1, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 317);
  if ( !a2 )
  {
    memset(v13, 0, 0x228uLL);
    v5 = v13;
    v6 = a1 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(a1 + 8, 0LL);
    if ( !*(_QWORD *)(a1 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 327);
    v7 = (_QWORD *)(a1 + 24);
    v8 = v7 + 115;
    v9 = v7 + 2;
    do
    {
      if ( *v7 )
      {
        if ( (*(_DWORD *)v9 & 2) != 0 )
        {
          v10 = v9[2];
          *(_OWORD *)v5 = *(_OWORD *)v9;
          *((_QWORD *)v5 + 2) = v10;
          v5 += 24;
          if ( (unsigned __int64)((v5 - v13) / 24) > 0x17 )
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 337);
        }
      }
      v7 += 5;
      v9 += 5;
    }
    while ( v7 != v8 );
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( v13 < v5 )
    {
      v11 = &v13[16];
      v12 = (v5 - v13 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v11 - 1))(2LL, *v11);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
}
