/*
 * XREFs of ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800E230C
 * Callers:
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800E2A2C (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003F830 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@XZ @ 0x1800E1984 (--$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA-A.c)
 *     ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E2D6C (-RelativePointToScreen@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct tagPOINT __fastcall InjectionRawInputProvider::GetWorkspaceRelativeCoordinates(
        InjectionRawInputProvider *this,
        struct tagPOINT a2,
        struct InputInjectionClientProxy *a3,
        __int64 a4)
{
  int v5; // ebx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rbp
  __int64 v10; // rsi
  _OWORD *Transform; // rax
  float *v12; // r9
  __int64 v14; // [rsp+20h] [rbp-98h]
  __int64 v15; // [rsp+28h] [rbp-90h] BYREF
  struct InputInjectionClientProxy *v16; // [rsp+30h] [rbp-88h]
  unsigned __int64 v17; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v19[6]; // [rsp+50h] [rbp-68h] BYREF

  v5 = (int)a3;
  v16 = a3;
  **(_QWORD **)&a2 = a3;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v8 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
  v9 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
  while ( v8 != v9 )
  {
    InputSite::GetAttachedObject<IInputInjectionClientProxy,InputInjectionClientProxy>(*v8, &v15);
    v10 = v15;
    if ( v15 && v15 == a4 )
    {
      if ( !*(_BYTE *)(*v8 + 480) )
        std::_Throw_bad_optional_access();
      Transform = LegacyInputSinkData::GetTransform(*v8 + 48, v19);
      v17 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v5), (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v16))).m128_u64[0];
      v12 = (float *)CInputTransform::RelativePointToScreen(v18, &v17, Transform);
      LODWORD(v14) = (int)*v12;
      HIDWORD(v14) = (int)v12[1];
      **(_QWORD **)&a2 = v14;
    }
    if ( v10 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    ++v8;
  }
  return a2;
}
