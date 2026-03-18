/*
 * XREFs of ?ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ @ 0x140161554
 * Callers:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1400ADD34 (-PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CResourceMarshaler::ValidateReferenceCountHash(
        DirectComposition::CResourceMarshaler *this)
{
  if ( *((_DWORD *)this + 5) != (*((_DWORD *)this + 6) ^ ~(_DWORD)this) )
    KeBugCheck(0xC000A003);
}
