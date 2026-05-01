/*
 * XREFs of ?ContainsApp@CDropFeedback@@UEAA_NPEAUIImmersiveApplication@@@Z @ 0x18053DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDropFeedback::ContainsApp(CDropFeedback *this, struct IImmersiveApplication *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // r14d
  char v6; // si
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v14 = 0;
  v3 = *((_QWORD *)this + 13);
  if ( !v3 )
    return 0;
  v13 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v13);
  v5 = 0;
  v6 = 1;
  if ( !v13 )
  {
LABEL_9:
    if ( v14 )
      return v6;
    return 0;
  }
  while ( !v14 )
  {
    v7 = *((_QWORD *)this + 13);
    v12[0] = 0LL;
    v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v12);
    if ( v8(v7, v5, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, v12) >= 0 )
    {
      v9 = v12[0];
      v15 = 0LL;
      v10 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12[0] + 40LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      if ( v10(v9, &v15) >= 0 )
        (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, int *))(*(_QWORD *)a2 + 104LL))(a2, v15, &v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v12);
    if ( ++v5 >= v13 )
      goto LABEL_9;
  }
  return v6;
}
