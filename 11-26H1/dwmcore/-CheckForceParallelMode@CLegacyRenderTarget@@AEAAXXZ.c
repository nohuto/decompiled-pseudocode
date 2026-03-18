/*
 * XREFs of ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18014ADBC
 * Callers:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1802066B0 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18021AA74 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 */

void __fastcall CLegacyRenderTarget::CheckForceParallelMode(CLegacyRenderTarget *this)
{
  CSyncLockGroup *v2; // rcx
  unsigned __int64 v3; // rdi
  struct CSyncLockGroup *Group; // rax
  __int64 v5; // r8

  v2 = (CSyncLockGroup *)*((_QWORD *)this + 4063);
  if ( v2 && *((_DWORD *)v2 + 2) == -1 )
  {
    v3 = (unsigned __int64)this + 160;
    CSyncLockGroup::RemoveRenderTarget(
      v2,
      (struct IMonitorTarget *)(((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_QWORD *)this + 4063) = 0LL;
  }
  else
  {
    v3 = (unsigned __int64)this + 160;
    if ( v2 )
      return;
  }
  if ( CCommonRegistryData::m_parallelModePolicy == 1 )
  {
    if ( *((_BYTE *)this + 260) )
    {
LABEL_8:
      Group = CSyncLockGroup::GetGroup(0xFFFFFFFF);
      *((_QWORD *)this + 4063) = Group;
      *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   (__int64 *)Group + 2,
                   (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3,
                   v5) = v3 & -(__int64)(this != 0LL);
    }
  }
  else if ( CCommonRegistryData::m_parallelModePolicy == 2 )
  {
    goto LABEL_8;
  }
}
