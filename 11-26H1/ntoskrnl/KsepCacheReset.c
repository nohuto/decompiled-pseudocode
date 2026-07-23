/*
 * XREFs of KsepCacheReset @ 0x1407C1C8C
 * Callers:
 *     KseResetDeviceCache @ 0x1409D808C (KseResetDeviceCache.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KsepCacheReset(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int i; // edx
  __int64 v8; // rcx
  _QWORD *v9; // rcx

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  while ( v4 != v2 )
  {
    v5 = (__int64)(v4 - 3);
    v4 = (_QWORD *)*v4;
    result = guard_dispatch_icall_no_overrides(v5, a2);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 12); *v9 = v9 )
  {
    v8 = i++;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v8);
    v9[1] = v9;
  }
  v2[1] = v2;
  *v2 = v2;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
