/*
 * XREFs of _InputSiteManager::GetOrCreateInputSiteFromId_::_1_::dtor$0 @ 0x1801D5F3E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005EC90 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall InputSiteManager::GetOrCreateInputSiteFromId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(*(__int64 **)(a2 + 88));
  }
}
