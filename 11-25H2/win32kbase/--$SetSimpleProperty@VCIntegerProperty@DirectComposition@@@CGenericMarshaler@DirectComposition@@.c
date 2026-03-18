/*
 * XREFs of ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x140228330
 * Callers:
 *     ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140228B50 (-SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x140228E10 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x14023D60C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v11, a2);
  if ( v11 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v8 = DirectComposition::Memory::AllocateAndClear_0(0x10uLL, 1885815620LL, 1);
    v9 = v8;
    if ( !v8 )
      return 3221225495LL;
    *(_DWORD *)v8 = a2;
    *(_WORD *)(v8 + 4) = 0;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v8) )
    {
      GreDeleteFastMutex((char *)v9);
      return 3221225495LL;
    }
  }
  else
  {
    v9 = *v11;
    if ( *(_BYTE *)(*v11 + 4) )
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
