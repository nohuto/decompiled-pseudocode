/*
 * XREFs of ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402FC900
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FCFA4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FD39C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x14023BD40 (GetUserHandedness.c)
 */

__int64 __fastcall InteractiveControlDevice::CreateDeadzone(InteractiveControlDevice *this)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  int UserHandedness; // r14d
  unsigned int v6; // edi
  _DWORD *v7; // rax
  void *v8; // r12
  _DWORD *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct InteractiveControlManager *v14; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  struct InteractiveControlManager *v23; // rax
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void **v29; // r14
  __int64 *v30; // r15
  __int64 i; // rbx
  void *v32; // rcx

  v1 = *((_QWORD *)this + 30);
  UserHandedness = GetUserHandedness();
  if ( !v1 )
    return (unsigned int)-1073741811;
  if ( !*((_DWORD *)InteractiveControlManager::Instance(v4, v3) + 67) )
    return 0;
  v7 = (_DWORD *)Win32AllocPoolZInit(24LL, 1819440195LL);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  v9 = v7 + 4;
  *v7 = 2;
  v7[4] = 1;
  v10 = (__int64 *)(v7 + 2);
  v11 = Win32AllocPoolZInit(24LL, 1819440195LL);
  *v10 = v11;
  if ( UserHandedness == 1 )
  {
    if ( v11 )
    {
      v14 = InteractiveControlManager::Instance(v13, v12);
      v15 = (_DWORD *)*v10;
      *v15 = *((_DWORD *)v14 + 73);
      *(_DWORD *)(*v10 + 4) = *((_DWORD *)InteractiveControlManager::Instance((__int64)v15, v16) + 75);
      *(_DWORD *)(*v10 + 16) = 1;
      v17 = Win32AllocPoolZInit(8LL * *(unsigned int *)(*v10 + 16), 1819440195LL);
      v19 = *v10;
      *(_QWORD *)(*v10 + 8) = v17;
      if ( *(_QWORD *)(*v10 + 8) )
      {
        v20 = 100 * *((_DWORD *)InteractiveControlManager::Instance(v19, v18) + 77);
        **(_DWORD **)(*v10 + 8) = 0;
        v21 = *(_QWORD *)(*v10 + 8);
        v22 = 1;
LABEL_15:
        *(_DWORD *)(v21 + 4) = v20;
        *((_DWORD *)this + 84) = v22;
        v6 = RIMCreatePointerDeviceDeadzone(v1 + 72, v8, (char *)this + 344);
        goto LABEL_16;
      }
    }
  }
  else if ( v11 )
  {
    v23 = InteractiveControlManager::Instance(v13, v12);
    v24 = (_DWORD *)*v10;
    *v24 = *((_DWORD *)v23 + 69);
    *(_DWORD *)(*v10 + 4) = *((_DWORD *)InteractiveControlManager::Instance((__int64)v24, v25) + 71);
    *(_DWORD *)(*v10 + 16) = 1;
    v26 = Win32AllocPoolZInit(8LL * *(unsigned int *)(*v10 + 16), 1819440195LL);
    v28 = *v10;
    *(_QWORD *)(*v10 + 8) = v26;
    if ( *(_QWORD *)(*v10 + 8) )
    {
      v20 = 100 * *((_DWORD *)InteractiveControlManager::Instance(v28, v27) + 77);
      **(_DWORD **)(*v10 + 8) = 0;
      v21 = *(_QWORD *)(*v10 + 8);
      v22 = 0;
      goto LABEL_15;
    }
  }
  v6 = -1073741670;
LABEL_16:
  v29 = (void **)v10;
  v30 = v10;
  if ( *v10 )
  {
    for ( i = 0LL; (unsigned int)i < *v9; i = (unsigned int)(i + 1) )
    {
      v32 = *(void **)(*v30 + 24 * i + 8);
      if ( v32 )
      {
        Win32FreePool(v32);
        *(_QWORD *)(*v30 + 24 * i + 8) = 0LL;
      }
    }
    Win32FreePool(*v29);
    *v29 = 0LL;
  }
  Win32FreePool(v8);
  return v6;
}
