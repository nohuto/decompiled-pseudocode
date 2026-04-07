/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180070CC0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002AFAC (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x180070ED8 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180070F00 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x180070F98 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18008A690 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800AEC50 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CIndirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800B9BC0 (-UpdateShowContact@CIndirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  unsigned int v4; // r15d
  int v5; // r10d
  int v6; // r11d
  unsigned int i; // r8d
  __int64 v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rcx
  CPenBarrelKeyVisual *v12; // rcx
  unsigned int *v13; // rsi
  CContactManager *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  CContactManager *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char *v23; // r14
  __int64 v24; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2147024809;
  v5 = -1;
  v6 = -1;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( *(_DWORD *)(104LL * i + *((_QWORD *)this + 7)) == *((_DWORD *)a2 + 1) )
    {
      v5 = i;
      break;
    }
  }
  v8 = 0LL;
  v9 = (_QWORD *)((char *)this + 88);
  while ( (unsigned int)v8 < *((_DWORD *)this + 28) )
  {
    v9 = (_QWORD *)((char *)this + 88);
    if ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * v8) == *((_DWORD *)a2 + 1) )
    {
      v6 = v8;
      break;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  if ( v5 < 0 )
  {
    if ( v6 >= 0 )
    {
      v4 = 0;
      *(_DWORD *)(*v9 + 40LL * (unsigned int)v6 + 24) = *((_DWORD *)a2 + 2);
      v12 = *(CPenBarrelKeyVisual **)(*v9 + 40LL * (unsigned int)v6 + 8);
      if ( v12 )
        CPenBarrelKeyVisual::ShowBarrel(v12, (*((_DWORD *)a2 + 2) & 0x10) != 0);
    }
    goto LABEL_7;
  }
  v4 = 0;
  v13 = (unsigned int *)((char *)a2 + 8);
  v14 = (CContactManager *)*((unsigned int *)a2 + 2);
  v15 = 104LL * (unsigned int)v5;
  *(_DWORD *)(v15 + *((_QWORD *)this + 7) + 40) = (_DWORD)v14;
  v16 = *((_QWORD *)this + 7);
  if ( *((_BYTE *)this + 324) )
  {
    v21 = *(_QWORD *)(v15 + v16 + 48);
    if ( v21 )
      CDirectTouchVisual::UpdateShowContact(v21, 4294967291LL, v8, v9);
    v19 = *(_QWORD *)(*((_QWORD *)this + 7) + v15 + 56);
    if ( v19 )
    {
      v20 = 4294967291LL;
      goto LABEL_19;
    }
  }
  else
  {
    v17 = *v13;
    if ( (_DWORD)v17 )
    {
      v22 = *(_QWORD *)(v15 + v16 + 48);
      v23 = (char *)a2 + 8;
      if ( v22 )
      {
        CDirectTouchVisual::UpdateShowContact(v22, v17, v8, v9);
        v17 = *v13;
        v23 = (char *)a2 + 8;
      }
      v24 = *(_QWORD *)(*((_QWORD *)this + 7) + v15 + 80);
      if ( v24 )
      {
        CTouchDragVisual::UpdateShowContact(v24, v17);
        v13 = (unsigned int *)v23;
      }
    }
    else
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v14, *(struct CTouchVisual **)(v15 + v16 + 48));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
        v18,
        *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v15 + 80));
      *(_QWORD *)(*((_QWORD *)this + 7) + v15 + 48) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 7) + v15 + 80) = 0LL;
    }
    v19 = *(_QWORD *)(*((_QWORD *)this + 7) + v15 + 56);
    if ( v19 )
    {
      v20 = *v13;
LABEL_19:
      CIndirectTouchVisual::UpdateShowContact(v19, v20);
    }
  }
LABEL_7:
  if ( !(unsigned __int8)CContactManager::CheckShowContact(this, *((unsigned int *)a2 + 2), 2LL) )
    CContactManager::CancelStationaryAnimation(v10, *((unsigned int *)a2 + 1));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
