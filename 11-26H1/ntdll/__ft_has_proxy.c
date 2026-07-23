/*
 * XREFs of __ft_has_proxy @ 0x180147DB0
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x180147A20 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ft_has_proxy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (a2 & 0x40) == 0 )
    return 0LL;
  *(_QWORD *)a4 = a2;
  result = 1LL;
  *(_DWORD *)(a4 + 4) &= 0xFFFFF4FF;
  *(_DWORD *)(a4 + 4) |= 0x400u;
  return result;
}
