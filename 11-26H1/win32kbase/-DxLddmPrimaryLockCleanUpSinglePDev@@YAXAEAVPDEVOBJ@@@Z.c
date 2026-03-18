/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z @ 0x1401B6D9C
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z @ 0x14010246C (-DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vSpUnTearDownSprites @ 0x140248D5C (vSpUnTearDownSprites.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbp
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // rcx
  __int64 SessionState; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // r8d

  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  GrepLockVisRgn(v2, v3, v4);
  SessionState = W32GetSessionState(v5);
  GreAcquireSemaphore<6,>(*(struct _ERESOURCE ***)(SessionState + 88), v7, v8);
  GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)a1, v9, v10);
  v14 = (_QWORD *)(*(_QWORD *)a1 + 2616LL);
  v15 = (_QWORD *)*v14;
  while ( v15 != v14 )
  {
    v16 = v15;
    v15 = (_QWORD *)*v15;
    if ( (_QWORD *)v15[1] != v16 || (v17 = (_QWORD *)v16[1], (_QWORD *)*v17 != v16) )
      __fastfail(3u);
    *v17 = v15;
    v15[1] = v17;
    v18 = *((_DWORD *)v16 + 5);
    if ( v18 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2632LL) -= v18;
      vSpUnTearDownSprites(*(_QWORD *)a1, (char *)v16 + 28);
    }
    GreDeleteFastMutex((char *)v16, v11, v12, v13);
  }
  GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)a1, v11, v12);
  v20 = W32GetSessionState(v19);
  GreReleaseSemaphoreExclusive<6,>(*(struct _ERESOURCE ***)(v20 + 88), v21, v22);
  GrepUnlockVisRgn((struct _ERESOURCE **)v2, v23, v24);
}
