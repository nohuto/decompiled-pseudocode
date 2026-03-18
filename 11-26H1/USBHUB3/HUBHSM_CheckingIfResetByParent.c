/*
 * XREFs of HUBHSM_CheckingIfResetByParent @ 0x140008AE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x1400079C8 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 */

__int64 __fastcall HUBHSM_CheckingIfResetByParent(__int64 a1)
{
  return HUBPARENT_QueryParentIfDeviceWasReset(*(_QWORD *)(a1 + 960));
}
