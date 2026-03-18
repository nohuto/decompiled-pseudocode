/*
 * XREFs of ACPIInitStartDevice @ 0x1400420EC
 * Callers:
 *     ACPIEcStartDevice @ 0x14005FEB0 (ACPIEcStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1400ADD90 (ACPIBusIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1400AE5E4 (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1400B1510 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1400B6140 (ACPIProcessorContainerStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1400CFC00 (ACPIFilterIrpStartDevice.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033F50 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x140042918 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140042A28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r13d
  __int64 DeviceExtension; // rax
  __int64 *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
  _DWORD *v12; // r13
  _DWORD *v13; // rsi
  const char *v14; // rdi
  unsigned int v15; // edx
  __int64 i; // rcx
  size_t v17; // r15
  void *Pool2; // rax
  void *v19; // r14
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rax
  const char *v25; // rdx
  const char *v26; // rcx
  __int64 *v27; // rax
  int v28; // esi
  __int64 v29; // rcx
  const char *v30; // rax
  size_t v31; // rsi
  void *v32; // rax
  void *v33; // r14
  __int64 v34; // rcx
  const char *v35; // rax
  char v36; // si
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rcx
  const char *v40; // rax
  __int64 v41; // rcx
  const char *v42; // rax
  KIRQL v43; // al
  void *v44; // rcx
  KIRQL v45; // di
  void *v46; // rcx
  __int64 v47; // rax
  const char *v48; // rcx
  __int64 v49; // rcx
  const char *v50; // rax
  unsigned int v52; // ebx
  void *v53; // [rsp+50h] [rbp-30h]
  __int128 v54; // [rsp+58h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+78h] [rbp-8h]
  __int64 *v57; // [rsp+C8h] [rbp+48h]
  size_t v58; // [rsp+C8h] [rbp+48h]

  v54 = 0LL;
  Src = 0LL;
  v5 = a4;
  *(_OWORD *)Size = 0LL;
  v6 = (int)a3;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  v57 = *(__int64 **)(DeviceExtension + 760);
  if ( a2 )
  {
    v12 = *(_DWORD **)(a2 + 8);
    v13 = *(_DWORD **)(a2 + 16);
    v53 = v12;
    if ( v12 && *v12 == 1 )
    {
      v14 = byte_140075A82;
      if ( v13 && *v13 == 1 && _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x20u) )
      {
        v15 = v13[4];
        for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
        {
          if ( LOBYTE(v13[5 * i + 5]) == 2 && (v13[5 * i + 5] & 0x200000) != 0 )
          {
            v17 = 20 * (v15 + 1);
            Pool2 = (void *)ExAllocatePool2(256LL, v17, 1399874369LL);
            v19 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, v13, v17);
              v23 = *(void **)(v11 + 680);
              if ( v23 )
                ExFreePoolWithTag(v23, 0);
              *(_QWORD *)(v11 + 680) = v19;
            }
            else
            {
              v20 = *(_QWORD *)(v11 + 8);
              v21 = byte_140075A82;
              v22 = byte_140075A82;
              if ( (v20 & 0x200000000000LL) != 0 )
              {
                v21 = *(const char **)(v11 + 608);
                if ( (v20 & 0x400000000000LL) != 0 )
                  v22 = *(const char **)(v11 + 616);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Lqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x15u,
                  (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
                  v17,
                  v11,
                  v21,
                  v22);
            }
            goto LABEL_27;
          }
        }
        v24 = *(_QWORD *)(DeviceExtension + 8);
        v25 = byte_140075A82;
        v26 = byte_140075A82;
        if ( (v24 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(v11 + 608);
          if ( (v24 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x11u,
            0x14u,
            (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
            v11,
            v25,
            v26);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 1008), 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 1008), 0xFFFFFFFFFFEFFFFFuLL);
      }
LABEL_27:
      v9 = AMLIGetNamedChild(v57, 1397900127);
      v27 = AMLIGetNamedChild(v57, 1397904223);
      v10 = (__int64)v27;
      if ( v9 && v27 )
      {
        v28 = AMLIEvalNameSpaceObject(v9, (__int64)&v54, 0, 0LL);
        if ( v28 < 0 )
        {
          v29 = *(_QWORD *)(v11 + 8);
          v30 = byte_140075A82;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(v11 + 608);
            if ( (v29 & 0x400000000000LL) != 0 )
              v30 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x17u,
              (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
              v28,
              v11,
              v14,
              v30);
          goto LABEL_81;
        }
        if ( WORD1(v54) != 3 || !LODWORD(Size[1]) || !Src )
        {
          v47 = *(_QWORD *)(v11 + 8);
          v48 = byte_140075A82;
          if ( (v47 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(v11 + 608);
            if ( (v47 & 0x400000000000LL) != 0 )
              v48 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x18u,
              (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
              SBYTE2(v54),
              v11,
              v14,
              v48);
          dword_14008ED38 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v54, 1u);
          v28 = -1073741823;
          goto LABEL_81;
        }
        v31 = (unsigned int)(20 * (v12[4] + 1));
        v58 = v31;
        v32 = (void *)ExAllocatePool2(256LL, v31, 1399874369LL);
        v33 = v32;
        if ( !v32 )
        {
          v34 = *(_QWORD *)(v11 + 8);
          v35 = byte_140075A82;
          if ( (v34 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(v11 + 608);
            if ( (v34 & 0x400000000000LL) != 0 )
              v35 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x19u,
              (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
              v31,
              v11,
              v14,
              v35);
          dword_14008ED38 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v54, 1u);
LABEL_45:
          v28 = -1073741670;
LABEL_81:
          a3(v11, a4, (unsigned int)v28);
          if ( v9 )
            AMLIDereferenceHandleEx((__int64)v9);
          if ( v10 )
            AMLIDereferenceHandleEx(v10);
          return (unsigned int)v28;
        }
        memmove(v32, v12, v31);
        v36 = LOBYTE(Size[1]) + 40;
        v37 = ExAllocatePool2(64LL, (unsigned int)(LODWORD(Size[1]) + 40), 1332765505LL);
        v38 = v37;
        if ( !v37 )
        {
          v39 = *(_QWORD *)(v11 + 8);
          v40 = byte_140075A82;
          if ( (v39 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(v11 + 608);
            if ( (v39 & 0x400000000000LL) != 0 )
              v40 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Au,
              (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
              v36,
              v11,
              v14,
              v40);
          dword_14008ED38 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v54, 1u);
          ExFreePoolWithTag(v33, 0);
          goto LABEL_45;
        }
        *(_OWORD *)v37 = v54;
        *(_OWORD *)(v37 + 16) = *(_OWORD *)Size;
        *(_QWORD *)(v37 + 32) = v37 + 40;
        memmove((void *)(v37 + 40), Src, LODWORD(Size[1]));
        dword_14008ED38 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v54, 1u);
        v28 = PnpCmResourcesToBiosResources(v11, v33, *(_QWORD *)(v38 + 32), *(unsigned int *)(v38 + 24));
        if ( v28 < 0 )
        {
          v41 = *(_QWORD *)(v11 + 8);
          v42 = byte_140075A82;
          if ( (v41 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(v11 + 608);
            if ( (v41 & 0x400000000000LL) != 0 )
              v42 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Bu,
              (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
              v28,
              v11,
              v14,
              v42);
          ExFreePoolWithTag(v33, 0);
          ExFreePoolWithTag((PVOID)v38, 0);
          goto LABEL_81;
        }
        memmove(v33, v53, v58);
        v43 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v44 = *(void **)(v11 + 688);
        v45 = v43;
        if ( v44 )
          ExFreePoolWithTag(v44, 0);
        *(_QWORD *)(v11 + 688) = v38;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v45);
        v46 = *(void **)(v11 + 672);
        if ( v46 )
          ExFreePoolWithTag(v46, 0);
        *(_QWORD *)(v11 + 672) = v33;
      }
      else
      {
        v49 = *(_QWORD *)(v11 + 8);
        v50 = byte_140075A82;
        if ( (v49 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v11 + 608);
          if ( (v49 & 0x400000000000LL) != 0 )
            v50 = *(const char **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x16u,
            (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
            v11,
            v14,
            v50);
      }
      v5 = a4;
    }
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (*(_DWORD *)(v11 + 1008) & 0xC0000LL) == 0xC0000 && *(_DWORD *)(v11 + 384) == 1 )
  {
    v28 = 0;
    goto LABEL_81;
  }
  v52 = ACPIDeviceInternalDeviceRequest(v11, 1, v6, v5, 4);
  if ( v52 == -1073741802 )
    v52 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx((__int64)v9);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return v52;
}
