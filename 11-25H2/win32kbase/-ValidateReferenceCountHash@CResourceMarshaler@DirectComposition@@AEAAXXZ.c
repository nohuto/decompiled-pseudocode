/*
 * XREFs of ?ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ @ 0x140228C24
 * Callers:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1402289AC (-PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CResourceMarshaler::ValidateReferenceCountHash(
        DirectComposition::CResourceMarshaler *this)
{
  if ( *((_DWORD *)this + 5) != (*((_DWORD *)this + 6) ^ ~(_DWORD)this) )
    KeBugCheck(0xC000A003);
}
