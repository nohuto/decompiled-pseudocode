/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1400F0220
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1400F034C (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // ecx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  __int64 i; // rax
  struct DirectComposition::CResourceMarshaler **v14; // r8
  DirectComposition::CPrimitiveGroupMarshaler *v15; // rcx
  unsigned int *v16; // rsi
  unsigned int v17; // edi

  v6 = 0;
  *a6 = 0;
  if ( a3 > 1 || a5 && !a4 )
    return (unsigned int)-1073741811;
  v10 = 0;
LABEL_5:
  if ( v10 < a5 )
  {
    v11 = a4[v10];
    if ( v11 )
    {
      for ( i = *((unsigned int *)v11 + 9); (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
      {
        if ( (_DWORD)i == 182 )
        {
          ++v10;
          goto LABEL_5;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
    v14 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
  else
    v14 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
  v15 = a3 != 0 ? (DirectComposition::CPrimitiveGroupMarshaler *)0x10 : 0LL;
  v16 = (unsigned int *)((char *)this + (_QWORD)v15 + 64);
  if ( v14 )
  {
    DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
      v15,
      a2,
      v14,
      (unsigned int *)((char *)this + (_QWORD)v15 + 64));
    *((_DWORD *)this + 4) |= a3 != 0 ? 64 : 32;
  }
  *(_QWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 56) = a4;
  *v16 = a5;
  *(_DWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 68) = 0;
  v17 = 0;
  for ( *a6 = 1; v17 < *v16; ++v17 )
    DirectComposition::CResourceMarshaler::AddRef(a4[v17]);
  return v6;
}
