/*
 * XREFs of CmpFreeDriverList @ 0x140CF0DE4
 * Callers:
 *     CmGetSystemDriverList @ 0x140D0A9F0 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpFreeDriverList(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( (__int64 *)*a2 != a2 )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 128);
      v5 = *(__int64 **)v2;
      if ( v4 )
        guard_dispatch_icall_no_overrides(v4, *(unsigned __int16 *)(v2 + 120));
      v6 = *(_QWORD *)(v2 + 40);
      if ( v6 )
        guard_dispatch_icall_no_overrides(v6, *(unsigned __int16 *)(v2 + 34));
      v7 = *(_QWORD *)(v2 + 24);
      if ( v7 )
        guard_dispatch_icall_no_overrides(v7, *(unsigned __int16 *)(v2 + 18));
      result = guard_dispatch_icall_no_overrides(v2, 144LL);
      v2 = (__int64)v5;
    }
    while ( v5 != a2 );
  }
  return result;
}
