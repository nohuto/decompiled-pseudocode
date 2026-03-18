/*
 * XREFs of ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022A5F0
 * Callers:
 *     ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022AE00 (-SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOS.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140247DEC (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@UDCOMPOSITION_PROP.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v14, a2);
  if ( v14 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v8 = DirectComposition::Memory::AllocateAndClear_0(0x10uLL, 0x70674344u, 1);
    v9 = v8;
    if ( !v8 )
      return 3221225495LL;
    *(_DWORD *)v8 = a2;
    *(_WORD *)(v8 + 4) = 0;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v8) )
    {
      GreDeleteFastMutex((char *)v9, v10, v11, v12);
      return 3221225495LL;
    }
  }
  else
  {
    v9 = *v14;
    if ( *(_BYTE *)(*v14 + 4) )
      v9 = 0LL;
    if ( !v9 )
      return 3221225485LL;
  }
  *(_QWORD *)(v9 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v9 + 5) = 1;
  *a4 = 1;
  return result;
}
