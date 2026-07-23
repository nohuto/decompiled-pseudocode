/*
 * XREFs of PsSetJobProperty @ 0x140617E90
 * Callers:
 *     <none>
 * Callees:
 *     PspSetPropertyHelper @ 0x1404593E8 (PspSetPropertyHelper.c)
 */

__int64 __fastcall PsSetJobProperty(__int64 a1, __int64 a2, __int64 a3)
{
  if ( KeGetCurrentIrql() >= 2u
    || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == PsJobType )
  {
    return PspSetPropertyHelper(a1 + 1512, a2, a3);
  }
  else
  {
    return 3221225485LL;
  }
}
