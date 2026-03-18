/*
 * XREFs of HUBDSM_ComparingDeviceOnReEnumeration @ 0x140021190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_ComparingDeviceOnReEnumeration(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  const void *v3; // rcx
  int v4; // edx
  int v5; // r9d

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4089;
  v3 = (const void *)(v1 + 1740);
  if ( (*(_DWORD *)(v1 + 2472) & 4) != 0 )
  {
    if ( RtlCompareMemory(v3, (const void *)(v1 + 2544), 0x12uLL) != 18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 41;
LABEL_8:
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
          v4,
          5,
          v5,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        return 4061;
      }
      return 4061;
    }
  }
  else if ( RtlCompareMemory(v3, (const void *)(v1 + 1996), 0x12uLL) != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 42;
      goto LABEL_8;
    }
    return 4061;
  }
  return v2;
}
