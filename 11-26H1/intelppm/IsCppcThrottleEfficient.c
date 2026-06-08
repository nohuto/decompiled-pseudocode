/*
 * XREFs of IsCppcThrottleEfficient @ 0x14002ADE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsCppcThrottleEfficient(__int64 a1)
{
  bool result; // al
  __int64 v2; // rdx

  result = 0;
  if ( *(_BYTE *)(a1 + 128) == 127 )
  {
    v2 = *(_QWORD *)(a1 + 132);
    if ( (v2 == 1908 || v2 == 1906) && *(_BYTE *)(a1 + 129) == 8 )
      return *(_BYTE *)(a1 + 130) == 16;
  }
  return result;
}
