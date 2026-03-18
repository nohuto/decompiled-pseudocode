/*
 * XREFs of ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402ECFCC
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EDA30 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x140204B90 (GetUserHandedness.c)
 */

__int64 __fastcall InteractiveControlDevice::CreateDeadzone(InteractiveControlDevice *this)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int UserHandedness; // ebp
  unsigned int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct InteractiveControlManager *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  struct InteractiveControlManager *v22; // rax
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 i; // rsi
  void *v29; // rcx

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
  *v7 = 2;
  v7[4] = 1;
  v9 = Win32AllocPoolZInit(24LL, 1819440195LL);
  *((_QWORD *)v8 + 1) = v9;
  if ( UserHandedness == 1 )
  {
    if ( v9 )
    {
      v12 = InteractiveControlManager::Instance(v11, v10);
      v13 = (_DWORD *)*((_QWORD *)v8 + 1);
      *v13 = *((_DWORD *)v12 + 73);
      *(_DWORD *)(*((_QWORD *)v8 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance((__int64)v13, v14) + 75);
      *(_DWORD *)(*((_QWORD *)v8 + 1) + 16LL) = 1;
      v15 = Win32AllocPoolZInit(8LL * *(unsigned int *)(*((_QWORD *)v8 + 1) + 16LL), 1819440195LL);
      v17 = *((_QWORD *)v8 + 1);
      *(_QWORD *)(v17 + 8) = v15;
      if ( *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) )
      {
        v18 = *((_DWORD *)InteractiveControlManager::Instance(v17, v16) + 77);
        **(_DWORD **)(*((_QWORD *)v8 + 1) + 8LL) = 0;
        v19 = 100 * v18;
        v20 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL);
        v21 = 1;
LABEL_15:
        *(_DWORD *)(v20 + 4) = v19;
        *((_DWORD *)this + 84) = v21;
        v6 = RIMCreatePointerDeviceDeadzone(v1 + 72, v8, (char *)this + 344);
        goto LABEL_16;
      }
    }
  }
  else if ( v9 )
  {
    v22 = InteractiveControlManager::Instance(v11, v10);
    v23 = (_DWORD *)*((_QWORD *)v8 + 1);
    *v23 = *((_DWORD *)v22 + 69);
    *(_DWORD *)(*((_QWORD *)v8 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance((__int64)v23, v24) + 71);
    *(_DWORD *)(*((_QWORD *)v8 + 1) + 16LL) = 1;
    v25 = Win32AllocPoolZInit(8LL * *(unsigned int *)(*((_QWORD *)v8 + 1) + 16LL), 1819440195LL);
    v27 = *((_QWORD *)v8 + 1);
    *(_QWORD *)(v27 + 8) = v25;
    if ( *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) )
    {
      v19 = 100 * *((_DWORD *)InteractiveControlManager::Instance(v27, v26) + 77);
      **(_DWORD **)(*((_QWORD *)v8 + 1) + 8LL) = 0;
      v20 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL);
      v21 = 0;
      goto LABEL_15;
    }
  }
  v6 = -1073741670;
LABEL_16:
  if ( *((_QWORD *)v8 + 1) )
  {
    for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
    {
      v29 = *(void **)(*((_QWORD *)v8 + 1) + 24 * i + 8);
      if ( v29 )
      {
        Win32FreePool(v29);
        *(_QWORD *)(*((_QWORD *)v8 + 1) + 24 * i + 8) = 0LL;
      }
    }
    Win32FreePool(*((void **)v8 + 1));
    *((_QWORD *)v8 + 1) = 0LL;
  }
  Win32FreePool(v8);
  return v6;
}
