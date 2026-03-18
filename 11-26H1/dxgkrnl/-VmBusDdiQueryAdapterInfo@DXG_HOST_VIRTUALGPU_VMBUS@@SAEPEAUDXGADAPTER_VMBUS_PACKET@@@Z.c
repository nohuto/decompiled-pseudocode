/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140428650
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x140198F5C (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x140199068 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  const wchar_t *v3; // r9
  char v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned int NumDifferentPhysicalAdapters; // r9d
  unsigned __int64 v8; // r8
  __int64 v9; // r14
  unsigned int v10; // edi
  unsigned int PhysicalAdapterCapsSizeFromDdiVersion; // eax
  unsigned int v12; // r9d
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int DriverCapsSizeFromDdiVersion; // eax
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rax
  _DWORD *v22; // rax
  _BYTE v24[16]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v25[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v26[144]; // [rsp+A8h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v2 = 4615LL;
    v3 = L"The adapter is already closed by the guest";
LABEL_91:
    WdLogGlobalForLineNumber = v2;
    goto LABEL_92;
  }
  v4 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v6);
    v8 = *(unsigned int *)(v5 + 28);
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 39 < v8 )
    {
      WdLogSingleEntry1(2LL);
      v2 = *((unsigned int *)a1 + 36);
      v3 = L"Invalid packet size: 0x%I64x";
      WdLogGlobalForLineNumber = 4625;
LABEL_92:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, v2, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_93;
    }
    v9 = *(unsigned int *)(v5 + 32);
    v10 = *(_DWORD *)(v5 + 32);
    if ( *(_DWORD *)(v5 + 24) == 1 )
    {
      DriverCapsSizeFromDdiVersion = GetDriverCapsSizeFromDdiVersion(*(_DWORD *)(v6 + 2320));
      v10 = DriverCapsSizeFromDdiVersion;
      if ( *(_DWORD *)(v5 + 28) || *(_DWORD *)(v5 + 32) > DriverCapsSizeFromDdiVersion )
      {
        WdLogSingleEntry0(2LL);
        v2 = 4643LL;
        v3 = L"Invalid buffer size for DXGKQAITYPE_DRIVERCAPS";
        goto LABEL_91;
      }
      goto LABEL_54;
    }
    if ( *(_DWORD *)(v5 + 24) != 10 )
    {
      switch ( *(_DWORD *)(v5 + 24) )
      {
        case 0xD:
          if ( (_DWORD)v8 != 4 || (_DWORD)v9 != 24 )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4670LL;
            v3 = L"Invalid buffer size for DXGKQAITYPE_GPUMMUCAPS";
            goto LABEL_91;
          }
          if ( *(_DWORD *)(v5 + 36) < NumDifferentPhysicalAdapters )
            goto LABEL_54;
          WdLogSingleEntry0(2LL);
          v2 = 4675LL;
          break;
        case 0xE:
          if ( (_DWORD)v8 != 4 || (_DWORD)v9 != 20 )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4683LL;
            v3 = L"Invalid buffer size for DXGKQAITYPE_PAGETABLELEVELDESC";
            goto LABEL_91;
          }
          v14 = *(unsigned __int16 *)(v5 + 38);
          if ( (unsigned int)v14 >= NumDifferentPhysicalAdapters
            || (*(_DWORD *)(v6 + 2508) & 0x40) == 0
            || ((v15 = *(_QWORD *)(*(_QWORD *)(v6 + 3168) + 1264LL)) != 0 ? (v16 = v15 + 144 * v14) : (v16 = 0LL),
                (unsigned int)*(unsigned __int16 *)(v5 + 36) >= *(_DWORD *)(v16 + 16)) )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4692LL;
            v3 = L"Invalid parameters DXGKQAITYPE_PAGETABLELEVELDESC";
            goto LABEL_91;
          }
          goto LABEL_54;
        case 0xF:
          PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(*(_DWORD *)(v6 + 2320));
          v10 = PhysicalAdapterCapsSizeFromDdiVersion;
          if ( v13 != 4 || (unsigned int)v9 > PhysicalAdapterCapsSizeFromDdiVersion )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4657LL;
            v3 = L"Invalid buffer size for DXGKQAITYPE_PHYSICALADAPTERCAPS";
            goto LABEL_91;
          }
          if ( *(_DWORD *)(v5 + 36) < v12 )
            goto LABEL_54;
          WdLogSingleEntry0(2LL);
          v2 = 4662LL;
          break;
        case 0x1A:
          if ( (_DWORD)v9 == 28 && (_DWORD)v8 == 4 )
          {
            if ( *(_DWORD *)(v5 + 36) >= NumDifferentPhysicalAdapters )
            {
              WdLogSingleEntry0(2LL);
              v2 = 4737LL;
              v3 = L"Invalid PhysicalAdapterIndex for DXGKQAITYPE_ADAPTERPERFDATA_CAPS";
              goto LABEL_91;
            }
            goto LABEL_54;
          }
          WdLogSingleEntry0(2LL);
          v2 = 4731LL;
LABEL_21:
          v3 = L"Invalid output buffer size for DXGKQAITYPE_HISTORYBUFFERPRECISION";
          goto LABEL_91;
        case 0x1B:
          if ( (_DWORD)v9 != 128 )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4746LL;
            v3 = L"Invalid output buffer size for DXGKQAITYPE_GPUVERSION";
            goto LABEL_91;
          }
LABEL_54:
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v6, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL) < 0 )
          {
LABEL_89:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
            return v4;
          }
          v19 = *(_DWORD *)(v5 + 24);
          memset(&v25[1], 0, 48);
          LODWORD(v25[1]) = v19;
          HIDWORD(v25[5]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) | 1;
          LODWORD(v25[3]) = *(_DWORD *)(v5 + 28);
          v25[2] = v5 + 36;
          if ( v10 )
          {
            if ( v10 > 0x20000 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4769;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid output buffer size: 0x%I64x",
                v10,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_89;
            }
            LODWORD(v25[5]) = v10;
            v25[4] = operator new[](v10, 0x4B677844u, 64LL);
            if ( !v25[4] )
            {
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 4778;
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Failed to allocate pOutputData",
                4778LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_89;
            }
          }
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v6, (struct _DXGKARG_QUERYADAPTERINFO *)&v25[1]) < 0 )
          {
LABEL_87:
            if ( v25[4] )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v25[4]);
            goto LABEL_89;
          }
          v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 392LL);
          if ( *(_DWORD *)(v5 + 24) != 1 )
          {
            if ( *(_DWORD *)(v5 + 24) == 13 )
            {
              if ( v20 <= 0x25 )
                *(_DWORD *)v25[4] &= 0x7FFu;
            }
            else if ( *(_DWORD *)(v5 + 24) == 15 )
            {
              v21 = v25[4];
              *(_QWORD *)(v25[4] + 8LL) = 0LL;
              if ( v20 > 0x10 )
              {
                if ( v20 <= 0x25 )
                  *(_DWORD *)(v21 + 16) &= 0x3Fu;
              }
              else
              {
                *(_DWORD *)(v21 + 16) &= 0x1Fu;
              }
            }
            goto LABEL_86;
          }
          v22 = (_DWORD *)v25[4];
          if ( v20 > 0x25 )
          {
            if ( v20 > 0x28 )
            {
LABEL_86:
              VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v25[4], v9);
              v4 = 1;
              goto LABEL_87;
            }
          }
          else
          {
            *(_DWORD *)(v25[4] + 60LL) &= 0x7Fu;
            v22[16] &= 0x7FFu;
          }
          v22[12] &= 0x3Fu;
          v22[13] &= ~0x80000000;
          if ( v20 > 0x10 )
          {
            if ( v20 > 0x1B )
            {
              if ( v20 <= 0x25 )
              {
                if ( (int)v22[84] > 10240 )
                  v22[84] = 10240;
                v22[17] &= 0x3FFFu;
                v22[144] &= 0x3Fu;
              }
            }
            else
            {
              if ( (int)v22[84] > 9984 )
                v22[84] = 9984;
              v22[17] &= 0x3FFFu;
              v22[144] &= 0x1Fu;
            }
          }
          else
          {
            if ( (int)v22[84] > 9728 )
              v22[84] = 9728;
            v22[17] &= 0x1FFFu;
            v22[144] &= 0xFu;
          }
          goto LABEL_86;
        default:
          WdLogSingleEntry1(2LL);
          v2 = *(int *)(v5 + 24);
          v3 = L"Invalid query type: 0x%I64x";
          WdLogGlobalForLineNumber = 4752;
          goto LABEL_92;
      }
      v3 = L"Invalid physical adapter index";
      goto LABEL_91;
    }
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 4 )
      {
        WdLogSingleEntry0(2LL);
        v2 = 4708LL;
        v3 = L"Invalid input buffer size for DXGKQAITYPE_HISTORYBUFFERPRECISION";
        goto LABEL_91;
      }
      v17 = *(unsigned int *)(v5 + 36);
    }
    else
    {
      v17 = 0LL;
    }
    if ( (unsigned int)v17 >= NumDifferentPhysicalAdapters )
    {
      WdLogSingleEntry0(2LL);
      v2 = 4715LL;
      v3 = L"Invalid PhysicalAdapterIndex for DXGKQAITYPE_HISTORYBUFFERPRECISION";
      goto LABEL_91;
    }
    if ( v9 == 4LL * *(unsigned __int16 *)(352 * v17 + *(_QWORD *)(v6 + 3032)) )
      goto LABEL_54;
    WdLogSingleEntry0(2LL);
    v2 = 4721LL;
    goto LABEL_21;
  }
LABEL_93:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  return 0;
}
