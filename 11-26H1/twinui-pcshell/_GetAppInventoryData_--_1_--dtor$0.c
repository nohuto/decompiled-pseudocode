/*
 * XREFs of _GetAppInventoryData_::_1_::dtor$0 @ 0x1806F5263
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppInventoryData@@QEAA@XZ @ 0x1805767C4 (--1AppInventoryData@@QEAA@XZ.c)
 */

void __fastcall GetAppInventoryData_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    AppInventoryData::~AppInventoryData(*(AppInventoryData **)(a2 + 80));
  }
}
