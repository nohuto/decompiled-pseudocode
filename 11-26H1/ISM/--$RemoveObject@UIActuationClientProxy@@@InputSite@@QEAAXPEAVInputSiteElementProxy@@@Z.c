/*
 * XREFs of ??$RemoveObject@UIActuationClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18005AFC4
 * Callers:
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18005AF50 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800400F8 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800517A8 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputSite::RemoveObject<IActuationClientProxy>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 v4; // r12
  __int64 *v5; // r14
  __int64 *v6; // r15
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  bool v10; // al
  __int64 v11; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = a1 + 488;
  v5 = *(__int64 **)(a1 + 488);
  v6 = *(__int64 **)(a1 + 496);
  while ( v5 != v6 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v5[1];
    v9 = **v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v10 = v9(v8, &GUID_4471cf3a_35aa_f774_027a_bb4e36e27700, &v12) >= 0;
    if ( v7 == a2 && v10 )
      break;
    v5 += 2;
  }
  if ( v5 != *(__int64 **)(a1 + 496) )
  {
    v13 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5 + 1,
                &v13) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v4, &v14, v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  v11 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
