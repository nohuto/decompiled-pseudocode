/*
 * XREFs of EtwpUpdateStackTracing @ 0x140AB2624
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x140AB1F2C (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpInitializeClassicStackTracing @ 0x140AB3A68 (EtwpInitializeClassicStackTracing.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(_RTL_BITMAP *a1, __int64 a2, unsigned int a3, char a4)
{
  int v8; // esi
  __int64 i; // rbx
  unsigned int *v10; // rcx
  unsigned int v11; // eax

  v8 = 0;
  if ( a3 )
  {
    if ( a3 > 0x100 )
      return (unsigned int)-1073741811;
    if ( (a1[51].SizeOfBitMap & 0x80u) == 0 )
    {
      v8 = EtwpInitializeClassicStackTracing();
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
    else
    {
      RtlClearAllBits(a1 + 65);
    }
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      v10 = (unsigned int *)(a2 + 4 * i);
      if ( a4 )
        LOWORD(v11) = RtlReadULongFromUser(v10);
      else
        v11 = *v10;
      *((_BYTE *)a1[65].Buffer + (((unsigned __int64)(unsigned __int16)v11 >> 3) & 0x3FF)) |= 1 << (v11 & 7);
    }
  }
  else if ( (a1[51].SizeOfBitMap & 0x80u) != 0 )
  {
    RtlClearAllBits(a1 + 65);
  }
  return (unsigned int)v8;
}
