/*
 * XREFs of ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x180138914
 * Callers:
 *     ?Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z @ 0x18013887C (-Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::CDrawListEntryBatch(
        CDrawListEntryBatch *this,
        struct CD3DDevice *a2,
        struct CDrawListEntryBatch::CSharedDirect3DResources *a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  CDrawListEntryBatch *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  *((_QWORD *)this + 2) = v5;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 22) = -2;
  *((_QWORD *)this + 15) = v4;
  if ( v4 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((char *)this + 128);
  *((_QWORD *)this + 21) = 0LL;
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
