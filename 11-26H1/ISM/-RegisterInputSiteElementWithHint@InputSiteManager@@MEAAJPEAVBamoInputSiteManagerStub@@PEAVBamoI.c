/*
 * XREFs of ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18002D430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x180016F50 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18002CFB8 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18002D5E8 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18002E224 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputSiteManager::RegisterInputSiteElementWithHint(
        struct BamoInputSiteElementProxy ***this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3,
        const struct InputSiteId *a4)
{
  struct BamoInputSiteElementProxy *v5; // rbx
  char *v7; // rdi
  void **v8; // rdi
  unsigned int ProcessId; // eax
  struct BamoInputSiteElementProxy **v10; // rdx
  struct BamoInputSiteElementProxy **v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-39h] BYREF
  int v14; // [rsp+28h] [rbp-31h]
  void **v15; // [rsp+30h] [rbp-29h] BYREF
  struct BamoInputSiteElementProxy *v16; // [rsp+38h] [rbp-21h] BYREF
  void *v17[2]; // [rsp+40h] [rbp-19h] BYREF
  void **v18; // [rsp+50h] [rbp-9h] BYREF
  __m128i v19; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v20[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v21; // [rsp+78h] [rbp+1Fh]
  __int128 v22; // [rsp+80h] [rbp+27h]

  v5 = a3;
  v14 = 0;
  v7 = (char *)a3 + 8;
  v20[0] = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 24LL))(
             (char *)a3 + 8,
             a2);
  v20[1] = 0;
  v21 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 32LL))(v7);
  v22 = *(_OWORD *)a4;
  v17[0] = (void *)2;
  v17[1] = v20;
  InputSiteManager::GetInputSiteFromIds((__int64)this, &v15, v17);
  v8 = v15;
  if ( !v15 )
  {
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)v5 + 4)
                                                                                              + 16LL));
    v19.m128i_i64[0] = 2LL;
    v19.m128i_i64[1] = (__int64)v20;
    v13 = ProcessId;
    v17[0] = this;
    Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
      &v18,
      &v19,
      (int *)&v13,
      v17);
    v14 = 2;
    v17[0] = v18;
    v10 = this[8];
    if ( v10 == this[9] )
    {
      std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(this + 7, v10, v17);
    }
    else
    {
      *v10 = (struct BamoInputSiteElementProxy *)v18;
      ++this[8];
    }
    v8 = v18;
    v15 = v18;
  }
  InputSiteElementProxy::AssociateWithInputSite(v5, &v15);
  v16 = v5;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v5)(v5);
  v11 = this[11];
  if ( v11 == this[12] )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      this + 10,
      v11,
      &v16);
    v5 = v16;
  }
  else
  {
    *v11 = 0LL;
    if ( v11 != &v16 )
    {
      *v11 = v5;
      v5 = 0LL;
    }
    ++this[11];
  }
  if ( v5 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v8 )
    (*((void (__fastcall **)(void **))*v8 + 2))(v8);
  return 0LL;
}
