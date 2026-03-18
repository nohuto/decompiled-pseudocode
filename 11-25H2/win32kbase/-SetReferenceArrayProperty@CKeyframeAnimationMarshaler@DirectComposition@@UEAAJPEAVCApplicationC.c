/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14005A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14015FB40 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v7; // ebx
  unsigned __int64 v11; // r10
  unsigned int i; // r8d
  int v13; // r8d
  unsigned int v15; // esi

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = a5;
  for ( i = 0; i < v11; i = v13 + 1 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                             *((unsigned int *)a4[i] + 9),
                             11LL) )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 14 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
                           this,
                           a2,
                           a3,
                           a4,
                           v11,
                           v6);
  if ( *((_QWORD *)this + 18) || *((_DWORD *)this + 59) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 59) = v11;
    v15 = 0;
    *((_QWORD *)this + 18) = a4;
    *v6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    if ( *((_DWORD *)this + 59) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 18)
                                                                                                + 8LL * v15++));
      while ( v15 < *((_DWORD *)this + 59) );
    }
  }
  return v7;
}
