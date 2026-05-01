/*
 * XREFs of ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039EA40
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039E670 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18029EC40 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x18039E914 (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18039EE5C (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

_DWORD *__fastcall RetailDemoExperienceManager::_ParseScreenRect(_DWORD *a1, __int64 a2)
{
  int v3; // edi
  int v5; // ebx
  const wchar_t *v6; // rcx
  int v7; // r14d
  int v8; // r15d
  const wchar_t *v9; // rcx
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  DWORD pdwDefaultLayout; // [rsp+60h] [rbp+20h] BYREF

  v3 = 0;
  pdwDefaultLayout = 0;
  GetProcessDefaultLayout(&pdwDefaultLayout);
  RetailDemoExperienceManager::_SplitString(v11, a2, 44LL);
  v5 = 0;
  v6 = (const wchar_t *)v11[0];
  v7 = 0;
  v8 = 0;
  if ( v11[1] - v11[0] == 128LL )
  {
    if ( pdwDefaultLayout == 1 )
    {
      LOBYTE(v5) = 1;
      v6 = (const wchar_t *)(v11[0] + 64LL);
    }
    v8 = RetailDemoExperienceManager::_ParseScreenInt(v6, 1, v5);
    v7 = RetailDemoExperienceManager::_ParseScreenInt((const wchar_t *)(v11[0] + 32LL), 0, 0);
    v9 = (const wchar_t *)v11[0];
    if ( pdwDefaultLayout != 1 )
    {
      v9 = (const wchar_t *)(v11[0] + 64LL);
      LOBYTE(v5) = 0;
    }
    v5 = RetailDemoExperienceManager::_ParseScreenInt(v9, 1, v5);
    v3 = RetailDemoExperienceManager::_ParseScreenInt((const wchar_t *)(v11[0] + 96LL), 0, 0);
  }
  *a1 = v8;
  a1[1] = v7;
  a1[2] = v5;
  a1[3] = v3;
  std::vector<std::wstring>::_Tidy((__int64)v11);
  return a1;
}
