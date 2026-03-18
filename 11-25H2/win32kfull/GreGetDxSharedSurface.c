/*
 * XREFs of GreGetDxSharedSurface @ 0x14009D7B0
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x14009BBB0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14009D200 (NtUserHwndQueryRedirectionInfo.c)
 *     ?GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z @ 0x1402874B8 (-GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14009DBE4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x14009DCF0 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(Gre::Base *a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // ebp
  Gre::Base *v11; // rcx
  HSEMAPHORE v12; // r13
  Gre::Base *v13; // rcx
  Gre::Base *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  struct Gre::Base::SESSION_GLOBALS *v17; // rbp
  struct W32_PUSH_LOCK *v18; // rbx
  _QWORD *v19; // rax
  Gre::Base *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rbp
  struct W32_PUSH_LOCK *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rcx
  struct _GRETHREAD *v38; // rax
  __int64 v41; // r14
  _QWORD Buffer[10]; // [rsp+28h] [rbp-50h] BYREF

  v10 = -1071775733;
  if ( !*((_QWORD *)Gre::Base::Globals(a1) + 17) )
    return v10;
  v12 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v11) + 520LL);
  GreAcquireSemaphoreSharedInternal(v12);
  GrepAcquireLockValidate<7>();
  if ( !*((_QWORD *)Gre::Base::Globals(v13) + 17) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
    goto LABEL_37;
  v15 = 0LL;
  if ( a1 )
  {
    Buffer[1] = 0LL;
    v16 = 0LL;
    Buffer[0] = a1;
    v17 = Gre::Base::Globals(v14);
    v18 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v17 + 17) + 72LL);
    if ( *((_QWORD *)v17 + 17) != -72LL )
      GreAcquirePushLockExclusive(v18);
    v19 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v17 + 17), Buffer);
    if ( v19 )
      v16 = v19[1];
    if ( v18 )
      GreReleasePushLockExclusive(v18);
    if ( v16 )
    {
      Gre::Base::Globals(v20);
      LOBYTE(v21) = 15;
      v22 = HmgShareLockCheck(v16, v21);
      v15 = v22;
      if ( v22 )
      {
        v27 = *(_QWORD *)(v22 + 144);
        v28 = (struct W32_PUSH_LOCK *)(v22 + 88);
        if ( v22 != -88 )
          GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v22 + 88));
        v26 = v15;
        if ( !*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v24, v23, v25) + 96) + 92LL)
          || (v29 = *(_QWORD *)(v27 + 184)) == 0
          || (*(_DWORD *)(v29 + 92) & 1) == 0
          || (unsigned int)UserIsRemoteConnection() && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
        {
          *a2 = 0LL;
          v10 = -1073741822;
          *a4 = 87;
          *a5 = 1;
          *a6 = 0LL;
          *a3 = 0;
          a3[1] = 0;
          goto LABEL_34;
        }
        v30 = *(_QWORD *)(v27 + 192);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v27 + 184);
          if ( v31 && (*(_DWORD *)(v31 + 92) & 1) != 0 )
          {
            v32 = *(_QWORD *)(v31 + 552);
            v33 = (__int64 *)(v27 + 200);
          }
          else
          {
            v33 = (__int64 *)(v27 + 200);
            v32 = *(_QWORD *)(v27 + 200);
          }
          v26 = v15;
          if ( (*a5 & 4) != 0 && (*(_DWORD *)(v27 + 244) & 0x100) == 0 && v32 != *(_QWORD *)a3 )
            goto LABEL_51;
          *a2 = v30;
          *a4 = *(_DWORD *)(v27 + 208);
          *a5 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v27);
          v34 = *(_QWORD *)(v27 + 184);
          if ( v34 && (*(_DWORD *)(v34 + 92) & 1) != 0 )
            v33 = (__int64 *)(v34 + 552);
          v35 = *v33;
        }
        else
        {
          v26 = v15;
          v41 = *(_QWORD *)(v27 + 184);
          if ( (*a5 & 4) != 0 && (*(_DWORD *)(v41 + 92) & 0x400) == 0 && *(_QWORD *)(v41 + 552) != *(_QWORD *)a3 )
          {
LABEL_51:
            v10 = -1071775484;
            goto LABEL_34;
          }
          *a2 = *(_QWORD *)(v41 + 544);
          *a4 = 87;
          *a5 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v27);
          v35 = *(_QWORD *)(v41 + 552);
        }
        *(_QWORD *)a3 = v35;
        v36 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v27);
        v37 = *(unsigned int *)(*(_QWORD *)(v27 + 184) + 68LL);
        if ( (v36 & 2) != 0 )
          v37 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v37;
LABEL_34:
        if ( v28 )
        {
          GreReleasePushLockShared(v28);
LABEL_36:
          DEC_SHARE_REF_CNT(v26);
          goto LABEL_37;
        }
        goto LABEL_14;
      }
    }
  }
  v26 = v15;
  v10 = -1073741811;
LABEL_14:
  if ( v26 )
    goto LABEL_36;
LABEL_37:
  EtwTraceGreLockReleaseSemaphore(L"DwmState", v12);
  v38 = GreGetCurrentThreadCrossSessionCheck();
  if ( v38 )
  {
    if ( (*((_BYTE *)v38 + 15))-- == 1 )
      *(_QWORD *)v38 &= ~0x80uLL;
    if ( !*(_QWORD *)v38 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v12);
  return v10;
}
