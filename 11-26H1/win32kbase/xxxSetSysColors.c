/*
 * XREFs of xxxSetSysColors @ 0x1401B7328
 * Callers:
 *     ?ResetSystemColors@@YAXXZ @ 0x14007F318 (-ResetSystemColors@@YAXXZ.c)
 *     xxxODI_ColorInit @ 0x1400E0F30 (xxxODI_ColorInit.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsCreateBitmapStripSupported @ 0x14007F288 (IsCreateBitmapStripSupported.c)
 *     CreateBitmapStrip @ 0x140190818 (CreateBitmapStrip.c)
 *     xxxInternalInvalidate @ 0x1401936D4 (xxxInternalInvalidate.c)
 *     xxxSendNotifyMessage @ 0x140194BD0 (xxxSendNotifyMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, unsigned int a2, char *a3, unsigned int *a4, char a5)
{
  __int64 v6; // rbx
  char *v7; // r15
  unsigned int (__fastcall *v8)(__int64); // rax
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  char v12; // r14
  unsigned int *v13; // rdi
  __int64 v14; // r12
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  int (*v20)(void); // rax
  void (*v21)(void); // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int (*v24)(void); // rax
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rbx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rcx
  int v42; // r8d
  __int64 v43; // rcx
  int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rax

  v6 = a2;
  v7 = a3;
  if ( (a5 & 1) != 0 )
  {
    v8 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3144LL);
    if ( !v8 || !v8(16LL) )
      return 0LL;
  }
  UserSessionState = W32GetUserSessionState(a1, a2, (_DWORD)a3);
  v12 = a5 | 8;
  if ( (int)GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 56LL), 24) > 16 )
    v12 = a5;
  if ( (v12 & 4) != 0 )
  {
    if ( (_DWORD)v6 )
    {
      v13 = a4;
      v14 = v6;
      do
      {
        v15 = *(unsigned int *)((char *)v13 + v7 - (char *)a4);
        if ( v15 == 15 || v15 <= 0x14 && (v16 = 1114114, _bittest(&v16, v15)) )
          SetSysColor(v15, *v13, v12);
        ++v13;
        --v14;
      }
      while ( v14 );
      goto LABEL_17;
    }
  }
  else if ( (_DWORD)v6 )
  {
    do
    {
LABEL_17:
      v11 = *(unsigned int *)v7;
      v7 += 4;
      v17 = *a4++;
      if ( (unsigned int)v11 < 0x1F )
      {
        if ( (v12 & 4) == 0 || (unsigned int)v11 > 0x14 || (v18 = 1146882, !_bittest(&v18, v11)) )
          SetSysColor(v11, v17, v12);
      }
      --v6;
    }
    while ( v6 );
  }
  if ( (v12 & 1) != 0 )
  {
    v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48);
    v20 = *(int (**)(void))(v19 + 3152);
    if ( v20 )
    {
      if ( v20() >= 0 )
      {
        v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48);
        v21 = *(void (**)(void))(v19 + 3160);
        if ( v21 )
          v21();
      }
    }
    if ( (int)IsCreateBitmapStripSupported(v19) >= 0 )
      CreateBitmapStrip(v22);
    v23 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v22) + 48);
    v24 = *(int (**)(void))(v23 + 3168);
    if ( v24 && v24() >= 0 )
      xxxSendNotifyMessage(v23, 0x15u, 0LL);
    v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 48) + 3184LL);
    if ( v25 && v25() >= 0 )
    {
      if ( *((_QWORD *)PtiCurrent(v27, v26) + 61) )
        v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v29, v28) + 61) + 8LL) + 24LL);
      else
        v30 = 0LL;
      xxxInternalInvalidate(v30);
      v33 = PtiCurrent(v32, v31);
      v38 = *(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 19176);
      if ( *((_QWORD *)v33 + 61) != v38 )
      {
        v41 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 19176) + 8LL);
        if ( (*(_DWORD *)(v41 + 64) & 1) == 0 )
        {
          v43 = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 19176);
          v45 = *(_QWORD *)(v43 + 8);
          if ( *(_QWORD *)(v45 + 24) )
          {
            v46 = W32GetUserSessionState(v43, v45, v44);
            xxxInternalInvalidate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 19176) + 8LL) + 24LL));
          }
        }
      }
    }
  }
  return 1LL;
}
