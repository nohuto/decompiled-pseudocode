/*
 * XREFs of DestroyCacheDC @ 0x14016CCA0
 * Callers:
 *     DestroyCacheDCEntries @ 0x140046CF0 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     DestroyMonitorDCs @ 0x1400ABCF0 (DestroyMonitorDCs.c)
 *     DelayedDestroyCacheDC @ 0x1401371E0 (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089EAC (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F20 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F94 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 *     DeleteMaybeSpecialRgn @ 0x14008A8D0 (DeleteMaybeSpecialRgn.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     GreSelectRedirectionBitmap @ 0x1400E0E64 (GreSelectRedirectionBitmap.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1400E6BD8 (IsGreSelectRedirectionBitmapSupported.c)
 *     GreMarkDeletableRgn @ 0x1401087E0 (GreMarkDeletableRgn.c)
 *     GreMarkPendingDestroyDC @ 0x14011E2F8 (GreMarkPendingDestroyDC.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_DestroyCacheDCNoisyAssert__private_IsEnabledDeviceUsageNoInline @ 0x1401B6FD4 (Feature_DestroyCacheDCNoisyAssert__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DestroyCacheDC(_QWORD *Buffer, __int64 a2)
{
  _QWORD *i; // rbx
  unsigned int v4; // esi
  int v5; // ebp
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  unsigned __int64 v14; // rcx
  struct HOBJ__ *v15; // rcx
  struct HOBJ__ *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rax

  i = Buffer;
  v4 = 0;
  v5 = 0;
  if ( !Buffer )
  {
    UserSessionState = W32GetUserSessionState(0LL, a2);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    v5 = 1;
    Buffer = *(_QWORD **)(W32GetUserSessionState(v8, v7) + 56968);
    for ( i = (_QWORD *)Buffer[3]; ; i = (_QWORD *)*i )
    {
      Buffer = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(Buffer, a2) + 56968) + 24LL);
      if ( i == Buffer )
        break;
      if ( i[2] == a2 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( !i )
  {
LABEL_6:
    v9 = W32GetUserSessionState(Buffer, a2);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v9 + 56968) + 48LL));
    return 0LL;
  }
  v11 = *((_DWORD *)i + 12);
  v12 = v11 | 0x400000;
  v13 = v11 & 0x400000;
  *((_DWORD *)i + 12) = v12;
  if ( (v12 & 0x40000) == 0 )
  {
    v14 = i[3];
    if ( v14 > 2 )
      GreMarkDeletableRgn(v14);
    DeleteMaybeSpecialRgn((HBRUSH)i[3]);
    i[3] = 0LL;
  }
  v15 = (struct HOBJ__ *)i[4];
  if ( v15 )
  {
    GreDeleteObject(v15);
    i[4] = 0LL;
  }
  v16 = (struct HOBJ__ *)i[5];
  if ( v16 )
  {
    GreDeleteObject(v16);
    i[5] = 0LL;
  }
  if ( !GreSetDCOwnerEx((struct HOBJ__ *)i[2], 0x80000002, 1, 0) )
    goto LABEL_39;
  if ( (i[6] & 0x4000) == 0 )
    goto LABEL_29;
  if ( (unsigned int)Feature_DestroyCacheDCNoisyAssert__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v13 || i[12] )
      goto LABEL_26;
    v19 = 2109LL;
  }
  else
  {
    if ( gbIgnoreStressedOutStuff || i[12] )
      goto LABEL_26;
    v19 = 2113LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v19);
LABEL_26:
  if ( (int)IsGreSelectRedirectionBitmapSupported(v18, v17) >= 0 )
    GreSelectRedirectionBitmap(i[2], 0LL);
  *((_DWORD *)i + 12) &= ~0x4000u;
  tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
LABEL_29:
  if ( !(unsigned int)GrepDeleteDC((HDC)i[2], 0x400000u) )
  {
    GreSetDCOwnerEx((struct HOBJ__ *)i[2], 0x80000012, 1, 0);
LABEL_39:
    tagDCE::SetPwndOrg((tagDCE *)i, 0LL);
    tagDCE::SetPwndClip((tagDCE *)i, 0LL);
    tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
    v27 = i[2];
    i[9] = 0LL;
    GreMarkPendingDestroyDC(v27);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
    if ( CurrentProcessWin32Process )
    {
      v26 = -*(_QWORD *)CurrentProcessWin32Process;
      v25 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v25;
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_42;
  }
  if ( (i[6] & 0x1002) == 2 )
  {
    v22 = W32GetUserSessionState(v21, v20);
    --*(_DWORD *)(v22 + 19660);
  }
  tagDCE::SetPwndOrg((tagDCE *)i, 0LL);
  tagDCE::SetPwndClip((tagDCE *)i, 0LL);
  tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
  v23 = *i;
  if ( (_QWORD *)*i != i )
  {
    if ( *(_QWORD **)(v23 + 8) != i || (v24 = (_QWORD *)i[1], (_QWORD *)*v24 != i) )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
  }
  GreDeleteFastMutex((char *)i);
  v4 = 1;
LABEL_42:
  if ( v5 )
  {
    v30 = W32GetUserSessionState(v26, v25);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v30 + 56968) + 48LL));
  }
  return v4;
}
