/*
 * XREFs of ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1402280D0
 * Callers:
 *     ?SetCallbackId@CGenericMarshaler@DirectComposition@@UEAAJIPEA_N@Z @ 0x140228A30 (-SetCallbackId@CGenericMarshaler@DirectComposition@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x140228E10 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x14023D60C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CCallbackIdProperty>(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v10, 0xFFFFFFFFLL);
  if ( v10 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v7 = DirectComposition::Memory::AllocateAndClear_0(0xCuLL, 1885815620LL, 1);
    v8 = v7;
    if ( !v7 )
      return 3221225495LL;
    *(_DWORD *)v7 = -1;
    *(_WORD *)(v7 + 4) = 1;
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
    if ( *(_BYTE *)(*v10 + 4) != 1 )
      v8 = 0LL;
    if ( !v8 )
      return 3221225485LL;
  }
  *(_DWORD *)(v8 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v8 + 5) = 1;
  *a4 = 1;
  return result;
}
