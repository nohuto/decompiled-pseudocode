/*
 * XREFs of HUBDSM_SettingExitLatencyAdjustmentOnNoPingResponseError @ 0x140024620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_SettingExitLatencyAdjustmentOnNoPingResponseError(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int16 v3; // cx
  unsigned __int16 v4; // cx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(unsigned __int8 *)(v1 + 2214);
  if ( (_BYTE)v3 )
  {
    v4 = 2 * v3;
    if ( v4 <= 0xA0u )
    {
      *(_BYTE *)(v1 + 2214) = v4;
    }
    else if ( *(_BYTE *)(v1 + 2220) || *(_BYTE *)(v1 + 2221) )
    {
      _InterlockedOr((volatile signed __int32 *)(v1 + 2224), 0x100u);
    }
    else
    {
      return 4065;
    }
  }
  else
  {
    *(_BYTE *)(v1 + 2214) = 10;
  }
  return v2;
}
