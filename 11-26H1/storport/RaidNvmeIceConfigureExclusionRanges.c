/*
 * XREFs of RaidNvmeIceConfigureExclusionRanges @ 0x140079E98
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidNvmeIceQuerySupport @ 0x14007A58C (RaidNvmeIceQuerySupport.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidNvmeIceConfigureExclusionRanges(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v7; // rbx
  unsigned __int16 i; // ax
  __int64 v9; // rcx
  __int64 Support; // rax
  int v11; // edi
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, __int64, _QWORD, _QWORD); // rax
  unsigned int v14; // ebx
  const wchar_t *v15; // r9
  int *v17; // [rsp+30h] [rbp-28h] BYREF
  int *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  if ( !a4 || (a4 & 0x1F) != 0 )
    return 3238002694LL;
  v7 = a4 >> 5;
  for ( i = 0; i < (unsigned __int16)v7; ++i )
  {
    v9 = 32LL * i;
    if ( *(_WORD *)(v9 + a3) != 1 || *(_WORD *)(v9 + a3 + 2) != 32 )
      return 3238002694LL;
  }
  Support = RaidNvmeIceQuerySupport(a2);
  v11 = Support;
  if ( !Support )
    return 3238002690LL;
  v12 = *(_QWORD *)(Support + 48);
  if ( !v12 )
    return 3238002690LL;
  v13 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v12 + 152);
  if ( !v13 )
    return 3238002690LL;
  v14 = v13(*(_QWORD *)(v12 + 8), a3, (unsigned __int16)v7, 2 - (unsigned int)(a5 != 0));
  if ( v14 )
  {
    RaidpPortGetAdapter(a1, &v18, &v17);
    v15 = L"NVMe ICE exclusion ranges adding failed.";
    if ( !a5 )
      v15 = L"NVMe ICE exclusion ranges removal failed.";
    StorEtwNVMeICEInterfaceEvent((_DWORD)v18, v11, v14, (_DWORD)v15, 2);
  }
  return v14;
}
