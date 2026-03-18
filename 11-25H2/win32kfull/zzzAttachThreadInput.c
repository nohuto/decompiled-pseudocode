/*
 * XREFs of zzzAttachThreadInput @ 0x1401E910C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     NtUserAttachThreadInput @ 0x1401E8FE0 (NtUserAttachThreadInput.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14025D7D0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B5DE8 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1402454F8 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rbp
  const struct tagUIPI_INFO *v9; // r8
  int v10; // r14d
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  const struct tagUIPI_INFO *v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // rdx
  __int64 UserSessionState; // rax
  __int64 *i; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-28h] BYREF
  int v35; // [rsp+38h] [rbp-20h]

  v8 = PtiCurrent(a1, a2);
  v10 = a3 & 1;
  v11 = a3 & 0x8000;
  if ( (a3 & 0x4000) == 0 || (v12 = 1, v10) )
    v12 = 0;
  if ( a1 != a2 )
  {
    if ( !v11 )
    {
      v13 = *(_QWORD *)(a2 + 464);
      if ( v13 != *(_QWORD *)(a1 + 464) || *((_QWORD *)v8 + 58) != v13 )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 58) + 864LL),
                (const struct tagUIPI_INFO *)(*(_QWORD *)(a2 + 472) + 448LL),
                v9)
          && *(int *)(*((_QWORD *)v8 + 58) + 12LL) >= 0 )
        {
          v15 = *(_QWORD *)(a2 + 472);
          v16 = a2;
LABEL_11:
          v17 = *(_DWORD *)(v15 + 456);
          v34 = *(_QWORD *)(v15 + 448);
          v35 = v17;
          EtwTraceUIPIInputError(v8, v16, v15, &v34, 2);
          return 3221225506LL;
        }
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 58) + 864LL),
                (const struct tagUIPI_INFO *)(*(_QWORD *)(a1 + 472) + 448LL),
                v14)
          && *(int *)(*((_QWORD *)v8 + 58) + 12LL) >= 0
          || (unsigned int)IsDesktopApp(*((_QWORD *)v8 + 58), v19)
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 464))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 464)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(v8)
          && (v7 = *(unsigned int *)(*((_QWORD *)v8 + 58) + 808LL), (v7 & 0x100) == 0) )
        {
          v15 = *(_QWORD *)(a1 + 472);
          v16 = a1;
          goto LABEL_11;
        }
      }
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 528), 0, 0) & 0x40) != 0
      || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x40) != 0
      || *(_QWORD *)(a2 + 496) != *(_QWORD *)(a1 + 496) )
    {
      return 3221225506LL;
    }
    UserSessionState = W32GetUserSessionState(v7, v6);
    if ( v10 )
    {
      for ( i = *(__int64 **)(UserSessionState + 16904); ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v23 = Win32AllocPoolZInit(32LL, 1767994197LL);
          v26 = (_QWORD *)v23;
          if ( !v23 )
            return 3221225495LL;
          *(_QWORD *)(v23 + 8) = a1;
          *(_QWORD *)(v23 + 16) = a2;
          *(_DWORD *)(v23 + 24) = 1;
          v28 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 16904);
          *v26 = v28;
          *(_QWORD *)(W32GetUserSessionState(v28, v29) + 16904) = v26;
          goto LABEL_48;
        }
        v22 = i[2];
        if ( v22 == a2 && i[1] == a1 )
          break;
        if ( v22 == a1 && i[1] == a2 )
          break;
      }
      v27 = *((_DWORD *)i + 6);
      if ( v27 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v27 + 1;
      return 0LL;
    }
    v30 = UserSessionState + 16904;
    v31 = *(_QWORD *)(UserSessionState + 16904);
    if ( v31 )
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(v31 + 16);
        if ( v32 == a2 && *(_QWORD *)(v31 + 8) == a1 )
          break;
        if ( v32 == a1 && *(_QWORD *)(v31 + 8) == a2 )
          break;
        v30 = v31;
        v31 = *(_QWORD *)v31;
        if ( !v31 )
          return 3221225485LL;
      }
      --*(_DWORD *)(v31 + 24);
      v33 = *(_QWORD **)v30;
      if ( !*(_DWORD *)(*(_QWORD *)v30 + 24LL) || v12 )
      {
        *(_QWORD *)v30 = *v33;
        Win32FreePool(v33);
LABEL_48:
        *(_QWORD *)(a2 + 1360) |= 0x200uLL;
        *(_QWORD *)(a1 + 1360) |= 0x200uLL;
        if ( _bittest64((const signed __int64 *)(a1 + 1360), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a1 + 768), 1, 0);
        if ( (*(_DWORD *)(a2 + 1360) & 0x400LL) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 768), 1, 0);
        zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
