/*
 * XREFs of AcpiParseULong64 @ 0x140030D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x140010440 (memmove.c)
 */

__int64 __fastcall AcpiParseULong64(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v4; // edx

  v4 = 8;
  if ( a3 < 8 )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) <= 8u )
  {
    *a2 = 0LL;
    memmove(a2, (const void *)(a1 + 4), *(unsigned __int16 *)(a1 + 2));
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        1,
        78,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    }
    return 3222536200LL;
  }
}
