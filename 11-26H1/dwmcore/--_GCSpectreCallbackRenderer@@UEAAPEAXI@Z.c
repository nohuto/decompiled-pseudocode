/*
 * XREFs of ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x18025A720
 * Callers:
 *     ??_ECSpectreCallbackRenderer@@W7EAAPEAXI@Z @ 0x18025A710 (--_ECSpectreCallbackRenderer@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x18025A6E4 (--1CSpectreCallbackRenderer@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x18028C4A0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 */

CSpectreCallbackRenderer *__fastcall CSpectreCallbackRenderer::`scalar deleting destructor'(
        CSpectreCallbackRenderer *this,
        char a2)
{
  struct CSpectreCallbackRenderer *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CSpectreCallbackRenderer::~CSpectreCallbackRenderer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
