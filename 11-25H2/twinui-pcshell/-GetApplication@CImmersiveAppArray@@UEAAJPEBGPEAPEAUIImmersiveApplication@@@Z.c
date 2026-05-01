/*
 * XREFs of ?GetApplication@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x1802EEF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::GetApplication(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplication **a3)
{
  unsigned int i; // ebx
  struct IImmersiveApplication *v7; // rax
  unsigned int v9; // [rsp+60h] [rbp+30h] BYREF
  int v10; // [rsp+70h] [rbp+40h] BYREF
  struct IImmersiveApplication *v11; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v9 = 0;
  if ( (*(int (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v9) >= 0 )
  {
    for ( i = 0; i < v9; ++i )
    {
      v10 = 0;
      v11 = 0LL;
      if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, struct IImmersiveApplication **))(*(_QWORD *)this + 32LL))(
             this,
             i,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v11) >= 0
        && (*(int (__fastcall **)(struct IImmersiveApplication *, const unsigned __int16 *, int *))(*(_QWORD *)v11 + 88LL))(
             v11,
             a2,
             &v10) >= 0
        && v10 )
      {
        v7 = v11;
        v11 = 0LL;
        *a3 = v7;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
        return *a3 == 0LL ? 0x8002802B : 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    }
  }
  return *a3 == 0LL ? 0x8002802B : 0;
}
