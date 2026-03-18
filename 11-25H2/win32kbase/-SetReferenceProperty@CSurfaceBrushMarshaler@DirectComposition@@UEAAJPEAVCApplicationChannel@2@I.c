/*
 * XREFs of ?SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140021580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetReferenceProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int *v9; // r10
  unsigned int v10; // r9d
  __int64 i; // rax
  __int64 m; // rax
  __int64 j; // rax
  __int64 k; // rax

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 7 )
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(this, a2, (char *)this + 80);
    return 3221225485LL;
  }
  v9 = dword_140274520;
  v10 = 192;
  if ( a4 )
  {
    for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
    {
      if ( (_DWORD)i == 41 )
        goto LABEL_8;
    }
    for ( j = *((unsigned int *)a4 + 9); (unsigned int)j < 0xC0; LODWORD(j) = dword_140274520[j] )
    {
      if ( (_DWORD)j == 188 )
        goto LABEL_8;
    }
    for ( k = *((unsigned int *)a4 + 9); (unsigned int)k < 0xC0; LODWORD(k) = dword_140274520[k] )
    {
      if ( (_DWORD)k == 117 )
        goto LABEL_8;
    }
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 70LL) )
      goto LABEL_8;
    return 3221225485LL;
  }
  *((_WORD *)this + 69) = 0;
  *(_OWORD *)((char *)this + 88) = 0LL;
LABEL_8:
  if ( a4 )
  {
    for ( m = *((unsigned int *)a4 + 9); (unsigned int)m < v10; LODWORD(m) = v9[m] )
    {
      if ( (_DWORD)m == 134 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_14:
    if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 9) )
    {
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 9));
      *((_QWORD *)this + 9) = a4;
    }
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
  }
  return v5;
}
