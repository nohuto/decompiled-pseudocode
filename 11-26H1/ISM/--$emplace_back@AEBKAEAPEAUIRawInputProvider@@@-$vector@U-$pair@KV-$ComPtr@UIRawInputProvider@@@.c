/*
 * XREFs of ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800CC960
 * Callers:
 *     ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180075520 (-SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@QEAU21@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18008E570 (--$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProv.c)
 *     ??$?0AEBKAEAPEAUIRawInputProvider@@$0A@@?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@QEAA@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180090DF8 (--$-0AEBKAEAPEAUIRawInputProvider@@$0A@@-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@s.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rdx

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Emplace_reallocate<unsigned long const &,IRawInputProvider * &>(
             (_QWORD *)a1,
             *(char **)(a1 + 8),
             (__int64)a2,
             (__int64)a3);
  std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>(
    *(_QWORD *)(a1 + 8),
    a2,
    a3);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 16;
  return (char *)v4;
}
