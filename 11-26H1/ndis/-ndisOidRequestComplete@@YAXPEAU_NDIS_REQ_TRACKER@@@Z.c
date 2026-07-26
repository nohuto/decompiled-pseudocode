/*
 * XREFs of ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140027010 (-ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140027820 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006E7E0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140075990 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x140077950 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400BCE08 (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1400CD0F0 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1400091D0 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDqD @ 0x14000E010 (WPP_RECORDER_SF_qDqD.c)
 *     WPP_RECORDER_SF_qDd @ 0x14000EB10 (WPP_RECORDER_SF_qDd.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisFInvokeOidRequestComplete @ 0x140044450 (ndisFInvokeOidRequestComplete.c)
 *     WPP_RECORDER_SF_Dqqqqd @ 0x140044600 (WPP_RECORDER_SF_Dqqqqd.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14004A820 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisCheckOidBufferIntegrity @ 0x14004BED0 (ndisCheckOidBufferIntegrity.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x140078E00 (--$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x140078F60 (--$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FF70 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008EB80 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008ED10 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisOidRequestComplete(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  __int64 v4; // r14
  _BYTE *v6; // r13
  _BYTE *v7; // r12
  _BYTE *v8; // rsi
  _DWORD *v9; // rbp
  ULONG_PTR v10; // rdx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  ULONG_PTR v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  _DWORD *v18; // rcx
  void (__fastcall *v19)(struct _NDIS_REQ_TRACKER *); // rax
  __int64 v20; // rsi
  KIRQL v21; // al
  int v22; // r15d
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rax
  struct _NDIS_MINIPORT_BLOCK **v26; // rbx
  struct _NDIS_MINIPORT_BLOCK *v27; // rbx
  KIRQL v28; // si
  int v29; // r8d
  int v30; // ecx
  ULONG_PTR v31; // rbx
  KIRQL v32; // si
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rbx
  KIRQL v37; // dl
  int v38; // eax
  KSPIN_LOCK *v39; // rcx
  __int64 v40; // rbx
  unsigned int v41; // esi
  __int64 v42; // rbp
  unsigned int v43; // esi
  __int64 v44; // rbx
  __int64 v45; // r14
  int v46; // ebp
  int v47; // r8d
  struct _GUID *v48; // [rsp+20h] [rbp-78h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  char v50[8]; // [rsp+38h] [rbp-60h]
  char v51[8]; // [rsp+40h] [rbp-58h]
  int v52; // [rsp+A0h] [rbp+8h]
  bool v53; // [rsp+A8h] [rbp+10h]
  int v54; // [rsp+B0h] [rbp+18h]

  v4 = *((_QWORD *)a1 + 4);
  v6 = 0LL;
  v53 = 0;
  v7 = 0LL;
  v8 = *(_BYTE **)(v4 + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_QWORD *)v51 = *((_QWORD *)a1 + 2);
    *(_QWORD *)v50 = *(_QWORD *)a1;
    HIDWORD(v49) = HIDWORD(*((_QWORD *)a1 + 4));
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  }
  if ( ShouldEnableOidTracing(*((const struct _NDIS_OID_REQUEST **)a1 + 4)) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) & 8) != 0 )
      TraceLoggingWriteOidRequestCompletedActivity<2>(a1);
    else
      TraceLoggingWriteOidRequestCompletedActivity<0>(a1);
  }
  *(_DWORD *)(v4 + 88) |= 1u;
  v9 = (_DWORD *)*((_QWORD *)a1 + 4);
  v52 = *(_DWORD *)(v4 + 88) & 0x200000;
  if ( (*(_DWORD *)(v4 + 88) & 0x220) != 0 )
  {
    *((_QWORD *)a1 + 3) = v8;
    v6 = v8;
    v53 = (*(_DWORD *)(v4 + 88) & 0x200) != 0;
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( *v8 == 5 )
    {
      v7 = v8;
      *((_QWORD *)a1 + 1) = v8;
    }
    else
    {
      v53 = 1;
    }
  }
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v10 + 32) > 6u || *(_BYTE *)(v10 + 32) == 6 && *(_BYTE *)(v10 + 33) >= 0x28u)
      && !*((_DWORD *)a1 + 10) )
    {
      v11 = v9[1];
      if ( !v11 || v11 == 2 )
      {
        v12 = v9[12];
        v13 = v9[13];
      }
      else
      {
        if ( v11 != 12 )
          goto LABEL_33;
        v12 = v9[13];
        v13 = v9[15];
      }
      if ( v13 > v12 )
        ndisBugCheckEx(0x1DuLL, v10, (ULONG_PTR)v9, 0LL);
    }
  }
  else
  {
    v14 = *((_QWORD *)a1 + 2);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      if ( *(_BYTE *)(v15 + 100) > 6u || *(_BYTE *)(v15 + 100) == 6 && *(_BYTE *)(v15 + 101) >= 0x28u )
      {
        v16 = *(_QWORD *)(v14 + 32);
        if ( (*(_BYTE *)(v16 + 32) > 6u || *(_BYTE *)(v16 + 32) == 6 && *(_BYTE *)(v16 + 33) >= 0x28u)
          && !*((_DWORD *)a1 + 10) )
        {
          ndisCheckOidBufferIntegrity((ULONG_PTR)v9, v14);
        }
      }
    }
  }
LABEL_33:
  v17 = (_DWORD *)*((_QWORD *)a1 + 4);
  v18 = v17;
  if ( (v17[22] & 0x1240004) == 4 )
  {
    v19 = (void (__fastcall *)(struct _NDIS_REQ_TRACKER *))*((_QWORD *)&unk_1400F4090 + 3 * (unsigned int)v17[23]);
    v18 = (_DWORD *)*((_QWORD *)a1 + 4);
    if ( v19 )
    {
      v19(a1);
      v18 = (_DWORD *)*((_QWORD *)a1 + 4);
      v17 = v18;
    }
  }
  v20 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v18 = v17;
    if ( v17[8] == -50265855 )
    {
      if ( *((_DWORD *)a1 + 10) )
      {
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 3872));
        *(_DWORD *)(v20 + 3880) = *(_DWORD *)(v20 + 3884);
        *(_DWORD *)(v20 + 3884) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 3872), v21);
        v18 = (_DWORD *)*((_QWORD *)a1 + 4);
      }
    }
  }
  v22 = v18[1];
  v23 = *(_DWORD *)(v4 + 88) & 2;
  v24 = *(_DWORD *)(v4 + 88) & 0x100;
  v54 = *(_DWORD *)(v4 + 88) & 0x2000000;
  if ( (*(_DWORD *)(v4 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else if ( (_DWORD)v23 )
  {
    if ( v24 )
    {
      v25 = *((_QWORD *)a1 + 2);
      v26 = (struct _NDIS_MINIPORT_BLOCK **)(v25 + 32);
      if ( !v25 )
        v26 = (struct _NDIS_MINIPORT_BLOCK **)a1;
      v27 = *v26;
      v28 = KeAcquireSpinLockRaiseToDpc(&v27->Lock);
      v27->MiniportThread = KeGetCurrentThread();
      if ( v22 == 1 && (v27->Flags & 0x200000) != 0 )
      {
        v30 = *((_DWORD *)a1 + 10);
        if ( v30 && v30 != -1073676276 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v50 = *((_DWORD *)a1 + 10);
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            v29,
            0x11u,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)v27,
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
            *(_QWORD *)v50);
        }
        ndisMResetCompleteStage2(v27);
      }
      _InterlockedAnd((volatile signed __int32 *)&v27->Flags, 0xFEFFFFFF);
      v27->MiniportThread = 0LL;
      KeReleaseSpinLock(&v27->Lock, v28);
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 4), 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v31 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 96));
    v33 = v52;
    *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
    if ( !v52 )
    {
      *(_DWORD *)(v31 + 4420) &= ~2u;
      v34 = *((unsigned int *)a1 + 11);
      if ( (v34 & 1) == 0 )
      {
        if ( (byte_14011D041 & 0x40) != 0 )
        {
          LODWORD(v49) = 65537;
          LODWORD(v48) = *(_DWORD *)(v31 + 4056);
          McTemplateK0jqxd_EtwWriteTransfer(
            v34,
            (__int64)&ClearingOidRequest,
            v31 + 4008,
            v31 + 4008,
            (__int64)v48,
            *(_QWORD *)(v31 + 4024),
            v49);
        }
        *(_DWORD *)(v31 + 4420) &= ~1u;
        *(_QWORD *)(v31 + 2216) = 0LL;
      }
      v35 = *((_DWORD *)a1 + 11);
      if ( (v35 & 1) == 0 )
      {
        if ( (v35 & 2) != 0 && *(_DWORD **)(v31 + 2208) != v9 )
          ndisBugCheckEx(0x26uLL, v31, (ULONG_PTR)v9, 0LL);
        if ( *(_QWORD *)(v31 + 2208) )
          *(_QWORD *)(v31 + 2208) = 0LL;
      }
    }
    *(_QWORD *)(v31 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 96), v32);
    *(_WORD *)(v31 + 1822) = 0;
  }
  else
  {
    v36 = *((_QWORD *)a1 + 2);
    if ( v36 )
    {
      if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
      {
        v33 = v52;
      }
      else
      {
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 144));
        v33 = v52;
        *(_QWORD *)(v36 + 152) = KeGetCurrentThread();
        if ( v52 )
        {
          --*(_DWORD *)(v36 + 704);
        }
        else
        {
          v38 = *(_DWORD *)(v36 + 56);
          *(_QWORD *)(v36 + 176) = 0LL;
          *(_DWORD *)(v36 + 56) = v38 & 0xFFFFF7FF;
        }
        *(_QWORD *)(v36 + 152) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 144), v37);
      }
      v39 = (KSPIN_LOCK *)(v36 + 312);
      if ( v33 )
        ndisDereferenceRef(v39, 0x10u);
      else
        ndisDereferenceRef(v39, 0xFu);
    }
    else
    {
      v33 = v52;
    }
  }
  if ( v6 && !v54 )
  {
    if ( !v53 )
    {
      v40 = *((_QWORD *)a1 + 4);
      if ( v33 )
      {
        v41 = *((_DWORD *)a1 + 10);
        v42 = *((_QWORD *)v6 + 3);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v51 = *((_DWORD *)a1 + 10);
          WPP_RECORDER_SF_qDqd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v23,
            v24,
            0xCu,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)v6,
            *(_DWORD *)(v40 + 32),
            v40,
            *(_QWORD *)v51);
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v42 + 776))(*((_QWORD *)v6 + 4), v40, v41);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0xDu,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)v6,
            v40);
      }
      else
      {
        if ( ShouldEnableOidTracing(*((const struct _NDIS_OID_REQUEST **)a1 + 4)) )
        {
          if ( *(_QWORD *)(v40 + 96) )
            TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_OPEN_BLOCK>(v6, v40);
          else
            TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_OPEN_BLOCK>(v6, v40);
        }
        (*((void (__fastcall **)(_BYTE *, _QWORD, _QWORD))v6 + 86))(v6, *((_QWORD *)a1 + 4), *((unsigned int *)a1 + 10));
      }
    }
    LOBYTE(v23) = 6;
    ndisMDereferenceOpenUnlocked(v6, v23);
  }
  if ( v7 && !v54 )
  {
    if ( (byte_14011D041 & 0x40) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        *((_QWORD *)a1 + 4),
        (__int64)&CompletingOidRequestFilterEx,
        (__int64)(v7 + 664),
        (__int64)(v7 + 664),
        *((_DWORD *)v7 + 170),
        *(_QWORD *)(*((_QWORD *)v7 + 86) + 1312LL),
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
        *((_DWORD *)a1 + 10));
    v43 = *((_DWORD *)a1 + 10);
    v44 = *((_QWORD *)a1 + 4);
    if ( v33 )
    {
      v45 = *((_QWORD *)v7 + 2);
      v46 = *(_DWORD *)(v44 + 32);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v51 = *((_DWORD *)a1 + 10);
        WPP_RECORDER_SF_qDqD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          v24,
          0xEu,
          (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
          (char)v7,
          v46,
          v44,
          *(_QWORD *)v51);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v45 + 304))(*((_QWORD *)v7 + 3), v44, v43);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v47,
          0xFu,
          (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
          (char)v7,
          v46,
          v44);
    }
    else
    {
      ndisFInvokeOidRequestComplete((char)v7, *((_QWORD *)a1 + 4));
    }
  }
  *((_QWORD *)a1 + 4) = 0LL;
}
