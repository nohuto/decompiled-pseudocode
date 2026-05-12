/*
 * XREFs of RaidNvmeIceIoComplete @ 0x14007A170
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     NVMeIceIceIoRequired @ 0x140070D70 (NVMeIceIceIoRequired.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidNvmeIceIoComplete(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // rax

  v1 = 96LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
    v1 = 48LL;
  v2 = *(_QWORD **)(v1 + a1);
  if ( !NVMeIceIceIoRequired((__int64)v2) )
    return 0;
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = *(_QWORD *)(v2[28] + 3608LL);
    v6 = *(_QWORD *)(v5 + 48);
    v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v6 + 64);
    if ( v7 )
    {
      v8 = v7(*(_QWORD *)(v6 + 8), v2[106]);
      v2[106] = 0LL;
      goto LABEL_11;
    }
    return 0;
  }
  v5 = *(_QWORD *)(v2[27] + 6256LL);
  v9 = *(_QWORD *)(v5 + 40);
  v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v9 + 64);
  if ( !v10 )
    return 0;
  v8 = v10(*(_QWORD *)(v9 + 8), v2[106]);
LABEL_11:
  v3 = v8;
  if ( v8 )
  {
    StorEtwNVMeICEInterfaceEvent(v2[27], v5, v8, (unsigned int)L"NVMe ICE IOComplete failed.", 2);
    KeBugCheckEx(0x176u, 2uLL, 3uLL, (ULONG_PTR)v2, v3);
  }
  return v3;
}
