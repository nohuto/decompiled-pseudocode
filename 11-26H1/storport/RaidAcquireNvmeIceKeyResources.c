/*
 * XREFs of RaidAcquireNvmeIceKeyResources @ 0x140058BB4
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     RaidGetNvmeIceKeyIndex @ 0x1400717A8 (RaidGetNvmeIceKeyIndex.c)
 *     WPP_SF_qLL @ 0x1400720D4 (WPP_SF_qLL.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 *     StorpTelemetryNvmeIceKeySlotFull @ 0x1400BE190 (StorpTelemetryNvmeIceKeySlotFull.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAcquireNvmeIceKeyResources(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r15
  __int64 v6; // rcx
  unsigned int AdapterCryptoEngineExtension; // ebx
  ULONG_PTR v8; // r14
  __int64 v9; // r12
  __int64 v10; // r8
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  volatile LONG *v14; // r13
  unsigned int NvmeIceKeyIndex; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  char v18; // dl
  unsigned int v19; // r13d
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  const wchar_t *v26; // r9
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(_QWORD, int *, __int64, _QWORD); // rax
  __int64 v30; // r8
  const wchar_t *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  const wchar_t *v34; // r9
  __int64 v35; // r12
  __int64 v36; // rbx
  size_t v37; // r8
  const void *v38; // rdx
  _BYTE *v39; // rcx
  __int64 v40; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned int v42; // eax
  __int64 v43; // rbx
  void *v44; // rcx
  __int64 Pool; // rax
  volatile LONG *v46; // rcx
  _WORD *v47; // r13
  unsigned int v48; // eax
  __int64 v49; // rcx
  _BYTE *v50; // rax
  int v51; // edx
  __int64 v52; // rdi
  __int64 v53; // r14
  int v54; // edx
  __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdi
  __int64 v59; // r14
  int v60; // edx
  __int64 v61; // r8
  __int64 v62; // rcx
  int v63; // eax
  int v65; // [rsp+30h] [rbp-49h]
  _BYTE *v66; // [rsp+38h] [rbp-41h] BYREF
  __int64 v67; // [rsp+40h] [rbp-39h]
  int v68; // [rsp+48h] [rbp-31h] BYREF
  __int64 v69; // [rsp+50h] [rbp-29h]
  __int64 *v70; // [rsp+58h] [rbp-21h] BYREF
  __int64 v71; // [rsp+60h] [rbp-19h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-11h]
  __int64 v73; // [rsp+70h] [rbp-9h]
  int v74; // [rsp+80h] [rbp+7h] BYREF
  __int16 v75; // [rsp+84h] [rbp+Bh]
  __int16 v76; // [rsp+86h] [rbp+Dh]
  int v77; // [rsp+88h] [rbp+Fh]
  __int64 v78; // [rsp+8Ch] [rbp+13h]

  v2 = *(_DWORD *)(a1 + 932);
  v4 = *(_QWORD *)(a1 + 24);
  v71 = a1;
  v70 = 0LL;
  v6 = *(_QWORD *)(a2 + 160);
  v68 = 0;
  LODWORD(v69) = v2;
  LODWORD(v66) = 0;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(v6, &v70);
  if ( (AdapterCryptoEngineExtension & 0x80000000) != 0 )
    return 0;
  if ( !v70 )
    return 0;
  v8 = v70[1];
  if ( !v8 )
    return 0;
  if ( !*(_DWORD *)v8 || *(_DWORD *)(v8 + 4) < 0x48u )
    return (unsigned int)-1073741811;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = *(_QWORD *)(v4 + 6256);
    v10 = *(unsigned int *)(v8 + 20);
    v67 = v9;
    v11 = (unsigned int *)(v9 + 56);
    v12 = *(unsigned int *)(v9 + 60);
    if ( (unsigned int)v10 > (unsigned int)v12 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qLL(WPP_GLOBAL_Control->AttachedDevice, v12, v10, v4, v10, *(_DWORD *)(v9 + 60));
      }
      return (unsigned int)-1073741811;
    }
LABEL_19:
    v14 = (volatile LONG *)(v11 + 6);
    SpinLock = (PEX_SPIN_LOCK)(v11 + 6);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v11 + 6);
    NvmeIceKeyIndex = RaidGetNvmeIceKeyIndex(v11, v8 + 24);
    if ( NvmeIceKeyIndex != *v11 )
    {
      v58 = *((_QWORD *)v11 + 2);
      v59 = 9LL * NvmeIceKeyIndex;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        v60 = *(_DWORD *)(v58 + 8 * v59 + 64);
        v61 = *(_QWORD *)(v58 + 8 * v59 + 56);
      }
      else
      {
        v60 = -1;
        v61 = *(_QWORD *)(*(_QWORD *)(v58 + 8 * v59 + 48) + 8LL);
      }
      v62 = *v70;
      v63 = *(_DWORD *)(v58 + 8 * v59);
      *(_DWORD *)(a2 + 808) = 4718593;
      *(_QWORD *)(a2 + 824) = v61;
      *(_DWORD *)(a2 + 880) = v60;
      *(_QWORD *)(a2 + 832) = v62;
      *(_DWORD *)(a2 + 800) = v63;
      _InterlockedAdd((volatile signed __int32 *)(v58 + 8 * v59 + 36), 1u);
      ExReleaseSpinLockSharedFromDpcLevel(v14);
      return AdapterCryptoEngineExtension;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v11 + 6);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v11 + 6);
    v16 = RaidGetNvmeIceKeyIndex(v11, v8 + 24);
    v17 = *v11;
    if ( v16 != *v11 )
    {
      v52 = *((_QWORD *)v11 + 2);
      v53 = 9LL * v16;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        v54 = *(_DWORD *)(v52 + 8 * v53 + 64);
        v55 = *(_QWORD *)(v52 + 8 * v53 + 56);
      }
      else
      {
        v54 = -1;
        v55 = *(_QWORD *)(*(_QWORD *)(v52 + 8 * v53 + 48) + 8LL);
      }
      v56 = *v70;
      v57 = *(_DWORD *)(v52 + 8 * v53);
      *(_DWORD *)(a2 + 808) = 4718593;
      *(_QWORD *)(a2 + 824) = v55;
      *(_DWORD *)(a2 + 880) = v54;
      *(_QWORD *)(a2 + 832) = v56;
      *(_DWORD *)(a2 + 800) = v57;
      _InterlockedAdd((volatile signed __int32 *)(v52 + 8 * v53 + 36), 1u);
      v46 = v14;
      goto LABEL_59;
    }
    v18 = *((_BYTE *)v11 + 8);
    if ( (v18 & 1) == 0 )
    {
      v65 = 0;
      v19 = 0;
      if ( v17 )
      {
        while ( (*(_BYTE *)(*((_QWORD *)v11 + 2) + 72LL * v19 + 68) & 1) != 0 )
        {
          v65 = ++v19;
          if ( v19 >= v17 )
            goto LABEL_25;
        }
LABEL_31:
        if ( v19 == *v11 )
        {
          ++v11[7];
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v11 + 6);
          v22 = v71;
          StorpTelemetryNvmeIceKeySlotFull(v71, v11, (unsigned int)v66);
          v23 = *(_QWORD *)(*(_QWORD *)(a2 + 160) + 184LL);
          v24 = *(_QWORD *)(v23 + 24);
          if ( *(_BYTE *)(v22 + 3368) && (g_QosFlags & 1) == 0
            || (v25 = *(_DWORD *)(v22 + 1928), (unsigned int)v24 >= v25) && v25 )
          {
            AdapterCryptoEngineExtension = -2147483631;
            v26 = L"NVMe ICE Key table is full. Can't program (v2) new capability.";
          }
          else
          {
            *(_QWORD *)(v23 + 24) = v24 + 1;
            *(_BYTE *)(*(_QWORD *)(a2 + 168) + 3LL) = 5;
            RaidUnitProcessBusyRequest(v22, a2, 0LL);
            v26 = L"NVMe ICE Key slot is full. Retry program (v2) new capability.";
            AdapterCryptoEngineExtension = 259;
          }
          StorEtwNVMeICEInterfaceEvent(v4, v9, AdapterCryptoEngineExtension, (_DWORD)v26, 3);
          return AdapterCryptoEngineExtension;
        }
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
        {
          v73 = *(_QWORD *)(v9 + 48);
          v35 = *((_QWORD *)v11 + 2) + 72LL * v19;
          if ( v73 )
          {
            BugCheckParameter4 = *(unsigned int *)(v8 + 8);
            v71 = *(_QWORD *)(v67 + 104);
            if ( (unsigned int)BugCheckParameter4 >= *(unsigned __int16 *)(v71 + 2) )
              KeBugCheckEx(0x176u, 2uLL, 6uLL, v8, BugCheckParameter4);
            v42 = *(_DWORD *)(v8 + 20) + 48;
            v43 = 2 * (BugCheckParameter4 + 1);
            LODWORD(v66) = v42;
            if ( *(_DWORD *)(v35 + 40) < v42 )
            {
              v44 = *(void **)(v35 + 48);
              if ( v44 )
              {
                ExFreePoolWithTag(v44, 0x72436152u);
                v42 = (unsigned int)v66;
                *(_QWORD *)(v35 + 48) = 0LL;
              }
              *(_DWORD *)(v35 + 40) = 0;
              Pool = RaidAllocatePool(64LL, v42, 1917018450LL, *(_QWORD *)(v4 + 8));
              *(_QWORD *)(v35 + 48) = Pool;
              if ( !Pool )
              {
                v46 = SpinLock;
                AdapterCryptoEngineExtension = -1073741670;
LABEL_59:
                ExReleaseSpinLockExclusiveFromDpcLevel(v46);
                return AdapterCryptoEngineExtension;
              }
              v42 = (unsigned int)v66;
              *(_DWORD *)(v35 + 40) = (_DWORD)v66;
            }
            v47 = *(_WORD **)(v35 + 48);
            memset_0(v47, 0, v42);
            *v47 = *(_WORD *)(v71 + 8 * v43);
            v47[1] = *(_DWORD *)(v4 + 408) >> 10;
            *((_DWORD *)v47 + 1) = v69;
            *((_DWORD *)v47 + 2) = 4096;
            *((_QWORD *)v47 + 5) = *(_QWORD *)(v35 + 56);
            if ( *(_DWORD *)v8 < 2u )
            {
              *((_DWORD *)v47 + 3) = 0;
            }
            else
            {
              *((_DWORD *)v47 + 3) = *(_DWORD *)(v8 + 88);
              *(_OWORD *)(v47 + 10) = *(_OWORD *)(v8 + 72);
            }
            v47[8] = *(_WORD *)(v8 + 20);
            memmove(v47 + 24, *(const void **)(v8 + 56), *(unsigned int *)(v8 + 20));
            v48 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _BYTE **))(v73 + 40))(*(_QWORD *)(v73 + 8), v47, &v66);
            v49 = *(unsigned int *)(v8 + 20);
            AdapterCryptoEngineExtension = v48;
            if ( *(_DWORD *)(v8 + 20) )
            {
              v50 = v47 + 24;
              do
              {
                *v50++ = 0;
                --v49;
              }
              while ( v49 );
            }
            if ( AdapterCryptoEngineExtension == -1056964596 )
            {
              LODWORD(v32) = v67;
              v31 = L"NVMe ICE ProgramKeyV2 returned a transient error.";
              goto LABEL_69;
            }
            if ( AdapterCryptoEngineExtension )
            {
              v34 = L"Failed to program (v2) NVMe ICE capability.";
LABEL_73:
              LODWORD(v30) = AdapterCryptoEngineExtension;
LABEL_74:
              LODWORD(v33) = v67;
              goto LABEL_75;
            }
            v30 = *((_QWORD *)v47 + 5);
            v51 = (unsigned __int16)v47[9];
            v19 = v65;
            *(_QWORD *)(v35 + 56) = v30;
            *(_DWORD *)(v35 + 64) = v51;
LABEL_81:
            if ( v30 )
            {
              *(_DWORD *)v35 = v19;
              *(_OWORD *)(v35 + 4) = *(_OWORD *)(v8 + 24);
              *(_OWORD *)(v35 + 20) = *(_OWORD *)(v8 + 40);
              *(_BYTE *)(v35 + 68) |= 1u;
              *(_QWORD *)(a2 + 832) = *v70;
              *(_DWORD *)(a2 + 808) = 4718593;
              *(_QWORD *)(a2 + 824) = v30;
              *(_DWORD *)(a2 + 880) = v51;
              *(_DWORD *)(a2 + 800) = v19;
              _InterlockedAdd((volatile signed __int32 *)(v35 + 36), 1u);
              goto LABEL_70;
            }
            v34 = L"Invalid key handle returned.";
            goto LABEL_74;
          }
          v30 = 0LL;
        }
        else
        {
          v28 = *(_QWORD *)(*(_QWORD *)(v4 + 6256) + 40LL);
          v75 = *(_WORD *)(v8 + 8);
          v77 = v69;
          v76 = *(_DWORD *)(v4 + 408) >> 10;
          v78 = 4096LL;
          v74 = 1310721;
          v29 = *(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD))(v28 + 40);
          v71 = v28;
          LODWORD(v30) = v29(*(_QWORD *)(v28 + 8), &v74, v27, 0LL);
          if ( (_DWORD)v30 == -1056964596 )
          {
            v31 = L"NVMe ICE ConfigureCapability returned a transient error.";
LABEL_42:
            v32 = *(_QWORD *)(v4 + 6256);
LABEL_69:
            StorEtwNVMeICEInterfaceEvent(v4, v32, -1056964596, (_DWORD)v31, 3);
            AdapterCryptoEngineExtension = -2147483631;
LABEL_70:
            v46 = (volatile LONG *)(v11 + 6);
            goto LABEL_59;
          }
          if ( (_DWORD)v30 )
          {
            v33 = *(_QWORD *)(v4 + 6256);
            v34 = L"Failed to configure NVMe ICE capability.";
LABEL_75:
            StorEtwNVMeICEInterfaceEvent(v4, v33, v30, (_DWORD)v34, 2);
            AdapterCryptoEngineExtension = -1073741823;
            goto LABEL_70;
          }
          v35 = *((_QWORD *)v11 + 2) + 72LL * v19;
          v68 = *(_DWORD *)(v8 + 20) + 16;
          v36 = *(_QWORD *)(v35 + 48);
          v69 = v36;
          *(_DWORD *)v36 = 1572865;
          *(_WORD *)(v36 + 4) = *(_WORD *)(v8 + 20);
          *(_WORD *)(v36 + 6) = WORD2(v78);
          v37 = *(unsigned int *)(v8 + 20);
          v38 = *(const void **)(v8 + 56);
          v66 = (_BYTE *)(v36 + 16);
          memmove((void *)(v36 + 16), v38, v37);
          AdapterCryptoEngineExtension = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(v71 + 48))(
                                           *(_QWORD *)(v71 + 8),
                                           v36,
                                           &v68);
          if ( AdapterCryptoEngineExtension == -1056964596 )
          {
            v31 = L"NVMe ICE ProgramKey returned a transient error.";
            goto LABEL_42;
          }
          v40 = *(unsigned int *)(v8 + 20);
          if ( *(_DWORD *)(v8 + 20) )
          {
            v39 = v66;
            do
            {
              *v39++ = 0;
              --v40;
            }
            while ( v40 );
          }
          *(_WORD *)(v69 + 4) = 0;
          KeSweepLocalCaches(v39);
          v30 = *(_QWORD *)(v69 + 8);
        }
        if ( AdapterCryptoEngineExtension )
        {
          v34 = L"Failed to program NVMe ICE key.";
          goto LABEL_73;
        }
        v51 = -1;
        goto LABEL_81;
      }
LABEL_25:
      if ( v19 != v17 )
        goto LABEL_31;
    }
    v65 = 0;
    *((_BYTE *)v11 + 8) = v18 | 1;
    v19 = 0;
    if ( v17 )
    {
      v20 = (int)v66;
      do
      {
        v21 = 9LL * v19;
        if ( !*(_DWORD *)(*((_QWORD *)v11 + 2) + 72LL * v19 + 36) )
          break;
        ++v19;
        v20 += *(_DWORD *)(*((_QWORD *)v11 + 2) + 8 * v21 + 36);
      }
      while ( v19 < *v11 );
      LODWORD(v66) = v20;
      v9 = v67;
      v65 = v19;
    }
    goto LABEL_31;
  }
  v13 = *(_QWORD *)(a2 + 224);
  if ( *(_DWORD *)(v13 + 1048) )
  {
    v9 = *(_QWORD *)(a1 + 3608);
    v67 = v9;
    v11 = (unsigned int *)(v9 + 56);
    goto LABEL_19;
  }
  AdapterCryptoEngineExtension = -1073741436;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_3e90584d844638fb9af1dc8f10a5e4f5_Traceguids, v13);
  }
  return AdapterCryptoEngineExtension;
}
