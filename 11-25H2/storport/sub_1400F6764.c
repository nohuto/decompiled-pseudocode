/*
 * XREFs of sub_1400F6764 @ 0x1400F6764
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 */

__int64 __fastcall sub_1400F6764(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // edi
  _DWORD *v4; // rax
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
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int16 v26; // cx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _UNICODE_STRING v31; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+80h] [rbp+30h] BYREF
  int KeyHandle; // [rsp+88h] [rbp+38h] BYREF
  __int64 v35; // [rsp+90h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v2 = 0;
  v33 = 0;
  DestinationString = 0LL;
  v31 = 0LL;
  v4 = (_DWORD *)sub_1400143E0(64LL, 132LL, 1380147538LL, *(_QWORD *)(v1 + 8));
  *(_QWORD *)(a1 + 1048) = v4;
  if ( v4 )
  {
    *v4 = 0;
    v5 = 0LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 1048) + 8LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 1048) + 10LL) = 0;
    do
    {
      *(_BYTE *)(v5 + *(_QWORD *)(a1 + 1048) + 12) = 0;
      ++v5;
    }
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
    RtlInitUnicodeString(&v31, L"DisableBypassIO");
    v8 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v8 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 0x20000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xFFFDFFFF;
    RtlInitUnicodeString(&v31, L"DeepQueueDepthSupport");
    v9 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v9 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 0x8000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xF7FFFFFF;
    RtlInitUnicodeString(&v31, L"IoQueueDepth");
    v10 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v10 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL) = v33;
    RtlInitUnicodeString(&v31, L"IoSubmissionQueueCount");
    v11 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v11 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0
      && v33 <= 0xFFFF )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 1048) + 8LL) = v33;
    }
    RtlInitUnicodeString(&v31, L"IoCompletionQueueCount");
    v12 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v12 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0
      && v33 <= 0xFFFF )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 1048) + 10LL) = v33;
    }
    RtlInitUnicodeString(&v31, L"DisableDeallocate");
    v13 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v13 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xFFFFFFFE;
    RtlInitUnicodeString(&v31, L"IsolateDeallocate");
    v14 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v14 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 0x10000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0xEFFFFFFF;
    RtlInitUnicodeString(&v31, L"IsolateFlush");
    v15 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v15 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 0x20000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0xDFFFFFFF;
    RtlInitUnicodeString(&v31, L"InterruptCoalescingTime");
    v16 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v16 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 12LL) = v33;
    RtlInitUnicodeString(&v31, L"InterruptCoalescingEntry");
    v17 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v17 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 13LL) = v33;
    RtlInitUnicodeString(&v31, L"BypassSgl");
    v18 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v18 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 8 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) & 0xFFFFFFF7;
    *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) |= 0x40000000u;
    RtlInitUnicodeString(&v31, L"NvmeCrashdumpViaSCSI");
    v19 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v19 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 0x40000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0xBFFFFFFF;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 176LL) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL) = 2;
    RtlInitUnicodeString(&v31, L"IdlePowerMode");
    v20 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v20 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL) = v33;
    RtlInitUnicodeString(&v31, L"DfxDisable");
    v21 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v21 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 24LL) = (v33 != 0 ? 0x80000000 : 0) | *(_DWORD *)(*(_QWORD *)(a1 + 1048)
                                                                                           + 24LL) & 0x7FFFFFFF;
    RtlInitUnicodeString(&v31, L"IoQueuePercentageInPollingMode");
    v22 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v22 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
    {
      if ( (unsigned __int8)v33 < 0x64u )
        v7 = v33;
      *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 32LL) = v7;
    }
    RtlInitUnicodeString(&v31, L"IoPollingInterval");
    v23 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v23 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
    {
      v24 = 100000;
      if ( v33 < 0x186A0 )
        v24 = v33;
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 36LL) = v24;
    }
    RtlInitUnicodeString(&v31, L"IoCompletionCapInDPC");
    v25 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v25 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
    {
      v26 = 128;
      if ( (unsigned __int16)v33 < 0x80u )
        v26 = v33;
      *(_WORD *)(*(_QWORD *)(a1 + 1048) + 40LL) = v26;
    }
    RtlInitUnicodeString(&v31, L"IoPollingSize");
    v27 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v27 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
    {
      if ( v33 > 0x4000 )
        v6 = v33;
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 44LL) = v6;
    }
    RtlInitUnicodeString(&v31, L"DiagnosticFlags");
    v28 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v28 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) = v33;
    RtlInitUnicodeString(&v31, L"IoStripeAlignment");
    v29 = *(_QWORD *)(a1 + 128);
    v35 = (__int64)&v33;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(*(_QWORD *)(v29 + 32), (int)&DestinationString, (int)&v31, 4, (__int64)&v35, &KeyHandle) >= 0
      && ((v33 << 10) & 0xFFF) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 20LL) = v33 << 10;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
