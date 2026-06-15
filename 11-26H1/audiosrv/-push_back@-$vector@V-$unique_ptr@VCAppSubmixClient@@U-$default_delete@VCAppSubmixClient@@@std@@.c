/*
 * XREFs of ?push_back@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@2@@Z @ 0x1800BD0A8
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800BBBD0 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<std::unique_ptr<CAppSubmixClient>>::push_back(_QWORD *a1, __int64 *a2)
{
  char **v2; // r9
  char *result; // rax

  v2 = (char **)a1[1];
  if ( v2 == (char **)a1[2] )
    return std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClient>>(
             a1,
             a1[1],
             a2);
  result = (char *)*a2;
  *a2 = 0LL;
  *v2 = result;
  a1[1] += 8LL;
  return result;
}
