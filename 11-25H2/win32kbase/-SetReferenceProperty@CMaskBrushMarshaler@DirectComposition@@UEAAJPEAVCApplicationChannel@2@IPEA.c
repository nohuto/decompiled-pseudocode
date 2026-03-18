/*
 * XREFs of ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140059EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?CheckForCycle@CBrushMarshaler@DirectComposition@@AEAA_NPEAV12@@Z @ 0x140059F9C (-CheckForCycle@CBrushMarshaler@DirectComposition@@AEAA_NPEAV12@@Z.c)
 *     ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x14005A074 (-SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEA.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CMaskBrushMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  __int64 i; // rax
  DirectComposition::CResourceMarshaler *v10; // rsi

  v5 = 0;
  if ( !a3 )
  {
    if ( a4 )
    {
      for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
      {
        if ( (_DWORD)i == 17 )
          goto LABEL_11;
      }
      return (unsigned int)-1073741811;
    }
LABEL_11:
    if ( a4 == this[9] )
      return v5;
    if ( a4 )
    {
      v10 = (DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 112LL))(a4);
      if ( !v10 )
        return (unsigned int)-1073741811;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !DirectComposition::CBrushMarshaler::CheckForCycle((DirectComposition::CBrushMarshaler *)this, v10) )
    {
      if ( v10 )
        DirectComposition::CResourceMarshaler::AddRef(v10);
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[9]);
      this[9] = v10;
      *((_DWORD *)this + 4) |= 0x20u;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 1 )
    return DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(this, a2, this + 10, a4);
  else
    return 3221225485LL;
}
