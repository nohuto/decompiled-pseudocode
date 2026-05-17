/*
 * XREFs of RtlInitializeSid @ 0x1800CDAB0
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800CE0D8 (WerpAllocateAndInitializeSid.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124AB8 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}
