/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180139910
 * Callers:
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180138C1C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x180138FF0 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180139034 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x1801396D0 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rbx
  bool v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // [rsp+60h] [rbp+8h] BYREF
  const unsigned __int16 *v16; // [rsp+68h] [rbp+10h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v16 = a2;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < v7 )
  {
    v17 = 0LL;
    v10 = **(_QWORD **)(v9 + *((_QWORD *)this + 5));
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(**(_QWORD **)(v9 + *((_QWORD *)this + 5)));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    v11 = (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
            v10,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            &v17) >= 0;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v11 )
    {
      v15 = 0;
      if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v17 + 88LL))(v17, v16, &v15) >= 0 )
      {
        if ( v15 )
        {
          *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v8);
          if ( a4 )
            *a4 = v8;
          v13 = v17;
          if ( v17 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          return *a3 == 0LL ? 0x80070490 : 0;
        }
      }
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    ++v8;
    v9 += 40LL;
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}
