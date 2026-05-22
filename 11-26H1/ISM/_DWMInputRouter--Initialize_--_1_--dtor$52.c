/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$52 @ 0x1801D74AE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005EC90 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall DWMInputRouter::Initialize_::_1_::dtor_52(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 280) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 280) &= ~1u;
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>((__int64 *)(a2 + 288));
  }
}
