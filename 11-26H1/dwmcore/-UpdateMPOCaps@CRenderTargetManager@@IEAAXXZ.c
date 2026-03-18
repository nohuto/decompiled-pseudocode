/*
 * XREFs of ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x1801CD4D0
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180031700 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180031B70 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?ResetCheckMPOCache@CDeviceManager@@QEAAXXZ @ 0x1801CD538 (-ResetCheckMPOCache@CDeviceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  CDeviceManager *v4; // rcx

  *((_BYTE *)this + 744) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 120LL))(*v2);
    ++v2;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  CDeviceManager::ResetCheckMPOCache(v4);
  *((_BYTE *)this + 746) = 0;
}
