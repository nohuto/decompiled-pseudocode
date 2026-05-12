/*
 * XREFs of RaidNvmeIceEnableNvmeDevice @ 0x140079FBC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledDeviceUsageNoInline @ 0x140078B28 (Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidNvmeIceQuerySupport @ 0x14007A58C (RaidNvmeIceQuerySupport.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidNvmeIceEnableNvmeDevice(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 Support; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  unsigned __int16 v16; // dx
  int v17; // ecx
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  unsigned int v20; // ebp
  int *v21; // rdi
  int *v22; // [rsp+20h] [rbp-28h] BYREF
  int *v23; // [rsp+28h] [rbp-20h] BYREF

  Support = RaidNvmeIceQuerySupport(a2);
  v9 = Support;
  if ( !Support )
    return 3238002690LL;
  v10 = *(_QWORD *)(Support + 48);
  if ( !v10 || !*(_QWORD *)(v10 + 144) )
    return 3238002690LL;
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_WORD *)a3 != 1 )
      return 3238002694LL;
  }
  else if ( *(_WORD *)a3 != 1
         || !*(_WORD *)(a3 + 8)
         || !*(_WORD *)(a3 + 10)
         || !*(_WORD *)(a3 + 12)
         || !*(_WORD *)(a3 + 14) )
  {
    return 3238002694LL;
  }
  v12 = *(unsigned __int16 *)(a3 + 12);
  v13 = *(unsigned __int16 *)(a3 + 8);
  v14 = *(unsigned int *)(a3 + 4);
  v15 = 4 * v13 + 16;
  if ( v14 != v15 + 24 * v12 || v14 > a4 || *(_WORD *)(a3 + 10) != 16 )
    return 3238002694LL;
  v16 = 0;
  if ( (_WORD)v13 )
  {
    do
    {
      v17 = *(unsigned __int16 *)(a3 + 4LL * v16 + 18);
      if ( !(_WORD)v17 || ((v17 - 1) & v17) != 0 )
        return 3238002694LL;
    }
    while ( ++v16 < (unsigned __int16)v13 );
  }
  v18 = *(unsigned __int16 *)(a3 + 14);
  if ( v18 != v15 )
    return 3238002694LL;
  v19 = 0;
  if ( (_WORD)v12 )
  {
    while ( (unsigned int)(*(_DWORD *)(v18 + a3 + 24LL * v19 + 8) - 1) <= 3 )
    {
      if ( ++v19 >= (unsigned __int16)v12 )
        goto LABEL_23;
    }
    return 3238002694LL;
  }
LABEL_23:
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v9 + 48) + 144LL))(
          *(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL),
          a2,
          a3);
  if ( !v20 )
  {
    v22 = 0LL;
    RaidpPortGetAdapter(a1, &v22, &v23);
    v21 = v22;
    if ( v22 )
    {
      if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledDeviceUsageNoInline()
        || *(_WORD *)(a3 + 8)
        || *(_WORD *)(a3 + 12) )
      {
        v21[29] |= 1u;
      }
      else
      {
        v21[29] &= ~1u;
      }
    }
  }
  return v20;
}
