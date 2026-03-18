/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1400D02B8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     GreGetObjectOwner @ 0x1400C5980 (GreGetObjectOwner.c)
 *     FixupGlobalCursor @ 0x1400CFEE0 (FixupGlobalCursor.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1400CFF28 (HMChangeOwnerPheProcessWorker.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     StopFade @ 0x1402494D8 (StopFade.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  __int64 UserGdiSessionState; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  __int64 UserSessionState; // rdi
  int v11; // r8d
  __int64 v12; // rdi
  int v13; // edx
  int v14; // ecx
  __int64 *v15; // rbx
  int v16; // r8d
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  unsigned __int64 v22; // rbp
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rax
  int v27; // r8d
  unsigned __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rcx
  void *v31; // rdx
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int (*v36)(void); // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  void (__fastcall *v39)(__int64); // rax
  unsigned __int64 v40; // rbx

  UserGdiSessionState = W32GetUserGdiSessionState();
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(UserGdiSessionState + 40);
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  if ( *(_QWORD *)(UserSessionState + 43024) )
  {
    v40 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(UserSessionState + 43016), 1) == (_DWORD)v40 )
      StopFade();
  }
  v12 = 5LL;
  v15 = (__int64 *)(W32GetUserSessionState(v9, v8, v11) + 43160);
  do
  {
    if ( *v15 && *(struct tagPROCESSINFO **)(*v15 + 24) == a1 )
      HMAssignmentUnlock(v15);
    v15 += 2;
    --v12;
  }
  while ( v12 );
  v17 = W32GetUserSessionState(v14, v13, v16);
  v18 = *(_QWORD *)(v17 + 19920);
  v22 = v18 + 32LL * *(unsigned int *)(W32GetUserSessionState(v20, v19, v21) + 19848);
  v26 = W32GetUserSessionState(v24, v23, v25);
  v28 = *(_QWORD *)(v17 + 19920);
  v29 = *(_QWORD *)(v26 + 19864);
  while ( v28 <= v22 )
  {
    v30 = *(unsigned __int8 *)(v28 + 24);
    if ( (_BYTE)v30 )
    {
      v31 = &unk_14025552C;
      if ( (*((_BYTE *)&unk_14025552C + 24 * v30) & 2) != 0 && *(struct tagPROCESSINFO **)(v29 + 8) == a1 )
      {
        if ( v3 == v4 && (_BYTE)v30 == 3 )
          FixupGlobalCursor(*(_QWORD *)v29, (__int64)a1);
        if ( (*(_BYTE *)(v28 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v28);
        if ( *(_BYTE *)(v28 + 24) && *(_QWORD *)(W32GetUserSessionState(v30, (_DWORD)v31, v27) + 18696) )
        {
          if ( *(_BYTE *)(v28 + 24) == 3 )
          {
            v36 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v33) + 48) + 2672LL);
            if ( v36 && v36() >= 0 )
            {
              v38 = *(_QWORD *)v29;
              v39 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48) + 2680LL);
              if ( v39 )
                v39(v38);
            }
          }
          else
          {
            v34 = W32GetUserSessionState(v33, v32, v27);
            HMChangeOwnerPheProcessWorker(v28, *(_QWORD *)(v34 + 18696), v35);
          }
        }
      }
    }
    v28 += 32LL;
    v29 += 40LL;
  }
}
