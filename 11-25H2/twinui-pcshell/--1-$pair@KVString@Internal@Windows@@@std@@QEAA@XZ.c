/*
 * XREFs of ??1?$pair@KVString@Internal@Windows@@@std@@QEAA@XZ @ 0x1801F81C0
 * Callers:
 *     _BroadcastDVRComponent::GetNonServiceProcessListAndIds_::_1_::dtor$2 @ 0x1806A8E26 (_BroadcastDVRComponent--GetNonServiceProcessListAndIds_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::pair<unsigned long,Windows::Internal::String>::~pair<unsigned long,Windows::Internal::String>(
        __int64 a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *(HSTRING *)(a1 + 8);
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
