/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002DFAC
 * Callers:
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002D364 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18002CFB8 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void ***__fastcall InputSiteManager::CreateInputSiteFromId(_QWORD *a1, void ***a2, int a3, __int64 a4)
{
  void **v6; // rax
  void ***v7; // rdx
  int v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h]
  void *v11[2]; // [rsp+30h] [rbp-40h] BYREF
  __m128i v12; // [rsp+40h] [rbp-30h] BYREF
  void ***v13; // [rsp+50h] [rbp-20h]
  _DWORD v14[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]

  v13 = a2;
  v10 = 0;
  v14[0] = a3;
  v14[1] = 0;
  v15 = a4;
  v12.m128i_i64[0] = 1LL;
  v12.m128i_i64[1] = (__int64)v14;
  v9 = 0;
  v11[0] = a1;
  Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
    a2,
    &v12,
    &v9,
    v11);
  v10 = 2;
  v6 = *a2;
  v11[0] = *a2;
  v7 = (void ***)a1[8];
  if ( v7 == (void ***)a1[9] )
  {
    std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(a1 + 7, v7, v11);
  }
  else
  {
    *v7 = v6;
    a1[8] += 8LL;
  }
  return a2;
}
