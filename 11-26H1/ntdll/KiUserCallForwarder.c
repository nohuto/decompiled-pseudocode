/*
 * XREFs of KiUserCallForwarder @ 0x180162D00
 * Callers:
 *     KiUserApcDispatcher @ 0x180162D50 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x180162E70 (KiUserCallbackDispatcher.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x1800FB340 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall KiUserCallForwarder(__int64 a1, _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2)
{
  _RTL_DYNAMIC_HASH_TABLE *v2; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(_QWORD, __int64, __int64, __int64); // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  _guard_check_icall_fptr(v2, a2);
  return v4(v4, v3, v5, v6);
}
