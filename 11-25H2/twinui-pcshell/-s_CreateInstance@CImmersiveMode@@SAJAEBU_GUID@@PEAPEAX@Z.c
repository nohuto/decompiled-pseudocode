/*
 * XREFs of ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E39C
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18004BEB0 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x18004E44C (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveMode *v3; // rbx
  CImmersiveMode *v4; // rax
  int inited; // edi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveMode *)operator new(0x1C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v4 = CImmersiveMode::CImmersiveMode(v4);
    v3 = v4;
  }
  if ( v4 )
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId((CImmersiveMode *)((char *)v3 + 184));
    if ( inited >= 0 )
      inited = (**(__int64 (__fastcall ***)(CImmersiveMode *, GUID *, void **))v3)(
                 v3,
                 &GUID_64aa042d_4144_4c88_afb9_aed881c0ffee,
                 a2);
  }
  else
  {
    inited = -2147024882;
  }
  if ( v3 )
    (*(void (__fastcall **)(CImmersiveMode *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)inited;
}
