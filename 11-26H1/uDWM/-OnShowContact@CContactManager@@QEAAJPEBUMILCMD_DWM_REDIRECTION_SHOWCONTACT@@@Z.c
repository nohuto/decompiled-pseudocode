/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18005EA9C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18005ECAC (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18005ECD4 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18005ED6C (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800796A4 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800AE504 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CIndirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800B8ADC (-UpdateShowContact@CIndirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  unsigned int v4; // r15d
  int v5; // r9d
  int v6; // r10d
  unsigned int i; // r8d
  __int64 j; // r8
  __int64 v9; // rcx
  CPenBarrelKeyVisual *v11; // rcx
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  CContactManager *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  CContactManager *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // r14
  __int64 v23; // rcx

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
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 28); j = (unsigned int)(j + 1) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * j) == *((_DWORD *)a2 + 1) )
    {
      v6 = j;
      break;
    }
  }
  if ( v5 < 0 )
  {
    if ( v6 >= 0 )
    {
      v4 = 0;
      *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v6 + 24) = *((_DWORD *)a2 + 2);
      v11 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v6 + 8);
      if ( v11 )
        CPenBarrelKeyVisual::ShowBarrel(v11, (*((_DWORD *)a2 + 2) & 0x10) != 0);
    }
    goto LABEL_7;
  }
  v4 = 0;
  v12 = (unsigned int *)((char *)a2 + 8);
  v13 = 104LL * (unsigned int)v5;
  v14 = (CContactManager *)*((_QWORD *)this + 7);
  *(_DWORD *)((char *)v14 + v13 + 40) = *((_DWORD *)a2 + 2);
  v15 = *((_QWORD *)this + 7);
  if ( *((_BYTE *)this + 324) )
  {
    v20 = *(_QWORD *)(v15 + v13 + 48);
    if ( v20 )
      CDirectTouchVisual::UpdateShowContact(v20, 4294967291LL);
    v18 = *(_QWORD *)(*((_QWORD *)this + 7) + v13 + 56);
    if ( v18 )
    {
      v19 = 4294967291LL;
      goto LABEL_19;
    }
  }
  else
  {
    v16 = *v12;
    if ( (_DWORD)v16 )
    {
      v21 = *(_QWORD *)(v13 + v15 + 48);
      v22 = (char *)a2 + 8;
      if ( v21 )
      {
        CDirectTouchVisual::UpdateShowContact(v21, v16);
        v16 = *v12;
        v22 = (char *)a2 + 8;
      }
      v23 = *(_QWORD *)(*((_QWORD *)this + 7) + v13 + 80);
      if ( v23 )
      {
        CTouchDragVisual::UpdateShowContact(v23, v16);
        v12 = (unsigned int *)v22;
      }
    }
    else
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v14, *(struct CTouchVisual **)(v13 + v15 + 48));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
        v17,
        *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v13 + 80));
      *(_QWORD *)(*((_QWORD *)this + 7) + v13 + 48) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 7) + v13 + 80) = 0LL;
    }
    v18 = *(_QWORD *)(*((_QWORD *)this + 7) + v13 + 56);
    if ( v18 )
    {
      v19 = *v12;
LABEL_19:
      CIndirectTouchVisual::UpdateShowContact(v18, v19);
    }
  }
LABEL_7:
  if ( !(unsigned __int8)CContactManager::CheckShowContact(this, *((unsigned int *)a2 + 2), 2LL) )
    CContactManager::CancelStationaryAnimation(v9, *((unsigned int *)a2 + 1));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
