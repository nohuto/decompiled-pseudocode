/*
 * XREFs of NvmeGetRegistrySettings @ 0x1400FEF44
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline @ 0x1400E3218 (Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline.c)
 *     PortRegistryReadDeviceKey @ 0x1401B5C34 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall NvmeGetRegistrySettings(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // edi
  _DWORD *Pool; // rax
  __int64 v5; // rcx
  int v6; // esi
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int16 v31; // cx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct _UNICODE_STRING v36; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+80h] [rbp+30h] BYREF
  int KeyHandle; // [rsp+88h] [rbp+38h] BYREF
  __int64 v40; // [rsp+90h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v2 = 0;
  v38 = 0;
  DestinationString = 0LL;
  v36 = 0LL;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 132LL, 1380147538LL, *(_QWORD *)(v1 + 8));
  *(_QWORD *)(a1 + 1048) = Pool;
  if ( Pool )
  {
    *Pool = 0;
    v5 = 0LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 1048) + 8LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 1048) + 10LL) = 0;
    do
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + v5++ + 12) = 0;
    while ( v5 < 2 );
    v6 = 0x4000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~2u;
    v7 = 100;
    *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 15LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 16LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~1u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~4u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 28LL) = 1823;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 80LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 20LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 92LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 96LL) = 4;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 52LL) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 56LL) = 50;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 60LL) = 3000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 64LL) = 1000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 68LL) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 72LL) = -1;
    *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 14LL) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 84LL) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) |= 8u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x10u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 36LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 1048) + 40LL) = 100;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 44LL) = 0x4000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 100LL) = -694967296;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 104LL) = 600000000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x40u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x800u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x1000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x80u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x100u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x200u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 108LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 109LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 110LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 120LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 124LL) = 20000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x40000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x80000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x100000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x400000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) |= 0x1000000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x8000000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x10000000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x20000000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) &= ~0x80000000;
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v36, L"DisableBypassIO");
    v8 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v8 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 0x20000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xFFFDFFFF;
    RtlInitUnicodeString(&v36, L"DeepQueueDepthSupport");
    v9 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v9 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 0x8000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xF7FFFFFF;
    RtlInitUnicodeString(&v36, L"IoQueueDepth");
    v10 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v10 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL) = v38;
    RtlInitUnicodeString(&v36, L"IoSubmissionQueueCount");
    v11 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v11 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0
      && v38 <= 0xFFFF )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 1048) + 8LL) = v38;
    }
    RtlInitUnicodeString(&v36, L"IoCompletionQueueCount");
    v12 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v12 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0
      && v38 <= 0xFFFF )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 1048) + 10LL) = v38;
    }
    RtlInitUnicodeString(&v36, L"DisableDeallocate");
    v13 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v13 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xFFFFFFFE;
    RtlInitUnicodeString(&v36, L"IsolateDeallocate");
    v14 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v14 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 0x10000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0xEFFFFFFF;
    RtlInitUnicodeString(&v36, L"IsolateFlush");
    v15 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v15 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 0x20000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0xDFFFFFFF;
    RtlInitUnicodeString(&v36, L"InterruptCoalescingTime");
    v16 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v16 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 12LL) = v38;
    RtlInitUnicodeString(&v36, L"InterruptCoalescingEntry");
    v17 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v17 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 13LL) = v38;
    RtlInitUnicodeString(&v36, L"BypassSgl");
    v18 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v18 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 8 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xFFFFFFF7;
    IsEnabledDeviceUsageNoInline = Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline();
    v20 = *(_QWORD *)(a1 + 1048);
    v21 = IsEnabledDeviceUsageNoInline;
    v22 = *(_DWORD *)(v20 + 24);
    if ( v21 )
      v23 = v22 & 0xBFFFFFFF;
    else
      v23 = v22 | 0x40000000;
    *(_DWORD *)(v20 + 24) = v23;
    RtlInitUnicodeString(&v36, L"NvmeCrashdumpViaSCSI");
    v24 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v24 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 0x40000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0xBFFFFFFF;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 176LL) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL) = 2;
    RtlInitUnicodeString(&v36, L"IdlePowerMode");
    v25 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v25 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL) = v38;
    RtlInitUnicodeString(&v36, L"DfxDisable");
    v26 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v26 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v38 != 0 ? 0x80000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0x7FFFFFFF;
    RtlInitUnicodeString(&v36, L"IoQueuePercentageInPollingMode");
    v27 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v27 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
    {
      if ( (unsigned __int8)v38 < 0x64u )
        v7 = v38;
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 32LL) = v7;
    }
    RtlInitUnicodeString(&v36, L"IoPollingInterval");
    v28 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v28 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
    {
      v29 = 100000;
      if ( v38 < 0x186A0 )
        v29 = v38;
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 36LL) = v29;
    }
    RtlInitUnicodeString(&v36, L"IoCompletionCapInDPC");
    v30 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v30 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
    {
      v31 = 128;
      if ( (unsigned __int16)v38 < 0x80u )
        v31 = v38;
      *(_WORD *)(*(_QWORD *)(a1 + 1048) + 40LL) = v31;
    }
    RtlInitUnicodeString(&v36, L"IoPollingSize");
    v32 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v32 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
    {
      if ( v38 > 0x4000 )
        v6 = v38;
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 44LL) = v6;
    }
    RtlInitUnicodeString(&v36, L"DiagnosticFlags");
    v33 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v33 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) = v38;
    RtlInitUnicodeString(&v36, L"IoStripeAlignment");
    v34 = *(_QWORD *)(a1 + 128);
    v40 = (__int64)&v38;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                *(_QWORD *)(v34 + 32),
                (int)&DestinationString,
                (int)&v36,
                4,
                (__int64)&v40,
                &KeyHandle) >= 0
      && ((v38 << 10) & 0xFFF) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 20LL) = v38 << 10;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
