/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1400214B0
 * Callers:
 *     PciConfigSpaceHandler @ 0x1400213A0 (PciConfigSpaceHandler.c)
 *     PciConfigInternal @ 0x140042C58 (PciConfigInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     GetPciAddress @ 0x140024C14 (GetPciAddress.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     RtlStringCchPrintfW @ 0x14003E918 (RtlStringCchPrintfW.c)
 *     GetOpRegionScope @ 0x140047E1C (GetOpRegionScope.c)
 *     ACPIWriteEventLogEntry @ 0x1400535C0 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x140065A44 (WPP_RECORDER_SF_ss.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  ULONG BusDataByOffset; // r15d
  unsigned int *v5; // rbx
  __int64 v6; // r14
  int v7; // esi
  KIRQL CurrentIrql; // al
  KIRQL v9; // bp
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v13; // cl
  unsigned int v14; // eax
  __int64 v15; // rcx
  int PciAddress; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  int OpRegionScope; // eax
  void (__fastcall *v20)(_QWORD); // rax
  unsigned int v21; // ecx
  ULONG v22; // r12d
  ULONG v23; // r10d
  __int64 v24; // rax
  ULONG v25; // r13d
  ULONG Length; // r13d
  ULONG v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  const char *v31; // rax
  const char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  ULONG Offset; // [rsp+20h] [rbp-C8h]
  int v37; // [rsp+50h] [rbp-98h]
  int v38; // [rsp+54h] [rbp-94h]
  _QWORD v39[2]; // [rsp+58h] [rbp-90h] BYREF
  int v40; // [rsp+68h] [rbp-80h] BYREF
  char v41; // [rsp+6Ch] [rbp-7Ch]
  int v42; // [rsp+70h] [rbp-78h] BYREF
  char v43; // [rsp+74h] [rbp-74h]
  __int64 v44; // [rsp+78h] [rbp-70h] BYREF
  wchar_t v45; // [rsp+80h] [rbp-68h]
  wchar_t pszDest[16]; // [rsp+88h] [rbp-60h] BYREF

  BusDataByOffset = 0;
  v44 = *(_QWORD *)L"ACPI";
  v5 = a4;
  v45 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)a4 + 20);
  if ( (int)a2 < 0 )
  {
    v7 = 0;
    goto LABEL_11;
  }
  if ( !*((_QWORD *)a4 + 7) )
  {
    v17 = a4[19];
    if ( (v17 & 0x1000) != 0 )
    {
LABEL_64:
      v7 = -1073741772;
      goto LABEL_11;
    }
    v18 = *((_QWORD *)a4 + 1);
    a4[19] = v17 | 0x1000;
    OpRegionScope = GetOpRegionScope(v18, a2, a4, a4 + 14);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v33 = *((_QWORD *)v5 + 1);
    if ( v33 )
    {
      *(_QWORD *)(*(_QWORD *)v33 + 104LL) = *((_QWORD *)v5 + 7);
      AMLIReferenceHandleEx(*((_QWORD *)v5 + 7));
    }
  }
  a2 = *(unsigned __int16 **)(**((_QWORD **)v5 + 7) + 104LL);
  if ( !a2 )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = *((_QWORD *)a2 + 10);
  if ( v6 )
    goto LABEL_5;
  v13 = (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 46, 0, 0) & 1) == 0;
  if ( (v13 & ((_InterlockedCompareExchange((volatile signed __int32 *)a2 + 22, 0, 0) & 2) == 0)) == 0 )
    goto LABEL_22;
  v28 = AMLIGetParent(*((_QWORD *)v5 + 7));
  if ( !v28 )
    goto LABEL_64;
  v29 = *(_QWORD *)(*(_QWORD *)v28 + 104LL);
  AMLIDereferenceHandleEx(v28);
  if ( v29 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v29 + 184), 0, 0) & 1) == 0 )
    {
      v30 = *(_QWORD *)(v29 + 8);
      v31 = byte_140075A82;
      v32 = byte_140075A82;
      if ( (v30 & 0x200000000000LL) != 0 )
      {
        v31 = *(const char **)(v29 + 608);
        if ( (v30 & 0x400000000000LL) != 0 )
          v32 = *(const char **)(v29 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0xAu,
          (__int64)&WPP_0287697259653d931b5061367bd98a44_Traceguids,
          1,
          v29,
          v31,
          v32);
    }
LABEL_22:
    v14 = v5[19];
    if ( (v14 & 0x100) != 0 )
      goto LABEL_5;
    v15 = *((_QWORD *)v5 + 7);
    v5[19] = v14 | 0x100;
    PciAddress = GetPciAddress(
                   v15,
                   (unsigned int)PciConfigSpaceHandlerWorker,
                   (_DWORD)v5,
                   (int)v5 + 88,
                   (__int64)(v5 + 21));
    if ( PciAddress != 259 )
    {
      if ( PciAddress < 0 )
      {
        v7 = 0;
        goto LABEL_11;
      }
LABEL_5:
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      v9 = CurrentIrql;
      if ( *v5 )
      {
        if ( *v5 == 1 )
        {
          v21 = v5[5];
          a2 = (unsigned __int16 *)&unk_140075A9A;
          v22 = v5[4];
          LODWORD(a3) = 0;
          LODWORD(a4) = v22;
          v39[0] = &unk_140075A9A;
          v38 = 0;
          v23 = 0;
          v37 = 0;
          v24 = 0LL;
          do
          {
            v25 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v24);
            if ( v22 < v25 )
            {
              Length = v25 - v22;
              if ( v21 - v22 + (unsigned int)a4 <= Length )
                Length = v21 - v22 + (_DWORD)a4;
              if ( v6 )
              {
                if ( v9 < 2u )
                  v9 = KfRaiseIrql(2u);
                Offset = Length;
                v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v6 + 48))(
                        *(_QWORD *)(v6 + 8),
                        0LL,
                        *((_QWORD *)v5 + 3) + 4 * (v22 - (unsigned __int64)v5[4]),
                        v22);
                if ( v9 < 2u )
                  KeLowerIrql(v9);
              }
              else
              {
                v27 = HalSetBusDataByOffset(
                        PCIConfiguration,
                        v5[22],
                        v5[21],
                        (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v22 - (unsigned __int64)(unsigned int)a4)),
                        v22,
                        Length);
              }
              a2 = (unsigned __int16 *)v39[0];
              v23 = Length + v37;
              LODWORD(a3) = v38;
              BusDataByOffset += v27;
              v37 += Length;
            }
            LODWORD(a4) = v5[4];
            v22 = (unsigned int)a4;
            v21 = v5[5];
            if ( (unsigned int)a4 <= (unsigned int)*a2 + 1 )
              v22 = *a2 + 1;
            if ( v22 >= v21 + (unsigned int)a4 )
              break;
            a3 = (unsigned int)(a3 + 1);
            v38 = a3;
            v24 = 4 * a3;
            a2 = (unsigned __int16 *)((char *)&PciConfigDisallowedRanges + 4 * a3 + 2);
            v39[0] = a2;
          }
          while ( *a2 );
          if ( !v23 )
          {
            RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x");
            v39[0] = &v44;
            v39[1] = pszDest;
            ACPIWriteEventLogEntry(3221553162LL, v39, 2LL);
          }
        }
        else
        {
          v7 = -1073741822;
        }
      }
      else if ( v6 )
      {
        if ( CurrentIrql < 2u )
          v9 = KfRaiseIrql(2u);
        Offset = v5[5];
        BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 56))(
                            *(_QWORD *)(v6 + 8),
                            0LL,
                            *((_QWORD *)v5 + 3),
                            v5[4]);
        if ( v9 < 2u )
          KeLowerIrql(v9);
      }
      else
      {
        BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v5[22], v5[21], *((PVOID *)v5 + 3), v5[4], v5[5]);
      }
      goto LABEL_11;
    }
    return 259LL;
  }
  v7 = -1073741772;
LABEL_11:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v20)(
        *((_QWORD *)v5 + 7),
        (unsigned int)v7,
        0LL,
        *((_QWORD *)v5 + 6));
    else
      v20(*((_QWORD *)v5 + 6));
  }
  if ( v7 < 0 )
  {
    v42 = 0;
    v43 = 0;
    v40 = 0;
    v41 = 0;
    v34 = *((_QWORD *)v5 + 1);
    if ( v34 )
    {
      dword_14008E680 = *(_DWORD *)(*(_QWORD *)v34 + 40LL);
      byte_14008E684 = 0;
      v42 = dword_14008E680;
    }
    v35 = *((_QWORD *)v5 + 7);
    if ( v35 )
    {
      dword_14008E680 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      byte_14008E684 = 0;
      v40 = dword_14008E680;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        a3,
        (_DWORD)a4,
        Offset,
        (__int64)&v42,
        (__int64)&v40);
  }
  v10 = *((_QWORD *)v5 + 1);
  if ( v10 )
  {
    AMLIDereferenceHandleEx(v10);
    *((_QWORD *)v5 + 1) = 0LL;
  }
  v11 = *((_QWORD *)v5 + 7);
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    *((_QWORD *)v5 + 7) = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v7;
}
