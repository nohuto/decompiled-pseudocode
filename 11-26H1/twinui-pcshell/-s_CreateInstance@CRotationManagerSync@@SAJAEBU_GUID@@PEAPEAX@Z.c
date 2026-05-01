/*
 * XREFs of ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF9D0
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18008549C (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Make@VCRotationManagerSync@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRotationManagerSync@@@12@XZ @ 0x1801EFA7C (--$Make@VCRotationManagerSync@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCRotationManagerSync@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  const struct _GUID *v5; // rcx
  unsigned int v6; // edi
  const struct _GUID *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *a2 = 0LL;
  v3 = (_QWORD *)Microsoft::WRL::Details::Make<CRotationManagerSync,>(&v8);
  v4 = (*v3 + 72LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v3 >> 64);
  *v3 = 0LL;
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v5->Data1 + 16LL))(v5);
  }
  if ( v4 )
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v4)(v4, &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee, a2);
  else
    v6 = -2147024882;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
