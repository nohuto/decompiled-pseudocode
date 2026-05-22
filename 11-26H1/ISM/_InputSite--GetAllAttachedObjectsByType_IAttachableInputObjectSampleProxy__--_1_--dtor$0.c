/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x1801DCC56
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18008A504 (--1-$vector@V-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 */

__int64 __fastcall InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::~vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>(*(__int64 ***)(a2 + 72));
  }
  return result;
}
