/*
 * XREFs of ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800DE520
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x18027E7A4 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802ED0A4 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CClassicWindowManager::_FindClassicWindow(
        CClassicWindowManager *this,
        HWND a2,
        struct IClassicWindow **a3,
        unsigned __int64 *a4)
{
  int v8; // esi
  unsigned __int64 i; // rdi
  __int64 v10; // rbx
  int v11; // ebp
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IClassicWindow **); // rcx
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h]
  __int64 v19; // [rsp+98h] [rbp+20h]

  v8 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = *((_QWORD *)this + 25);
  v18 = 0LL;
  v17 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 25); ++i )
  {
    v19 = 0LL;
    v10 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * i);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v16 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
           v10,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v16) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v16 + 192LL))(v16, a2) )
    {
      v11 = 0;
    }
    else
    {
      v11 = -1;
    }
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v11 )
    {
      v13 = i;
      goto LABEL_18;
    }
  }
  v8 = -2147319765;
  v13 = v17;
LABEL_18:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( a3 )
  {
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IClassicWindow **))(*((_QWORD *)this + 24) + 8 * v13);
    v8 = (**v15)(v15, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, a3);
  }
  result = (unsigned int)v8;
  if ( a4 )
    *a4 = v13;
  return result;
}
