/*
 * XREFs of ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x140228194
 * Callers:
 *     ?SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140228B10 (-SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x140228E10 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x14023D60C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v10, a2);
  if ( v10 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v7 = DirectComposition::Memory::AllocateAndClear_0(0xCuLL, 1885815620LL, 1);
    v8 = v7;
    if ( !v7 )
      return 3221225495LL;
    *(_DWORD *)v7 = a2;
    *(_WORD *)(v7 + 4) = 2;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v7) )
    {
      GreDeleteFastMutex((char *)v8);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = *v10;
    if ( *(_BYTE *)(*v10 + 4) != 2 )
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
