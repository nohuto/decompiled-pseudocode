/*
 * XREFs of ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1400ADD34
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     ?ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ @ 0x140161554 (-ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ.c)
 */

unsigned __int64 __fastcall DirectComposition::CResourceMarshaler::PrivateRelease(
        DirectComposition::CResourceMarshaler *this)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax

  DirectComposition::CResourceMarshaler::ValidateReferenceCountHash(this);
  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
    KeBugCheck(0xC000A003);
  result = v2 - 1;
  *((_QWORD *)this + 3) = result;
  *((_DWORD *)this + 5) = (unsigned int)this ^ ~(_DWORD)result;
  return result;
}
