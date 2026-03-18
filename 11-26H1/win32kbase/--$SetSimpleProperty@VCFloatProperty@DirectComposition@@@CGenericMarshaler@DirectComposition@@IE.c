/*
 * XREFs of ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14022A450
 * Callers:
 *     ?SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14022ADC0 (-SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140247DEC (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@UDCOMPOSITION_PROP.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 *v13; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v13, a2);
  if ( v13 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v7 = DirectComposition::Memory::AllocateAndClear_0(0xCuLL, 0x70674344u, 1);
    v8 = v7;
    if ( !v7 )
      return 3221225495LL;
    *(_DWORD *)v7 = a2;
    *(_WORD *)(v7 + 4) = 2;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v7) )
    {
      GreDeleteFastMutex((char *)v8, v9, v10, v11);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = *v13;
    if ( *(_BYTE *)(*v13 + 4) != 2 )
      v8 = 0LL;
    if ( !v8 )
      return 3221225485LL;
  }
  *(float *)(v8 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v8 + 5) = 1;
  *a4 = 1;
  return result;
}
