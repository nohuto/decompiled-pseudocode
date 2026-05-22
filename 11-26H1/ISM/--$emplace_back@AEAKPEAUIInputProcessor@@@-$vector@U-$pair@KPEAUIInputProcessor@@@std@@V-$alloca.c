/*
 * XREFs of ??$emplace_back@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAAEAU?$pair@KPEAUIInputProcessor@@@1@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x1800CC918
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18007F4F0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180082DD4 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::emplace_back<unsigned long &,IInputProcessor *>(
        __int64 *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
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
