/*
 * XREFs of PspDeleteSiloContext @ 0x140B336A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspDeleteSiloContext(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 result; // rax

  v1 = (_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 48 + 26) & 0x40) != 0 )
  {
    v1 = (_QWORD *)((char *)v1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 0x7F]);
    v2 = *v1 + 40LL;
  }
  else
  {
    v2 = 8LL;
  }
  result = *(_QWORD *)v2;
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, (__int64)v1);
  return result;
}
