/*
 * XREFs of ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140056510
 * Callers:
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x140056340 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400566F0 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056D40 (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEA.c)
 *     ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140056DA0 (--0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedReadResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        const struct DirectComposition::ResourceObject *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rbx
  __int64 result; // rax
  DirectComposition::CVisualTargetMarshaler *v12; // rax

  if ( a2 != 156 )
  {
    v8 = DirectComposition::Memory::AllocateAndClear_0(0x40uLL, 0x30734344u, 1);
    if ( !v8 )
    {
LABEL_14:
      ObfDereferenceObject(a3);
      return 3221225495LL;
    }
    v9 = DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>(
           v8,
           (char *)a3 + 24,
           a2);
    goto LABEL_4;
  }
  v12 = (DirectComposition::CVisualTargetMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                       0x48uLL,
                                                       0x74764344u,
                                                       1);
  if ( v12 )
  {
    v9 = DirectComposition::CVisualTargetMarshaler::CVisualTargetMarshaler(
           v12,
           (const struct DirectComposition::ResourceObject *)((char *)a3 + 24));
LABEL_4:
    v10 = (struct DirectComposition::CResourceMarshaler *)v9;
    goto LABEL_5;
  }
  v10 = 0LL;
LABEL_5:
  if ( !v10 )
  {
    if ( a2 == 156 )
      *((_DWORD *)a3 + 14) = 2;
    goto LABEL_14;
  }
  result = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(this, v10);
  if ( (int)result >= 0 )
    *a4 = v10;
  return result;
}
