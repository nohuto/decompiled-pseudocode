/*
 * XREFs of USBParseGetMIDIStreamingEndpointDescriptor @ 0x140037D78
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x140037AA4 (USBParseGetMIDIStreamingDatarange.c)
 *     USBMidiInPipePrimer @ 0x1400399C8 (USBMidiInPipePrimer.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x14003B40C (USBParseFindDescriptorInConfiguration.c)
 */

unsigned __int8 *__fastcall USBParseGetMIDIStreamingEndpointDescriptor(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *v7; // r10
  __int64 DescriptorInConfiguration; // rax
  unsigned __int8 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // cf
  unsigned __int64 v13; // rax

  v4 = *(unsigned __int8 **)(a2 + 24);
  v7 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 48) + 8LL * a3);
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, &v7[*v7], 37LL);
  v9 = (unsigned __int8 *)DescriptorInConfiguration;
  if ( DescriptorInConfiguration )
  {
    v10 = *(unsigned __int8 *)(DescriptorInConfiguration + 3);
    if ( *v9 >= (unsigned __int64)(v10 + 4)
      && (_BYTE)v10
      && (unsigned __int64)&v9[v10 + 4] <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      v11 = a3 + 1;
      if ( (unsigned int)v11 >= v4[4] )
      {
        v13 = USBParseFindDescriptorInConfiguration(a1, &v4[*v4], 4LL);
        if ( !v13 )
          return v9;
        v12 = (unsigned __int64)v9 < v13;
      }
      else
      {
        v12 = (unsigned __int64)v9 < *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11);
      }
      if ( v12 )
        return v9;
    }
  }
  return 0LL;
}
