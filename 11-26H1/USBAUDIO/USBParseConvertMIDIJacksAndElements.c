/*
 * XREFs of USBParseConvertMIDIJacksAndElements @ 0x14002DAB4
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x140037050 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     USBParseFindDescriptor @ 0x1400377DC (USBParseFindDescriptor.c)
 *     USBParseMIDIElement @ 0x140038340 (USBParseMIDIElement.c)
 *     USBParseMIDIInJack @ 0x1400384E0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x140038610 (USBParseMIDIOutJack.c)
 *     USBParseFindDescriptorInConfiguration @ 0x14003B40C (USBParseFindDescriptorInConfiguration.c)
 */

__int64 __fastcall USBParseConvertMIDIJacksAndElements(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int8 *DescriptorInConfiguration; // rax
  unsigned __int8 *v9; // rsi
  unsigned __int8 *Descriptor; // rbx
  __int64 v13; // [rsp+78h] [rbp+10h]

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v13 = v2;
  v3 = *(_QWORD *)(v2 + 40);
  if ( *(_BYTE *)(v3 + 4) )
  {
    v4 = 0LL;
    v5 = *(unsigned __int8 *)(v3 + 4);
    do
    {
      v6 = *(_QWORD *)(v2 + 16);
      v7 = *(_QWORD *)(v4 + v6);
      if ( *(_BYTE *)(v7 + 6) == 3 )
      {
        DescriptorInConfiguration = (unsigned __int8 *)USBParseFindDescriptorInConfiguration(
                                                         v3,
                                                         *(_QWORD *)(v4 + v6),
                                                         36LL);
        v9 = DescriptorInConfiguration;
        if ( DescriptorInConfiguration )
        {
          Descriptor = (unsigned __int8 *)USBParseFindDescriptor(
                                            v3,
                                            DescriptorInConfiguration,
                                            *(unsigned __int16 *)(DescriptorInConfiguration + 5),
                                            &DescriptorInConfiguration[*DescriptorInConfiguration]);
          if ( Descriptor )
          {
            do
            {
              if ( v1 < 0 )
                break;
              if ( (unsigned __int8)(Descriptor[2] - 2) <= 2u )
              {
                v1 = USBParseMidiUnitMap[Descriptor[2]](a1, v7, Descriptor);
                if ( v1 >= 0 )
                  Descriptor = (unsigned __int8 *)USBParseFindDescriptor(
                                                    v3,
                                                    v9,
                                                    *(unsigned __int16 *)(v9 + 5),
                                                    &Descriptor[*Descriptor]);
              }
            }
            while ( Descriptor );
            v2 = v13;
          }
        }
      }
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  return (unsigned int)v1;
}
