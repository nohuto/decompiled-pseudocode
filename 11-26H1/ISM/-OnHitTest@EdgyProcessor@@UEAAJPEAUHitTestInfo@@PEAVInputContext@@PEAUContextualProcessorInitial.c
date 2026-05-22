/*
 * XREFs of ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180157DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014CB24 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 */

__int64 __fastcall EdgyProcessor::OnHitTest(
        EdgyProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  bool v4; // zf
  unsigned int v8; // r8d
  struct tagPOINT v9; // r9
  struct HitTestResult *v10; // rdx
  __int64 v11; // rbx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = *((_QWORD *)a4 + 1) == 0LL;
  *(_DWORD *)a4 = 0;
  if ( v4 && (*(_DWORD *)a2 & 0x4088) == 8 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    *(_DWORD *)a4 = 1;
    v8 = *((_DWORD *)a2 + 10);
    v9 = *(struct tagPOINT *)((char *)a2 + 44);
    v10 = (struct HitTestResult *)*((_QWORD *)a3 + 22);
    v14 = v8;
    EdgyProcessor::StartGestureRecognition(this, v10, v8, v9);
    v11 = *(_QWORD *)((char *)a2 + 44);
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                             (float *)this + 120,
                             (__int64)v13,
                             (unsigned __int8 *)&v14)
              + 20LL) = v11;
  }
  return 0LL;
}
