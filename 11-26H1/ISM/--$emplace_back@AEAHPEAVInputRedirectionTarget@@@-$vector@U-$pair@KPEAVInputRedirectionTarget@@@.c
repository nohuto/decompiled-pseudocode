/*
 * XREFs of ??$emplace_back@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAAEAU?$pair@KPEAVInputRedirectionTarget@@@1@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B418C
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801B44F0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@AEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B4050 (--$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@-$vector@U-$pair@KPEAVInputRedirectionTa.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::emplace_back<int &,InputRedirectionTarget *>(
        __int64 *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
             a1,
             v4,
             a2,
             a3);
  *(_DWORD *)v4 = *a2;
  *(_QWORD *)(v4 + 8) = *a3;
  v5 = a1[1];
  a1[1] = v5 + 16;
  return (char *)v5;
}
