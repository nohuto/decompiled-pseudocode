/*
 * XREFs of sub_140543050 @ 0x140543050
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 */

__int64 __fastcall sub_140543050(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rdi

  v1 = a1[3];
  v2 = a1[2] ^ v1;
  v3 = (__int64 (__fastcall *)(__int64))(a1[4] ^ v1);
  if ( (*(_DWORD *)(v2 + 2524) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  guard_check_icall_no_overrides(v3);
  return v3(v2);
}
