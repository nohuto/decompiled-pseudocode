/*
 * XREFs of ?GetViewInternal@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C8BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180092840 (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayoutItem::GetViewInternal(CAppLayoutItem *this, const struct _GUID *a2, void **a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)((char *)this + 48);
  result = 2147943568LL;
  if ( *v3 )
    return Microsoft::WRL::ComPtr<IInspectable>::CopyTo(v3);
  return result;
}
