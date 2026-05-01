/*
 * XREFs of ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x1800E64A0
 * Callers:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x18028DDE4 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int v7; // esi
  unsigned __int64 i; // rdi
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h]

  v13 = a3;
  v7 = 0;
  *a4 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
  {
    v14 = 0LL;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v13 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(v9, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v13) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 192LL))(v13, *a2) )
    {
      v10 = 0;
    }
    else
    {
      v10 = -1;
    }
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( !v10 )
    {
      *a4 = i;
      return v7;
    }
  }
  return (unsigned int)-2147319765;
}
