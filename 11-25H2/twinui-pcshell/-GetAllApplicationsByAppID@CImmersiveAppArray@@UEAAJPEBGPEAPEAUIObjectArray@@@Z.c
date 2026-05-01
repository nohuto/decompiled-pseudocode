/*
 * XREFs of ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801E4710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByAppID(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  char v6; // r15
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  unsigned int v10; // esi
  void *v11; // rcx
  int (__fastcall *v13)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  void *v16; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+50h] BYREF
  int v18; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v9 = CEnumerableObjectCollection::CreateInstance(v8, v7, &v16);
  if ( v9 >= 0 )
  {
    v17 = 0;
    v9 = (*(__int64 (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v17);
    v10 = 0;
    if ( v9 >= 0 )
    {
      while ( v10 < v17 )
      {
        v18 = 0;
        v15 = 0LL;
        v13 = *(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        if ( v13(this, v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v15) >= 0
          && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v15 + 88LL))(v15, a2, &v18) >= 0
          && v18 )
        {
          v9 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 40LL))(v16, v15);
          v6 = 1;
        }
        v14 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        ++v10;
        if ( v9 < 0 )
          goto LABEL_3;
      }
      if ( v6 )
        v9 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v16)(
               v16,
               &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
               a3);
      else
        v9 = -2147319765;
    }
  }
LABEL_3:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v9;
}
