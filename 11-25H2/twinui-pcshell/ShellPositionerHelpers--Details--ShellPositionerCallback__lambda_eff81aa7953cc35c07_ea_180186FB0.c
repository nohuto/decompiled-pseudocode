/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::Invoke @ 0x180186FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::Invoke(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v9 = 0LL;
  v5 = *v2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  if ( v5(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v9) < 0
    || (**(_BYTE **)(a1 + 64) = 1,
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
               v9,
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 56)),
        v7 >= 0) )
  {
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  }
  return (unsigned int)v7;
}
