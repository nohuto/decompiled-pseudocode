/*
 * XREFs of ?Contains@CImmersiveAppArray@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x1802EEEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::Contains(CImmersiveAppArray *this, struct IImmersiveApplication *a2, int *a3)
{
  unsigned int i; // ebx
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v8 = 0;
  if ( (*(int (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v8) >= 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v9 = 0LL;
      if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL))(
             this,
             i,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v9) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v9 + 104LL))(v9, a2, a3) >= 0
        && *a3 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
        return 0LL;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    }
  }
  return 0LL;
}
