/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140228E80
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0 (DxgkOpenResourceFromNtHandleInternal.c)
 *     DxgkOpenResource @ 0x1403CDAA0 (DxgkOpenResource.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v2; // edi
  void *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rax
  _DWORD *v10; // r13
  char v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // r10
  unsigned int v15; // eax
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  const wchar_t *v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-A9h]
  _QWORD Src[14]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v26[24]; // [rsp+C0h] [rbp-9h] BYREF
  _BYTE v27[72]; // [rsp+D8h] [rbp+Fh] BYREF
  unsigned int v28; // [rsp+130h] [rbp+67h]
  void *v29; // [rsp+138h] [rbp+6Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v27,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1809;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1809LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
    return 0;
  }
  v29 = 0LL;
  v4 = 0LL;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v6 = v5;
  if ( !v5
    || (v7 = *(_DWORD *)(v5 + 36), v7 > 0x8000)
    || (v28 = 4 * v7 + 8, (v8 = (_DWORD *)operator new[](v28, 0x4B677844u, 64LL)) == 0LL) )
  {
    v11 = 0;
    goto LABEL_37;
  }
  v9 = 80LL * *(unsigned int *)(v6 + 36);
  if ( !is_mul_ok(*(unsigned int *)(v6 + 36), 0x50uLL) )
    v9 = -1LL;
  v10 = (_DWORD *)operator new[](v9, 0x4B677844u, 256LL);
  v11 = 1;
  if ( v10 )
  {
    v13 = *(_DWORD *)(v6 + 40);
    if ( !v13 )
      goto LABEL_40;
    if ( v13 > 0x20000 )
    {
      LODWORD(v12) = -1073741811;
      goto LABEL_35;
    }
    v29 = (void *)operator new[](*(unsigned int *)(v6 + 40), 0x4B677844u, 256LL);
    v4 = v29;
    if ( v29 )
    {
LABEL_40:
      if ( *(_BYTE *)(v6 + 28) )
      {
        memset(Src, 0, 0x68uLL);
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)v26,
          *((struct _KTHREAD ***)a1 + 12));
        v14 = *((_QWORD *)a1 + 12);
        v15 = (*(_DWORD *)(v6 + 32) >> 6) & 0xFFFFFF;
        if ( v15 >= *(_DWORD *)(v14 + 296) )
          goto LABEL_21;
        v16 = *(_DWORD *)(*(_QWORD *)(v14 + 280) + 16LL * v15 + 8);
        if ( ((*(_DWORD *)(v6 + 32) >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)(v14 + 280) + 16LL * v15 + 8) & 0x60)
          || (v16 & 0x2000) != 0
          || (v16 & 0x1F) == 0 )
        {
          goto LABEL_21;
        }
        v17 = *(_QWORD *)(v14 + 280);
        if ( (*(_BYTE *)(v17 + 16LL * v15 + 8) & 0x1F) != 0xD )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_21:
          WdLogSingleEntry1(2LL);
          v24 = *(unsigned int *)(v6 + 32);
          WdLogGlobalForLineNumber = 1863;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid shared object handle: 0x%I64x",
            v24,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v12) = -1073741811;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
          goto LABEL_35;
        }
        v18 = *(_QWORD *)(v17 + 16LL * v15);
        if ( !v18 || *(_DWORD *)v18 != 4 || !*(_QWORD *)(v18 + 16) )
          goto LABEL_21;
        Src[1] = *(_QWORD *)(v18 + 16);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
        LODWORD(Src[0]) = *(_DWORD *)(v6 + 24);
        LODWORD(Src[2]) = *(_DWORD *)(v6 + 36);
        LODWORD(Src[8]) = *(_DWORD *)(v6 + 40);
        Src[3] = v10;
        Src[9] = v4;
        v19 = DxgkOpenResourceFromNtHandleInternal(Src);
        v12 = v19;
        if ( v19 >= 0 )
        {
          *v8 = Src[10];
          if ( *(_DWORD *)(v6 + 36) )
          {
            do
            {
              v21 = v2++;
              v8[v21 + 2] = v10[20 * v21];
            }
            while ( v2 < *(_DWORD *)(v6 + 36) );
          }
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL);
        v20 = L"DxgkOpenResourceFromNtHandle failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1882;
      }
      else
      {
        memset(Src, 0, 0x48uLL);
        LODWORD(Src[0]) = *(_DWORD *)(v6 + 24);
        HIDWORD(Src[0]) = *(_DWORD *)(v6 + 32);
        LODWORD(Src[1]) = *(_DWORD *)(v6 + 36);
        LODWORD(Src[8]) = *(_DWORD *)(v6 + 40);
        Src[2] = v10;
        Src[7] = v4;
        v22 = DxgkOpenResource(Src);
        v12 = v22;
        if ( v22 >= 0 )
        {
          *v8 = HIDWORD(Src[8]);
          if ( *(_DWORD *)(v6 + 36) )
          {
            do
            {
              v23 = v2++;
              v8[v23 + 2] = v10[20 * v23];
            }
            while ( v2 < *(_DWORD *)(v6 + 36) );
          }
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL);
        v20 = L"DxgkOpenResource failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1908;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v12, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_35;
    }
  }
  LODWORD(v12) = -1073741801;
LABEL_35:
  v8[1] = v12;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v8, v28);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  return v11;
}
