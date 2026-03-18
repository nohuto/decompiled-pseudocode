/*
 * XREFs of KiApplyProcessorErrata @ 0x1405F487C
 * Callers:
 *     KiRestoreFeatureBits @ 0x140516590 (KiRestoreFeatureBits.c)
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 */

void __fastcall KiApplyProcessorErrata(_BYTE *a1)
{
  _BYTE *v2; // rdi
  char v3; // al
  unsigned __int8 v4; // al

  v2 = a1 + 141;
  if ( a1[141] == 1 )
  {
    v3 = a1[64];
    if ( v3 > 15 && v3 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
    if ( *v2 == 1 && a1[64] == 23 )
    {
      if ( (v4 = a1[67], v4 >= 0x30u) && v4 <= 0x4Fu || v4 >= 0x60u )
      {
        if ( !HviIsAnyHypervisorPresent() )
        {
          __writemsr(0xC00110E3, __readmsr(0xC00110E3) | 2);
          __writemsr(0xC001102E, __readmsr(0xC001102E) | 0x200000000LL);
        }
      }
    }
  }
}
