/*
 * XREFs of ?SetFileID@CFileSysBindData@@UEAAJT_LARGE_INTEGER@@@Z @ 0x18066FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::SetFileID(union _LARGE_INTEGER *this, union _LARGE_INTEGER a2)
{
  this[2] = a2;
  return 0LL;
}
