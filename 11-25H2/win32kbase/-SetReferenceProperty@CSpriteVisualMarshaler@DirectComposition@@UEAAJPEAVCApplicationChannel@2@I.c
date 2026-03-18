/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140020AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005A8A0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 */

int __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // ebx
  __int64 i; // rax

  switch ( a3 )
  {
    case 0xBu:
      return -1073741811;
    case 0x34u:
      v8 = 0;
      if ( a4 )
      {
        for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
        {
          if ( (_DWORD)i == 17 )
            goto LABEL_9;
        }
        return -1073741811;
      }
      else
      {
LABEL_9:
        if ( a4 != this[46] )
        {
          if ( a4 )
            DirectComposition::CResourceMarshaler::AddRef(a4);
          DirectComposition::CApplicationChannel::ReleaseResource(a2, this[46]);
          this[46] = a4;
        }
        *((_DWORD *)this + 96) |= 1u;
        *a5 = 1;
      }
      return v8;
    case 0x35u:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(this, a2, this + 47);
    default:
      return DirectComposition::CVisualMarshaler::SetReferenceProperty(
               (DirectComposition::CVisualMarshaler *)this,
               a2,
               a3,
               a4,
               a5);
  }
}
