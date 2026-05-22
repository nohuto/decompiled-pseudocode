/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x18007DBE8
 * Callers:
 *     ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18007FA90 (-OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>::_Unchecked_erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  --*(_QWORD *)(a1 + 8);
  *(_QWORD *)a2[1] = v2;
  *(_QWORD *)(v2 + 8) = a2[1];
  std::_Deallocate<16>(a2, 128LL);
  return v2;
}
