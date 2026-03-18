/*
 * XREFs of ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400502F8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x14004EBDC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400511B4 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ??0CHostVisualMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140198174 (--0CHostVisualMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
        DirectComposition::CApplicationChannel *this,
        DirectComposition *a2,
        _DWORD *Object,
        struct DirectComposition::CResourceMarshaler **a4)
{
  int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v8; // rdi
  DirectComposition::CHostVisualMarshaler *v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( (_DWORD)a2 != 182 )
  {
    v7 = DirectComposition::GeneratedCreateSharedWriteMarshaler(
           (DirectComposition *)(unsigned int)a2,
           (__int64)(Object + 6),
           (const struct DirectComposition::CSharedSystemResource *)&v11,
           a4);
    if ( v7 >= 0 )
    {
      v8 = v11;
      goto LABEL_4;
    }
LABEL_10:
    Object[15] = 0;
    ObfDereferenceObject(Object);
    return (unsigned int)v7;
  }
  v10 = (DirectComposition::CHostVisualMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                     0x178uLL,
                                                     1986544452LL,
                                                     1);
  if ( !v10
    || (v11 = (struct DirectComposition::CResourceMarshaler *)DirectComposition::CHostVisualMarshaler::CHostVisualMarshaler(
                                                                v10,
                                                                (const struct DirectComposition::CSharedSystemResource *)(Object + 6)),
        (v8 = v11) == 0LL) )
  {
    v7 = -1073741801;
    goto LABEL_10;
  }
LABEL_4:
  v7 = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(this, v8);
  if ( v7 >= 0 )
    *a4 = v8;
  return (unsigned int)v7;
}
