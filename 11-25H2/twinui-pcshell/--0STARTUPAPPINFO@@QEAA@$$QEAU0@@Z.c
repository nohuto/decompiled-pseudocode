/*
 * XREFs of ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802A44B8
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x18005C120 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801F41A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18055F944 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@-$_Tree_tem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STARTUPAPPINFO::STARTUPAPPINFO(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 7LL;
  *(_WORD *)(a2 + 40) = 0;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_QWORD *)(a2 + 96) = 7LL;
  *(_WORD *)(a2 + 72) = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = 0LL;
  *(_QWORD *)(a2 + 128) = 7LL;
  *(_WORD *)(a2 + 104) = 0;
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  result = a1;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_QWORD *)(a2 + 176) = 7LL;
  *(_WORD *)(a2 + 152) = 0;
  return result;
}
