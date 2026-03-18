/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x140079770 (RIMAbandonPointerDeviceFrame.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 * Callees:
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMCmResetContactFrameState @ 0x140074E00 (RIMCmResetContactFrameState.c)
 *     RIMCmActiveContactsBegin @ 0x140075F1C (RIMCmActiveContactsBegin.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1401741CC (RIMResetPointerDevicePrimaryContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(
        struct RawInputManagerObject *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdi
  __int64 active; // rax
  _QWORD *v10; // r15
  __int64 v11; // xmm1_8
  __int64 result; // rax
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h]
  _BYTE v32[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 456);
  v8 = *(_QWORD *)(v4 + 768);
  if ( a3 && a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 779LL);
  if ( *(_QWORD *)(v4 + 768) )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin(v32, v4);
  v10 = (_QWORD *)(v4 + 1000);
  v11 = *(_QWORD *)(active + 16);
  v30 = *(_OWORD *)active;
  v31 = v11;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v4 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    if ( !*v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*(_DWORD *)(v4 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    result = *(_QWORD *)(v4 + 1000) + 16LL * *(unsigned int *)(v4 + 1008);
    if ( DWORD2(v30) == *(_DWORD *)(v4 + 1008) && v31 == result && (_QWORD *)v30 == v10 )
      break;
    v13 = v31 - 16;
    if ( (*(_DWORD *)(v31 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v30);
    if ( a3 && (*(_DWORD *)(v13 + 2364) & 1) != 0 )
    {
      v14 = *(_DWORD *)(v13 + 2444);
      if ( (*(_DWORD *)(v13 + 2684) & 4) != 0 )
      {
        if ( (v14 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v13 + 32) & 4) == 0 && (v14 & 0x40000) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 817LL);
          v15 = -__CFSHR__(*(_DWORD *)(v13 + 32), 3);
          --*((_DWORD *)a1 + 117);
          if ( !v15 )
            --*((_DWORD *)a1 + 118);
        }
      }
      else if ( (v14 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v13 + 32) & 4) == 0 && (v14 & 0x10000) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 808LL);
        v16 = -__CFSHR__(*(_DWORD *)(v13 + 32), 3);
        ++*((_DWORD *)a1 + 117);
        if ( !v16 )
          ++*((_DWORD *)a1 + 118);
      }
      if ( (*(_DWORD *)(v13 + 32) & 8) != 0 && (*(_DWORD *)(v13 + 2684) & 2) != 0 && (*(_DWORD *)(v13 + 2444) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 1024) != v13 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 825LL);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      v17 = *(_OWORD *)(v13 + 2384);
      *(_OWORD *)(v13 + 2608) = *(_OWORD *)(v13 + 2368);
      v18 = *(_OWORD *)(v13 + 2400);
      *(_OWORD *)(v13 + 2624) = v17;
      v19 = *(_OWORD *)(v13 + 2416);
      *(_OWORD *)(v13 + 2640) = v18;
      v20 = *(_OWORD *)(v13 + 2432);
      *(_OWORD *)(v13 + 2656) = v19;
      v21 = *(_OWORD *)(v13 + 2448);
      *(_OWORD *)(v13 + 2672) = v20;
      v22 = *(_OWORD *)(v13 + 2464);
      *(_OWORD *)(v13 + 2688) = v21;
      v23 = *(_OWORD *)(v13 + 2480);
      *(_OWORD *)(v13 + 2704) = v22;
      *(_OWORD *)(v13 + 2720) = v23;
      v24 = *(_OWORD *)(v13 + 2512);
      *(_OWORD *)(v13 + 2736) = *(_OWORD *)(v13 + 2496);
      v25 = *(_OWORD *)(v13 + 2528);
      *(_OWORD *)(v13 + 2752) = v24;
      v26 = *(_OWORD *)(v13 + 2544);
      *(_OWORD *)(v13 + 2768) = v25;
      v27 = *(_OWORD *)(v13 + 2560);
      *(_OWORD *)(v13 + 2784) = v26;
      v28 = *(_OWORD *)(v13 + 2576);
      *(_OWORD *)(v13 + 2800) = v27;
      v29 = *(_OWORD *)(v13 + 2592);
      *(_OWORD *)(v13 + 2816) = v28;
      *(_OWORD *)(v13 + 2832) = v29;
    }
    if ( !a4 && (*(_DWORD *)(v13 + 2364) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v13 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 1024) != v13 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 841LL);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v13) )
      {
        if ( (*(_DWORD *)(v13 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 847LL);
      }
      RIMCmDeactivateContact(v4, v13);
    }
    else
    {
      RIMCmResetContactFrameState(v13);
    }
  }
  if ( !a4 )
  {
    result = *((_QWORD *)a1 + 60);
    if ( v4 == result && !*(_DWORD *)(v4 + 1020) )
    {
      if ( result )
        *(_DWORD *)(result + 368) &= ~1u;
      *((_QWORD *)a1 + 60) = 0LL;
      *((_DWORD *)a1 + 122) = 0;
    }
    if ( !*(_DWORD *)(v4 + 1016) )
    {
      RIMRemoveFromActiveDevices(a1);
      result = 0LL;
      *(_OWORD *)(v4 + 840) = 0LL;
      *(_OWORD *)(v4 + 856) = 0LL;
      *(_OWORD *)(v4 + 872) = 0LL;
      *(_QWORD *)(v4 + 888) = 0LL;
    }
  }
  return result;
}
