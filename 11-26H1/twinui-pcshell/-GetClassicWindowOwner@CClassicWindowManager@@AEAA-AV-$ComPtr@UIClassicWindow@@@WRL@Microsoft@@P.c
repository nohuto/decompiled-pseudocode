/*
 * XREFs of ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180138500
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180096330 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x18027D9E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CClassicWindowManager::GetClassicWindowOwner(__int64 a1, __int64 *a2, HWND a3)
{
  HWND v3; // rbx
  HWND i; // rcx
  unsigned __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  HWND Window; // rax
  HWND v11; // rsi
  unsigned __int64 j; // r14
  __int64 v14; // rbx
  int v15; // r15d
  __int64 v16; // rcx
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // [rsp+68h] [rbp+48h] BYREF
  HWND v21; // [rsp+70h] [rbp+50h]
  __int64 v22; // [rsp+78h] [rbp+58h] BYREF

  v21 = a3;
  v3 = a3;
  *a2 = 0LL;
  for ( i = a3; ; i = v11 )
  {
    Window = GetWindow(i, 4u);
    v11 = Window;
    if ( !Window || Window == v3 || *a2 )
      break;
    if ( IsWindowVisible(Window) )
    {
      v20 = 0LL;
      v7 = 0LL;
      for ( j = 0LL; j < *(_QWORD *)(a1 + 200); ++j )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * j);
        if ( v14 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * j));
        v22 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
               v14,
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v22) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v22 + 192LL))(v22, v11) )
        {
          v15 = 0;
        }
        else
        {
          v15 = -1;
        }
        v16 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !v15 )
        {
          v7 = j;
          v8 = 0;
          goto LABEL_3;
        }
      }
      v8 = -2147319765;
LABEL_3:
      if ( v8 >= 0
        && (v17 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 192) + 8 * v7),
            (**v17)(v17, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v20) >= 0)
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20) )
      {
        v9 = v20;
        if ( *a2 != v20 )
        {
          v18 = v20;
          if ( v20 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
            v9 = v20;
          }
          v19 = *a2;
          *a2 = v18;
          if ( v19 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            v9 = v20;
          }
        }
      }
      else
      {
        v9 = v20;
      }
      if ( v9 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v3 = v21;
    }
  }
  return a2;
}
