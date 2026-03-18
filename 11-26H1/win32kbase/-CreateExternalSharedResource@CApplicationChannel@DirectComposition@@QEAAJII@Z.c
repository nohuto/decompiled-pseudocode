/*
 * XREFs of ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400A9E94
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400565EC (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400A9FE8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateExternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 result; // rax
  char *v7; // r8
  struct DirectComposition::CResourceMarshaler *v8; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  Object = 0LL;
  if ( a3 != 156 && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(a3) )
    return 3221225485LL;
  result = CreateSharedResourceObject((void *)a3, (struct DirectComposition::ResourceObject **)&Object);
  if ( (int)result >= 0 )
  {
    v7 = (char *)Object;
    _InterlockedCompareExchange((volatile signed __int32 *)Object + 15, 1, 0);
    result = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
               this,
               (DirectComposition *)a3,
               v7,
               &v8);
    if ( (int)result >= 0 )
      return DirectComposition::CApplicationChannel::RegisterExternalResource(this, v8, a2, a3, 1);
  }
  return result;
}
