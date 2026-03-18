/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x140032890 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMUpdatePrimaryDevice @ 0x1400D94CC (RIMUpdatePrimaryDevice.c)
 *     RIMCmDeactivateContact @ 0x14018576C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x140185984 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1401859D0 (RIMCmResetContactFrameState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E4710 (RIMRemoveFromActiveDevices.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1401F18D0 (RIMResetPointerDevicePrimaryContact.c)
 */

char __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(
        struct RawInputManagerObject *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rbx
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // xmm1_8
  char result; // al
  __int128 v31; // [rsp+28h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-38h]
  __int128 v33; // [rsp+40h] [rbp-30h] BYREF
  __int64 v34; // [rsp+50h] [rbp-20h]
  _BYTE v35[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 456);
  v8 = *(_QWORD *)(v4 + 768);
  if ( a3 && a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 779LL);
  if ( *(_QWORD *)(v4 + 768) )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin((__int64)v35, v4);
  v10 = *(_QWORD *)(active + 16);
  v33 = *(_OWORD *)active;
  v34 = v10;
  while ( 1 )
  {
    v28 = RIMCmActiveContactsEnd((__int64)v35, v4);
    v29 = *(_QWORD *)(v28 + 16);
    v31 = *(_OWORD *)v28;
    v32 = v29;
    result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v33, (__int64)&v31);
    if ( !result )
      break;
    v11 = v34 - 16;
    if ( (*(_DWORD *)(v34 - 16 + 32) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v33);
    if ( a3 && (*(_DWORD *)(v11 + 2364) & 1) != 0 )
    {
      v12 = *(_DWORD *)(v11 + 2444);
      if ( (*(_DWORD *)(v11 + 2684) & 4) != 0 )
      {
        if ( (v12 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v11 + 32) & 4) == 0 && (*(_DWORD *)(v11 + 2444) & 0x40000) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 817LL);
          v14 = -__CFSHR__(*(_DWORD *)(v11 + 32), 3);
          --*((_DWORD *)a1 + 117);
          if ( !v14 )
            --*((_DWORD *)a1 + 118);
        }
      }
      else if ( (v12 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 4) == 0 && (*(_DWORD *)(v11 + 2444) & 0x10000) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 808LL);
        v13 = -__CFSHR__(*(_DWORD *)(v11 + 32), 3);
        ++*((_DWORD *)a1 + 117);
        if ( !v13 )
          ++*((_DWORD *)a1 + 118);
      }
      if ( (*(_DWORD *)(v11 + 32) & 8) != 0 && (*(_DWORD *)(v11 + 2684) & 2) != 0 && (*(_DWORD *)(v11 + 2444) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 1024) != v11 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 825LL);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      v15 = *(_OWORD *)(v11 + 2384);
      *(_OWORD *)(v11 + 2608) = *(_OWORD *)(v11 + 2368);
      v16 = *(_OWORD *)(v11 + 2400);
      *(_OWORD *)(v11 + 2624) = v15;
      v17 = *(_OWORD *)(v11 + 2416);
      *(_OWORD *)(v11 + 2640) = v16;
      v18 = *(_OWORD *)(v11 + 2432);
      *(_OWORD *)(v11 + 2656) = v17;
      v19 = *(_OWORD *)(v11 + 2448);
      *(_OWORD *)(v11 + 2672) = v18;
      v20 = *(_OWORD *)(v11 + 2464);
      *(_OWORD *)(v11 + 2688) = v19;
      v21 = *(_OWORD *)(v11 + 2480);
      *(_OWORD *)(v11 + 2704) = v20;
      *(_OWORD *)(v11 + 2720) = v21;
      v22 = *(_OWORD *)(v11 + 2512);
      *(_OWORD *)(v11 + 2736) = *(_OWORD *)(v11 + 2496);
      v23 = *(_OWORD *)(v11 + 2528);
      *(_OWORD *)(v11 + 2752) = v22;
      v24 = *(_OWORD *)(v11 + 2544);
      *(_OWORD *)(v11 + 2768) = v23;
      v25 = *(_OWORD *)(v11 + 2560);
      *(_OWORD *)(v11 + 2784) = v24;
      v26 = *(_OWORD *)(v11 + 2576);
      *(_OWORD *)(v11 + 2800) = v25;
      v27 = *(_OWORD *)(v11 + 2592);
      *(_OWORD *)(v11 + 2816) = v26;
      *(_OWORD *)(v11 + 2832) = v27;
    }
    if ( a4 || (*(_DWORD *)(v11 + 2364) & 4) == 0 )
    {
      RIMCmResetContactFrameState(v11);
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 1024) != v11 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 841LL);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v11) && (*(_DWORD *)(v11 + 32) & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 847LL);
      RIMCmDeactivateContact(v4, v11);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *((_QWORD *)a1 + 60) && !*(_DWORD *)(v4 + 1020) )
      result = RIMUpdatePrimaryDevice((__int64)a1, 0LL);
    if ( !*(_DWORD *)(v4 + 1016) )
    {
      RIMRemoveFromActiveDevices(a1);
      result = 0;
      *(_OWORD *)(v4 + 840) = 0LL;
      *(_OWORD *)(v4 + 856) = 0LL;
      *(_OWORD *)(v4 + 872) = 0LL;
      *(_QWORD *)(v4 + 888) = 0LL;
    }
  }
  return result;
}
