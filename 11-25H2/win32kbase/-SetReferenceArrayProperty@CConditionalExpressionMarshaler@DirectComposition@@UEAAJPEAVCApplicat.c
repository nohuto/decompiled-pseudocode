/*
 * XREFs of ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140059670
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v7; // ebx
  unsigned __int64 v9; // r10
  unsigned int i; // r8d
  unsigned int v11; // esi
  int v12; // r8d
  unsigned int v14; // esi

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a3 != 10 || !a4 )
    return (unsigned int)-1073741811;
  v9 = a5;
  for ( i = 0; i < v9; i = v12 + 1 )
  {
    v11 = *((_DWORD *)a4[i] + 9);
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v11, 59LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v11, 111LL) )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( *((_QWORD *)this + 16) || *((_DWORD *)this + 34) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 34) = v9;
    v14 = 0;
    *((_QWORD *)this + 16) = a4;
    for ( *v6 = 1; v14 < *((_DWORD *)this + 34); ++v14 )
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 16)
                                                                                              + 8LL * v14));
  }
  return v7;
}
