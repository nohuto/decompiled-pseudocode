/*
 * XREFs of ??$AsWeak@VCTaskWindow@@@WRL@Microsoft@@YAJPEAVCTaskWindow@@PEAVWeakRef@01@@Z @ 0x1801EF3A8
 * Callers:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1801EF1F0 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<CTaskWindow>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = (**a1)(a1, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v12);
  if ( v3 < 0 )
  {
    v4 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return (unsigned int)v3;
  }
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  if ( v3 < 0 )
  {
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)v3;
  }
  v8 = v13;
  v9 = v13;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v8 = v13;
  }
  v10 = *a2;
  *a2 = v9;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = v13;
  }
  if ( v8 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v11 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
