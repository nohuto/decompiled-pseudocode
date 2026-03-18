/*
 * XREFs of ?IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJPEA_N@Z @ 0x140235C4C
 * Callers:
 *     ?SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140235CB0 (-SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEA.c)
 *     ?SetIntegerProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140235D50 (-SetIntegerProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPE.c)
 *     ?SetRemarshalingFlags@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAA_NXZ @ 0x140235D90 (-SetRemarshalingFlags@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAA_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this,
        bool *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rdx

  *a2 = 0;
  v3 = -1073741811;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = 0;
    if ( *((_QWORD *)this + 8) )
    {
      v4 = *((_QWORD *)this + 9);
      if ( !v4 )
        v4 = *((_QWORD *)this + 10);
      if ( v4 )
      {
        v5 = *((_QWORD *)this + 11);
        if ( !v5 )
          v5 = *((_QWORD *)this + 12);
        if ( v5 )
          *a2 = 1;
      }
    }
  }
  return v3;
}
