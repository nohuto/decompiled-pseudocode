/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800A809C
 * Callers:
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x1800A7650 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A769C (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x1800A7E60 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800A826C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  bool v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  const unsigned __int16 *v17; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v17 = a2;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < v7 )
  {
    v18 = 0LL;
    v10 = *(_QWORD **)(v9 + *((_QWORD *)this + 5));
    v11 = *v10;
    if ( *v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    v12 = (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
            v11,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            &v18) >= 0;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
    {
      v16 = 0;
      if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v18 + 88LL))(v18, v17, &v16) >= 0 )
      {
        if ( v16 )
        {
          *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v8);
          if ( a4 )
            *a4 = v8;
          v14 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          return *a3 == 0LL ? 0x80070490 : 0;
        }
      }
    }
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ++v8;
    v9 += 40LL;
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}
