/*
 * XREFs of HalpTimerGetClockConfiguration @ 0x140583850
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetClockRates @ 0x1405838F8 (HalpTimerGetClockRates.c)
 */

__int64 __fastcall HalpTimerGetClockConfiguration(__int64 a1)
{
  ULONG_PTR v1; // r9
  _DWORD *v2; // r8
  char v3; // dl
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = HalpClockTimer;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  v2 = (_DWORD *)(v1 + 224);
  if ( *(_DWORD *)(v1 + 228) == 8 || (v3 = 0, (*v2 & 1) == 0) )
  {
    v3 = 2;
    *(_BYTE *)a1 = 2;
  }
  if ( (*v2 & 1) != 0 )
  {
    v3 |= 4u;
    *(_BYTE *)a1 = v3;
  }
  if ( HalpAlwaysOnTimer )
  {
    v3 |= 1u;
    *(_BYTE *)a1 = v3;
  }
  if ( (*v2 & 0x20) != 0 )
    *(_BYTE *)a1 = v3 | 8;
  v4 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v1 + 228);
  *(_DWORD *)(a1 + 8) = *v2;
  result = HalpTimerGetClockRates(v1, a1 + 16, a1 + 24);
  if ( !HalpTimerMaxIncrement )
  {
    result = *v4;
    HalpTimerMaxIncrement = *v4;
  }
  return result;
}
