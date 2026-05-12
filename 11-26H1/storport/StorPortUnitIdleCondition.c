/*
 * XREFs of StorPortUnitIdleCondition @ 0x1400300F0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x140030564 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005877C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // r8d
  _DWORD *v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r15
  _DWORD *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  _DWORD *v19; // rbp
  __int64 v20; // rcx
  void (__fastcall *v21)(__int64, __int64, _DWORD *, __int64); // rax
  __int64 v22; // rcx
  _DWORD *v23; // r10
  __int64 v24; // rcx
  _DWORD *v25; // r9
  unsigned int v26; // r10d
  KIRQL v27; // al
  __int64 v28; // rcx
  KIRQL v29; // bp
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int16 v34; // cx
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  __int64 v37; // rcx
  _DWORD *v38; // r10
  __int64 v39; // rcx
  _DWORD *v40; // r10
  __int64 v41; // rcx
  _DWORD *v42; // r10
  __int64 v43; // rcx
  _DWORD *v44; // r10
  __int64 v45; // rcx
  _DWORD *v46; // r9
  __int64 v47; // rcx
  _DWORD *v48; // r9
  __int64 v49; // rcx
  _DWORD *v50; // r9
  __int64 v51; // rcx
  _DWORD *v52; // r9
  __int64 v53; // [rsp+20h] [rbp-C8h]
  __int64 v54; // [rsp+28h] [rbp-C0h]
  __int64 v55; // [rsp+30h] [rbp-B8h]
  _DWORD v56[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v57; // [rsp+58h] [rbp-90h]
  int v58; // [rsp+60h] [rbp-88h]
  char v59; // [rsp+64h] [rbp-84h]
  __int16 v60; // [rsp+65h] [rbp-83h]
  char v61; // [rsp+67h] [rbp-81h]
  _DWORD v62[3]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v63; // [rsp+74h] [rbp-74h]
  __int128 v64; // [rsp+84h] [rbp-64h]
  __int64 v65; // [rsp+94h] [rbp-54h]
  int v66; // [rsp+9Ch] [rbp-4Ch]

  if ( (*(_DWORD *)(a1 + 504) & 0x8000) == 0
    || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
  {
    return;
  }
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      (unsigned int)&EventUnitIdleConditionStart,
      v4,
      **(_QWORD **)(a1 + 1872),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a2);
  v5 = 256LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) &= ~2u;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0x100) != 0 )
  {
    RaidUnitAdaptiveIdleTimeout(a1);
    *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 64LL) = MEMORY[0xFFFFF78000000014];
  }
  if ( !*(_BYTE *)(a1 + 759) )
  {
    *(_BYTE *)(a1 + 759) = 1;
    v6 = *(_QWORD *)(a1 + 808);
    if ( (v6 & 3) == 0 )
    {
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v6 | 2, v6);
      }
      while ( v7 != v6 && (v6 & 3) == 0 );
    }
    v63 = 0LL;
    v65 = 0LL;
    v64 = 0LL;
    v66 = 0;
    if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
    {
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
      v28 = *(_QWORD *)(a1 + 32);
      v29 = v27;
      *(_DWORD *)(v28 + 80) |= 0x40u;
      v62[0] = 56;
      v62[1] = 56;
      v62[2] = 2;
      if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(
                           v28,
                           v30,
                           v31,
                           v32,
                           v53,
                           v54,
                           v55) )
      {
        v33 = *(_QWORD *)(a1 + 24);
        WORD6(v64) = 1;
        LODWORD(v65) = 4;
        v34 = *(_WORD *)(v33 + 56);
        WORD2(v65) = *(_WORD *)(a1 + 104);
        BYTE6(v65) = *(_BYTE *)(a1 + 106);
        HIWORD(v64) = v34;
      }
      v35 = *(_DWORD **)(a1 + 24);
      if ( *v35 == 1094997074 )
      {
        v36 = v35 + 94;
      }
      else if ( *v35 == 1314275652 )
      {
        v36 = v35 + 42;
      }
      else
      {
        v36 = 0LL;
      }
      RaCallMiniportUnitControl(v36, 31LL, v62);
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v29);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0 )
  {
    v9 = *(_DWORD **)(a1 + 24);
    v10 = 272LL;
    v11 = 280LL;
    v12 = 264LL;
    if ( *v9 == 1094997074 )
    {
      v13 = v9 + 94;
      v14 = (__int64)(v9 + 158);
      v15 = (__int64)(v9 + 160);
      v16 = (__int64)(v9 + 162);
      v17 = (__int64)(v9 + 164);
    }
    else if ( *v9 == 1314275652 )
    {
      v13 = v9 + 42;
      v14 = (__int64)(v9 + 106);
      v15 = (__int64)(v9 + 108);
      v16 = (__int64)(v9 + 110);
      v17 = (__int64)(v9 + 112);
    }
    else
    {
      v13 = 0LL;
      v14 = 256LL;
      v15 = 264LL;
      v16 = 272LL;
      v17 = 280LL;
    }
    if ( **((_DWORD **)v13 + 29) == 208 )
    {
      if ( (v13[62] & 0x10) == 0 )
      {
        *(_QWORD *)v14 = 0LL;
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)v16 = 0LL;
        *(_QWORD *)v17 = 0LL;
        v13[63] = 12;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v13, 0LL) )
          *v23 = 13;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v22, 1LL) )
          *v38 = 14;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v37, 4LL) )
          *v40 = 15;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v39, 11LL) )
          v13[72] = 16;
        if ( (*(_DWORD *)(*((_QWORD *)v13 + 29) + 184LL) & 0x20000) != 0 )
          *v42 = 17;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v41, 14LL) )
          *v44 = 32;
        if ( (int)RaCallMiniportUnitControl(v43, 0LL, v44) < 0 )
          goto LABEL_14;
        v13[62] |= 0x10u;
      }
      if ( *((_BYTE *)v13 + 262) )
      {
        v18 = *(_DWORD **)(a1 + 24);
        if ( *v18 == 1094997074 )
        {
          v19 = v18 + 94;
          v5 = (__int64)(v18 + 158);
          v12 = (__int64)(v18 + 160);
          v10 = (__int64)(v18 + 162);
          v11 = (__int64)(v18 + 164);
        }
        else if ( *v18 == 1314275652 )
        {
          v19 = v18 + 42;
          v5 = (__int64)(v18 + 106);
          v12 = (__int64)(v18 + 108);
          v10 = (__int64)(v18 + 110);
          v11 = (__int64)(v18 + 112);
        }
        else
        {
          v19 = 0LL;
        }
        if ( **((_DWORD **)v19 + 29) == 208 )
        {
          if ( (v19[62] & 0x10) == 0 )
          {
            *(_QWORD *)v5 = 0LL;
            *(_QWORD *)v12 = 0LL;
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)v11 = 0LL;
            v19[63] = 12;
            if ( (unsigned __int8)RaMiniportIsFeatureSupported(v19, 0LL) )
              *v25 = 13;
            if ( (unsigned __int8)RaMiniportIsFeatureSupported(v24, v26) )
              *v46 = 14;
            if ( (unsigned __int8)RaMiniportIsFeatureSupported(v45, 4LL) )
              *v48 = 15;
            if ( (unsigned __int8)RaMiniportIsFeatureSupported(v47, 11LL) )
              v19[72] = 16;
            if ( (*(_DWORD *)(*((_QWORD *)v19 + 29) + 184LL) & 0x20000) != 0 )
              *v50 = 17;
            if ( (unsigned __int8)RaMiniportIsFeatureSupported(v49, 14LL) )
              *v52 = 32;
            if ( (int)RaCallMiniportUnitControl(v51, 0LL, v52) < 0 )
              goto LABEL_14;
            v19[62] |= 0x10u;
          }
          if ( *((_BYTE *)v19 + 262) )
          {
            v20 = *(_QWORD *)(a1 + 24);
            v60 = 0;
            v61 = 0;
            v56[0] = 1;
            v56[1] = 24;
            v57 = a1 + 96;
            v58 = 0;
            v59 = 0;
            v21 = *(void (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)(v20 + 608) + 200LL);
            if ( v21 )
            {
              v21(*(_QWORD *)(v20 + 616) + 16LL, 6LL, v56, v17);
              Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
            }
          }
        }
      }
    }
  }
LABEL_14:
  PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1872), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0pquuuq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStop,
        v8,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a2);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
}
