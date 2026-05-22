/*
 * XREFs of ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800D2670
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D2970 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ @ 0x1800CE418 (-GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ.c)
 *     ??$_Emplace@AEAKAEAUAugmentedInputCacheState@@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@_N@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x1800D247C (--$_Emplace@AEAKAEAUAugmentedInputCacheState@@@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheStat.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::AddDeviceToCache(
        AugmentedInputDeviceCollection *this,
        int a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5)
{
  int NextSpectrumId; // r14d
  int v10; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  __int16 v13; // [rsp+40h] [rbp-10h]
  unsigned __int16 v14; // [rsp+42h] [rbp-Eh]

  v10 = a2;
  NextSpectrumId = MPCInputInfoHelper::GetNextSpectrumId();
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v12,
    &v10);
  if ( v12 != *((_QWORD *)this + 345) )
    return 2147500037LL;
  v14 = a5;
  WORD2(v12) = 0;
  LODWORD(v12) = NextSpectrumId;
  HIWORD(v12) = a3;
  v13 = a4;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Emplace<unsigned long &,AugmentedInputCacheState &>(
    (__int64 *)this + 345,
    (__int64)v11,
    &v10,
    (__int64)&v12);
  return 0LL;
}
