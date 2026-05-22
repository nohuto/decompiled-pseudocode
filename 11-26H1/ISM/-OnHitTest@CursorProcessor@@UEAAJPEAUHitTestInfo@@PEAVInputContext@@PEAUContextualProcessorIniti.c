/*
 * XREFs of ?OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18004FA30 (-GetInputSiteForContainer@@YA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV-$vector@V-$ComPtr@VInp.c)
 *     ?EnsureCursorForPen@CursorProcessor@@AEAAXXZ @ 0x18014AD5C (-EnsureCursorForPen@CursorProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorProcessor::OnHitTest(
        CursorProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v6; // esi
  char v7; // bl
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 pvParam; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 0;
  v6 = *(_DWORD *)a2;
  v7 = 0;
  if ( (*(_DWORD *)a2 & 0x10) != 0 )
  {
    v8 = *GetInputSiteForContainer(&pvParam, (__int64 **)(*(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL) - 24LL));
    v9 = pvParam;
    if ( pvParam )
    {
      pvParam = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 )
    {
      LODWORD(pvParam) = 0;
      if ( SystemParametersInfoW(0x201Eu, 0, &pvParam, 0) )
      {
        if ( (pvParam & 0x20) != 0 )
        {
          v7 = 1;
          CursorProcessor::EnsureCursorForPen((CursorProcessor *)((char *)this - 8));
        }
        else
        {
          v7 = 0;
        }
      }
    }
  }
  if ( (v6 & 2) != 0 || v7 )
    *(_DWORD *)a4 = 3;
  return 0LL;
}
