/*
 * XREFs of ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403D7D20
 * Callers:
 *     DxgkPinFrameBufferForSaveCB @ 0x140034720 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x140034760 (DxgkPinFrameBufferForSave2CB.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EEFC (-SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_O.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EF40 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003F6B0 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140040E10 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1400533B0 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::PinFrameBufferForSave(
        DXGADAPTER *this,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int a4,
        struct _MDL **a5,
        struct _DXGK_ADL **a6)
{
  char v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  struct _MDL *v9; // r14
  struct _DXGK_ADL *v10; // r12
  __int64 v11; // r15
  PMDL Mdl; // rax
  int PhysicalObjectForExistingMdl; // eax
  struct _DXGK_ADL **v15; // rbx
  struct _DXGK_ADL *v16; // rax
  const wchar_t *v17; // r9
  struct SYSMM_ADAPTER_OBJECT *v18; // [rsp+58h] [rbp-70h] BYREF
  struct _DXGK_ADL *v19; // [rsp+60h] [rbp-68h] BYREF
  struct SYSMM_PHYSICAL_OBJECT *v20; // [rsp+68h] [rbp-60h] BYREF
  PVOID VirtualAddress[11]; // [rsp+70h] [rbp-58h] BYREF
  ULONG_PTR Length; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+E8h] [rbp+20h]

  v24 = a4;
  Length = a3;
  v6 = 0;
  if ( a2 >= *((_DWORD *)this + 74) )
  {
    v7 = a2;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11505;
    v17 = L"PinFrameBufferForSave Invalid physical adapter index. Index=%u";
    goto LABEL_28;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11511;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PinFrameBufferForSave CommitSize (%I64u) is not a multiple of PAGE_SIZE",
      Length,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v7 = a2;
  v8 = *((_QWORD *)this + 379) + 352LL * a2;
  VirtualAddress[1] = (PVOID)v8;
  if ( *(_QWORD *)(v8 + 88) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11519;
    v17 = L"Frame buffer save area already pinned for PhysicalAdapterIndex %u. PinFrameBufferForSave cannot be called agai"
           "n without first calling Unpin.";
LABEL_28:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v7, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v20 = 0LL;
  v18 = 0LL;
  VirtualAddress[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v19 = 0LL;
  LODWORD(v11) = MmMapViewInSystemSpace(*(PVOID *)(v8 + 64), VirtualAddress, &Length);
  if ( (int)v11 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11537;
  }
  else
  {
    Mdl = IoAllocateMdl(VirtualAddress[0], Length, 0, 0, 0LL);
    v9 = Mdl;
    VirtualAddress[2] = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v6 = 1;
      PhysicalObjectForExistingMdl = SysMmCreatePhysicalObjectForExistingMdl(
                                       *((struct SYSMM_ADAPTER **)this + 28),
                                       (__int64)v9,
                                       (__int64)this,
                                       8,
                                       (__int64)&v20,
                                       (__int64)&v18);
      v11 = PhysicalObjectForExistingMdl;
      if ( PhysicalObjectForExistingMdl < 0 )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 11580;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to add iommu memory tracker for frame buffer save area, Status=0x%.8x",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        *(_QWORD *)(v8 + 72) = v9;
        if ( a5 )
        {
          *a5 = v9;
LABEL_9:
          *(_QWORD *)(v8 + 88) = v20;
          *(_QWORD *)(v8 + 96) = v18;
          return 0LL;
        }
        v15 = a6;
        if ( !a6 )
          goto LABEL_9;
        LODWORD(v11) = SysMmCreateAdl(v18, 0LL, Length, v24, &v19);
        if ( (int)v11 >= 0 )
        {
          v16 = v19;
          *(_QWORD *)(v8 + 80) = v19;
          *v15 = v16;
          goto LABEL_9;
        }
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 11600;
        v10 = v19;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 11544;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for Mdl.",
        11544LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = -1073741801;
    }
  }
  if ( v10 )
    SysMmFreeAdl(v18, v10);
  if ( v20 )
  {
    SysMmClosePhysicalObject(v18);
    SysMmUnreferencePhysicalObject(v20);
  }
  if ( v6 )
    MmUnlockPages(v9);
  if ( v9 )
    IoFreeMdl(v9);
  if ( VirtualAddress[0] )
    MmUnmapViewInSystemSpace(VirtualAddress[0]);
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  return (unsigned int)v11;
}
