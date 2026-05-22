/*
 * XREFs of ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x18002B7C0
 * Callers:
 *     ??0DWMLegacyInputTarget@@IEAA@KKK_K@Z @ 0x180029BA8 (--0DWMLegacyInputTarget@@IEAA@KKK_K@Z.c)
 *     ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x18002B770 (-GetInputSite@DWMLegacyInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180016EE0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x18002B9C0 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall DWMLegacyInputTarget::PopulateInputSiteFromWindowId(DWMLegacyInputTarget *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  char *InputSiteFromId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct InputSiteManager *v7; // rax
  __int64 *v8; // r14
  __int64 *v9; // r13
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v14)(_QWORD, GUID *, __int64 *); // r12
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  char v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h]

  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                              (__int64)InputSiteManager,
                              (__int64)&v21,
                              1u,
                              *((_QWORD *)this + 8));
  v4 = 0LL;
  if ( &v20 != InputSiteFromId )
  {
    v4 = *(_QWORD *)InputSiteFromId;
    *(_QWORD *)InputSiteFromId = 0LL;
  }
  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !*((_QWORD *)this + 9) )
  {
    v7 = ISMStatics::GetInputSiteManager();
    v8 = (__int64 *)*((_QWORD *)v7 + 7);
    v9 = (__int64 *)*((_QWORD *)v7 + 8);
    while ( v8 != v9 )
    {
      v10 = 0LL;
      v21 = 0LL;
      v11 = *(_QWORD *)(*v8 + 488);
      v12 = *(_QWORD *)(*v8 + 496);
      if ( v11 != v12 )
      {
        while ( 1 )
        {
          v13 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 8);
          v14 = **v13;
          if ( v10 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( v14(v13, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, &v21) >= 0 )
            break;
          v11 += 16LL;
          if ( v11 == v12 )
            break;
          v10 = v21;
        }
        v10 = v21;
      }
      v15 = (v10 - 8) & -(__int64)(v10 != 0);
      v22 = v15;
      v16 = v15 + 16;
      if ( v15 )
      {
        (**(void (__fastcall ***)(__int64))v16)(v15 + 16);
        v10 = v21;
      }
      if ( v10 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v15 )
      {
        v17 = *((_QWORD *)this + 8);
        if ( BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v15 + 8)) == v17 )
        {
          v18 = *v8;
          if ( *((_QWORD *)this + 9) != *v8 )
          {
            v21 = *v8;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v21);
            v19 = *((_QWORD *)this + 9);
            *((_QWORD *)this + 9) = v18;
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v15 + 16) + 8LL))(v15 + 16);
          return;
        }
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v15 + 16);
      ++v8;
    }
  }
}
