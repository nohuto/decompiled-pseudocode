/*
 * XREFs of ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x18009EE20
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CComposition::CleanPossibleDirtyInputSinkList(CComposition *this)
{
  unsigned int v2; // r14d
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v6; // rbx
  int v7; // r15d
  __int64 *v8; // r13
  __int64 *v9; // rsi
  __int64 *v10; // r12
  __int64 v11; // rdx
  int v12; // eax
  _BYTE v13[4]; // [rsp+30h] [rbp-50h] BYREF
  int v14; // [rsp+34h] [rbp-4Ch]
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-34h]
  LPVOID lpMem; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+5Ch] [rbp-24h]
  int v21; // [rsp+64h] [rbp-1Ch]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+78h] [rbp-8h]

  v2 = 0;
  v20 = 0LL;
  lpMem = 0LL;
  v21 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v19 = 0;
  v23 = 0LL;
  while ( (__int64)(*((_QWORD *)this + 812) - *((_QWORD *)this + 811)) >> 3 )
  {
    v6 = *((_QWORD *)this + 813);
    v7 = 0;
    *((_QWORD *)this + 813) = 0LL;
    v8 = (__int64 *)*((_QWORD *)this + 812);
    *((_QWORD *)this + 812) = 0LL;
    v9 = (__int64 *)*((_QWORD *)this + 811);
    v10 = v9;
    *((_QWORD *)this + 811) = 0LL;
    while ( 1 )
    {
      v2 = v7;
      if ( v10 == v8 )
        break;
      v11 = *v10;
      if ( (*(_BYTE *)(*v10 + 96) & 0x20) != 0 )
      {
        v23 = 0LL;
        v22 = 0LL;
        v12 = CVisualTreeIterator::WalkSubtree<CInputSinkContext>(v13, v11, v11, v13);
        v7 = v12;
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x4Au, 0LL);
          goto LABEL_12;
        }
      }
      ++v10;
    }
    if ( v7 < 0 )
    {
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xDCAu, 0LL);
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v9, v8);
        std::_Deallocate<16>(v9, (v6 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      break;
    }
    if ( v9 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v9, v8);
      std::_Deallocate<16>(v9, (v6 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  v3 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  return v2;
}
