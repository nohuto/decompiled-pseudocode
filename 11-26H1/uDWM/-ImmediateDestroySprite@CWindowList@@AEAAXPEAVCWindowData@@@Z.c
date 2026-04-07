/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20
 * Callers:
 *     ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x18001AEB0 (-DestroyPendingSprites@CWindowList@@QEAAXXZ.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180042F10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800180D0 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180019094 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z @ 0x180019114 (-ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001912C (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003B930 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rdx
  struct CWindowData *v8; // rax
  struct CWindowData **v9; // rcx
  char *v10; // r14
  char *v11; // r15
  char v12; // r12
  __int64 *v13; // rax
  CVisual **v14; // rsi
  CTopLevelWindow *v15; // rcx
  char v16; // r15
  char v17; // al
  CVisual *v18; // rcx
  CVisual *v19; // rcx
  _QWORD *v20; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+30h] [rbp-50h]
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  char v26; // [rsp+68h] [rbp-18h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  struct CWindowData *Buffer; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = *((_DWORD *)this + 76);
  v6 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    do
    {
      if ( a2 == *(struct CWindowData **)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 < v5 )
  {
    if ( (unsigned int)v4 < v5 - 1 )
    {
      do
      {
        v7 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8 * v7);
        v4 = v7;
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 76) - 1 );
    }
    --*((_DWORD *)this + 76);
  }
  v8 = *(struct CWindowData **)a2;
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v9 = (struct CWindowData **)*((_QWORD *)a2 + 1), *v9 != a2) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  v10 = (char *)a2 + 736;
  *((_QWORD *)v8 + 1) = v9;
  v11 = (char *)a2 + 736;
  v12 = *((_BYTE *)a2 + 736);
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  if ( (v12 & 4) != 0 )
  {
    Buffer = a2;
    v13 = (__int64 *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &Buffer);
    if ( v13 )
    {
      v29 = *v13;
      if ( !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &v29) )
      {
        RaiseFailFastException(0LL, 0LL, 1u);
        v11 = (char *)a2 + 736;
      }
    }
    *v10 &= ~4u;
  }
  v14 = (CVisual **)((char *)a2 + 440);
  v15 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v15 )
  {
    CTopLevelWindow::ForceShowWindow(v15, 0);
    v10 = v11;
  }
  v16 = *v10;
  v17 = *v10;
  *((_QWORD *)a2 + 4) = 0LL;
  *v10 = v17 & 0xFE;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( (v16 & 1) != 0 )
    {
      if ( *((_DWORD *)a2 + 32) == 1 || (v12 & 4) == 0 )
        CWindowList::ShowHide(this, a2, 1);
      v14 = (CVisual **)((char *)a2 + 440);
    }
    else
    {
      CWindowData::OnVisibilityUpdated((CWindowData **)a2);
    }
  }
  v18 = (CVisual *)*((_QWORD *)a2 + 56);
  if ( v18 )
    CVisual::RemoveSelfFromParent(v18);
  v19 = *v14;
  if ( *v14 )
    CVisual::RemoveSelfFromParent(v19);
  *((_BYTE *)a2 + 737) &= ~0x20u;
  CWindowList::OnGDISurfaceChange(v19, a2);
  v21[0] = *((_QWORD *)a2 + 17);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v21[1] = 0LL;
  v25 = -1LL;
  v26 = 0;
  v20 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v21);
  if ( v20 )
    v20 = (_QWORD *)v20[8];
  if ( *((_QWORD **)a2 + 5) == v20 )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
