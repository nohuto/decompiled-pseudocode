/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140039BA4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     FixupGlobalCursor @ 0x14003AC90 (FixupGlobalCursor.c)
 *     HMChangeOwnerPheProcessWorker @ 0x14003ACDC (HMChangeOwnerPheProcessWorker.c)
 *     ?FlushCaptionCacheForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14003AFA0 (-FlushCaptionCacheForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     GreGetObjectOwner @ 0x1400BC740 (GreGetObjectOwner.c)
 *     StopFade @ 0x14023F2EC (StopFade.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  __int64 UserGdiSessionState; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 *v19; // rsi
  __int64 v20; // rcx
  void *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int (*v25)(void); // rax
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64); // rax
  unsigned int CurrentProcessId; // ebx

  UserGdiSessionState = W32GetUserGdiSessionState();
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(UserGdiSessionState + 40);
  UserSessionState = W32GetUserSessionState(v6, v5);
  if ( *(_QWORD *)(UserSessionState + 43000) )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(UserSessionState + 42992), 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade();
  }
  FlushCaptionCacheForProcess(a1);
  v10 = W32GetUserSessionState(v9, v8);
  v11 = *(_QWORD *)(v10 + 19888);
  v14 = v11 + 32LL * *(unsigned int *)(W32GetUserSessionState(v13, v12) + 19816);
  v17 = W32GetUserSessionState(v16, v15);
  v18 = *(_QWORD *)(v10 + 19888);
  v19 = *(__int64 **)(v17 + 19832);
  while ( v18 <= v14 )
  {
    v20 = *(unsigned __int8 *)(v18 + 24);
    if ( (_BYTE)v20 )
    {
      v21 = &unk_14024703C;
      if ( (*((_BYTE *)&unk_14024703C + 24 * v20) & 2) != 0 && (struct tagPROCESSINFO *)v19[1] == a1 )
      {
        if ( v3 == v4 && (_BYTE)v20 == 3 )
          FixupGlobalCursor(*v19, a1);
        if ( (*(_BYTE *)(v18 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v18, (__int64)v21);
        if ( *(_BYTE *)(v18 + 24) && *(_QWORD *)(W32GetUserSessionState(v20, v21) + 18648) )
        {
          if ( *(_BYTE *)(v18 + 24) == 3 )
          {
            v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3056LL);
            if ( v25 && v25() >= 0 )
            {
              v26 = *v19;
              v27 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3064LL);
              if ( v27 )
                v27(v26);
            }
          }
          else
          {
            v24 = W32GetUserSessionState(v23, v22);
            HMChangeOwnerPheProcessWorker(v18, *(_QWORD *)(v24 + 18648));
          }
        }
      }
    }
    v18 += 32LL;
    v19 += 5;
  }
}
