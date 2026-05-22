/*
 * XREFs of ??$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x1800513FC
 * Callers:
 *     ?OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180051250 (-OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003F830 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180040190 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall InputSite::AttachObject<BamoWindowsMessageDeliveryProxy>(__int64 a1, __int64 a2, __int64 a3)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  _QWORD *v6; // rdx
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, _OWORD *); // rsi
  _OWORD *Transform; // rax
  __int64 v15; // [rsp+20h] [rbp-39h] BYREF
  __int64 v16; // [rsp+28h] [rbp-31h] BYREF
  __int64 v17; // [rsp+30h] [rbp-29h] BYREF
  __int64 v18[3]; // [rsp+38h] [rbp-21h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-9h] BYREF

  if ( a3 )
  {
    v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a3 + 8);
    v18[1] = a3 + 8;
    if ( a3 != -8 )
      ((void (__fastcall *)(__int64))(*v5)[1])(a3 + 8);
    v17 = a2;
    v18[0] = (__int64)v5;
    if ( v5 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[1])(v5);
    v6 = *(_QWORD **)(a1 + 496);
    if ( v6 == *(_QWORD **)(a1 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        (__int64 *)(a1 + 488),
        (__int64)v6,
        (__int64)&v17);
    }
    else
    {
      *v6 = a2;
      v11 = v6 + 1;
      *v11 = 0LL;
      if ( v11 != v18 )
      {
        *v11 = (__int64)v5;
        v18[0] = 0LL;
      }
      *(_QWORD *)(a1 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
    v16 = 0LL;
    v7 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    if ( v7(v5, &GUID_fc9627fe_ee9e_4718_b797_19522e5898d2, &v16) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, a1);
    v15 = 0LL;
    v8 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    if ( v8(v5, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v15) >= 0 && *(_BYTE *)(a1 + 480) )
    {
      v12 = v15;
      v13 = *(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v15 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(a1 + 48, v19);
      v13(v12, Transform);
    }
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
  }
}
