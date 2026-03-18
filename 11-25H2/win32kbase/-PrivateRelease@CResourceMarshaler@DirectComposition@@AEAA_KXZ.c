/*
 * XREFs of ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1402289AC
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     ?ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ @ 0x140228C24 (-ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ.c)
 *     Feature_29159638__private_IsEnabledDeviceUsageNoInline @ 0x140228F1C (Feature_29159638__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::PrivateRelease(
        DirectComposition::CResourceMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax

  if ( (unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(this, a2, a3) )
  {
    DirectComposition::CResourceMarshaler::ValidateReferenceCountHash(this);
    v5 = *((_QWORD *)this + 3);
    if ( !v5 )
      KeBugCheck(0xC000A003);
    result = v5 - 1;
    *((_QWORD *)this + 3) = result;
    *((_DWORD *)this + 5) = result ^ ~(_DWORD)this;
  }
  else
  {
    result = *((_QWORD *)this + 3) - 1LL;
    *((_QWORD *)this + 3) = result;
  }
  return result;
}
