/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14037353C
 * Callers:
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1401935A8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401BA2BC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1403731B8 (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x140045D5C (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x14022DF4C (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E7C4C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  struct DXGALLOCATION *v2; // rdi
  struct DXGALLOCATION *v4; // rbp
  struct DXGALLOCATION *v5; // rsi
  struct DXGALLOCATION *v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    v6 = a2;
    v4 = a2;
    v5 = a2;
    do
    {
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, v2, 0LL);
      if ( (*((_DWORD *)v4 + 18) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 272LL))(*((_QWORD *)v4 + 10));
        *((_DWORD *)v4 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1917) & 1) != 0 && (*((_BYTE *)v2 + 128) & 4) != 0 )
      {
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4712LL),
          *(_DWORD *)(*((_QWORD *)this + 5) + 488LL),
          *((_DWORD *)this + 118),
          0,
          1u,
          &v6,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
          0LL);
        *((_BYTE *)v2 + 128) &= ~4u;
      }
      DXGALLOCATION::`scalar deleting destructor'(v4);
      v6 = v5;
      v2 = v5;
      v4 = v5;
    }
    while ( v5 );
  }
}
