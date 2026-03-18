/*
 * XREFs of ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400565EC
 * Callers:
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1400A9B44 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400A9E94 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400566F0 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140056D6C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
        DirectComposition::CApplicationChannel *this,
        DirectComposition *a2,
        char *Object,
        struct DirectComposition::CResourceMarshaler **a4)
{
  char *v7; // rbp
  signed int v8; // eax
  struct DirectComposition::CResourceMarshaler *v9; // rdi
  signed int v10; // ebx
  DirectComposition::CVisualMarshaler *v12; // rax
  struct DirectComposition::CResourceMarshaler *v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = 0LL;
  if ( (_DWORD)a2 == 156 )
  {
    v12 = (DirectComposition::CVisualMarshaler *)DirectComposition::Memory::AllocateAndClear_0(0x158uLL, 0x75684344u, 1);
    v9 = v12;
    if ( v12 )
    {
      DirectComposition::CVisualMarshaler::CVisualMarshaler(v12);
      *(_QWORD *)v9 = &DirectComposition::CHostVisualMarshaler::`vftable';
      *((_QWORD *)v9 + 42) = Object + 24;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = v9 == 0LL ? 0xC0000017 : 0;
    v7 = Object + 24;
  }
  else
  {
    v7 = Object + 24;
    v8 = DirectComposition::GeneratedCreateSharedWriteMarshaler(
           (DirectComposition *)(unsigned int)a2,
           (int)Object + 24,
           (const struct DirectComposition::CSharedSystemResource *)&v13,
           a4);
    v9 = v13;
    v10 = v8;
  }
  if ( v10 < 0 )
  {
    *((_DWORD *)v7 + 9) = 0;
    ObfDereferenceObject(Object);
  }
  else
  {
    v10 = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(this, v9);
    if ( v10 >= 0 )
      *a4 = v9;
  }
  return (unsigned int)v10;
}
