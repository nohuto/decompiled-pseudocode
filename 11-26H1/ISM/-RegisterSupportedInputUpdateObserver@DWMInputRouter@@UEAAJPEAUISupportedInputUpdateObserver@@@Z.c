/*
 * XREFs of ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1801A3A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RegisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver *v2; // r15
  _QWORD *v4; // rcx
  struct ISupportedInputUpdateObserver **v5; // rdx
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rsi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  struct ISupportedInputUpdateObserver *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v2 = a2;
  v4 = (_QWORD *)((char *)this + 432);
  v5 = (struct ISupportedInputUpdateObserver **)v4[1];
  if ( v5 == (struct ISupportedInputUpdateObserver **)v4[2] )
  {
    std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(v4, (__int64)v5, (__int64 *)&v15);
    v2 = v15;
  }
  else
  {
    *v5 = v2;
    v4[1] += 8LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v14 = 0LL;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))i[7];
    v9 = **v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    if ( v9(v8, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v14) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ISupportedInputUpdateObserver *, __int64))(*(_QWORD *)v2 + 24LL))(v2, v14);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x981,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v10,
          v12);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  return 0LL;
}
