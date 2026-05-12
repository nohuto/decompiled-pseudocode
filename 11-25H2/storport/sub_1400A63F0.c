/*
 * XREFs of sub_1400A63F0 @ 0x1400A63F0
 * Callers:
 *     sub_14005DAC0 @ 0x14005DAC0 (sub_14005DAC0.c)
 * Callees:
 *     sub_1400A647C @ 0x1400A647C (sub_1400A647C.c)
 */

__int64 __fastcall sub_1400A63F0(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 588) / *(_DWORD *)(a1 + 968);
  do
  {
    v4 = 320LL * v2;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + v4 + 136),
                             0,
                             0);
    if ( (unsigned int)result > v3 )
      result = sub_1400A647C(v4 + *(_QWORD *)(a1 + 960), v3);
    ++v2;
  }
  while ( v2 < *(_DWORD *)(a1 + 968) );
  return result;
}
