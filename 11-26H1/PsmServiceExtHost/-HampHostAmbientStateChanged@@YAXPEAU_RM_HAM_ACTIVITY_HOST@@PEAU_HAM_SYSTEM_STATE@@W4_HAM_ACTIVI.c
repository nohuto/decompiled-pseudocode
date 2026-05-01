/*
 * XREFs of ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x180078B64
 * Callers:
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007C460 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18008AC30 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampHostAmbientStateChanged(struct _RM_HAM_ACTIVITY_HOST *a1, _BYTE *a2, unsigned int a3)
{
  struct _HAM_ACTIVITY *FirstActivity; // rdi
  struct _HAM_ACTIVITY *v7; // rbx
  int *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // cl
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v15; // rcx
  int i; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    FirstActivity = HampHostGetFirstActivity(a1);
    v7 = FirstActivity;
    if ( !FirstActivity )
      break;
    while ( 1 )
    {
      v8 = (int *)((char *)v7 + 552);
      if ( (*((_BYTE *)v7 + 552) & 1) != 0 )
        break;
      v9 = *((_QWORD *)v7 + 12);
      v10 = *((_QWORD *)v7 + 10);
      v7 = 0LL;
      if ( v9 != v10 + 608 )
        v7 = (struct _HAM_ACTIVITY *)(v9 - 96);
      if ( !v7 )
        goto LABEL_6;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v7 + 3) <= 1 )
      __fastfail(0xEu);
    HampHostReleaseLockExclusive(a1);
    for ( i = 0; ; RtlWaitOnAddress((char *)v7 + 552, &i, 4LL) )
    {
      HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v7 + 10), 0);
      v15 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v7 + 10);
      if ( (*v8 & 1) == 0 )
        break;
      i = *v8;
      HampHostReleaseLockSharedEx(v15);
    }
    HampHostReleaseLockSharedEx(v15);
    CemRcObjectDereference(v7);
  }
LABEL_6:
  while ( FirstActivity )
  {
    v11 = *((_BYTE *)FirstActivity + 562);
    v12 = 0;
    if ( v11 == 2 || v11 == 3 )
    {
      if ( (*a2 & 1) != 0 && (*((_BYTE *)FirstActivity + 120) & 2) != 0 )
        v12 = 2;
      if ( (*a2 & 2) != 0 && (*((_BYTE *)FirstActivity + 120) & 1) != 0 )
        v12 |= 1u;
      if ( (*((_DWORD *)FirstActivity + 28) & 0x8000) != 0 && a3 == 8 )
        v12 |= 0x80u;
      if ( v12 )
        HampActRequestStopEx((__int64)FirstActivity, 1u, a3, 0LL, 6912, v12, 0LL);
    }
    v13 = *((_QWORD *)FirstActivity + 12);
    v14 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v13 != v14 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v13 - 96);
  }
  HampHostReleaseLockExclusive(a1);
}
