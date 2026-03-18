/*
 * XREFs of DestroyCacheDC @ 0x1401D9EE0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     DestroyCacheDCEntries @ 0x14003B704 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     DestroyMonitorDCs @ 0x14007F970 (DestroyMonitorDCs.c)
 *     DelayedDestroyCacheDC @ 0x1401867E4 (DelayedDestroyCacheDC.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x14003AEDC (IsGreSelectRedirectionBitmapSupported.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     GreDereferenceObject @ 0x140055340 (GreDereferenceObject.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081E98 (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081F70 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081FE4 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     DeleteMaybeSpecialRgn @ 0x140082160 (DeleteMaybeSpecialRgn.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     GreSelectRedirectionBitmap @ 0x14012A6F0 (GreSelectRedirectionBitmap.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall DestroyCacheDC(PVOID Buffer, __int64 a2)
{
  PVOID i; // rbx
  unsigned int v4; // esi
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  int v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // edi
  HSURF v23; // rcx
  struct HOBJ__ *v24; // rcx
  struct HOBJ__ *v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 UserSessionState; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  PVOID *v34; // r10
  PVOID *v35; // rax
  __int64 v36; // rcx
  HDC v37; // rdx
  __int64 v38; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 SessionState; // rax
  __int64 v41; // rdx
  int v42; // r8d
  unsigned int *v43[8]; // [rsp+20h] [rbp-58h] BYREF

  i = Buffer;
  v4 = 0;
  v5 = 0;
  if ( Buffer )
  {
LABEL_7:
    v19 = *((_DWORD *)i + 12);
    v20 = v19 | 0x400000;
    *((_DWORD *)i + 12) = v19 | 0x400000;
    v21 = v19 & 0xC0;
    v22 = v19 & 0x400000;
    if ( (v20 & 0x40000) == 0 )
    {
      v23 = (HSURF)*((_QWORD *)i + 3);
      if ( (unsigned __int64)v23 > 2 && v21 )
        GreDereferenceObject(v23, 4, 0);
      else
        DeleteMaybeSpecialRgn((HRGN)v23);
      *((_QWORD *)i + 3) = 0LL;
    }
    v24 = (struct HOBJ__ *)*((_QWORD *)i + 4);
    if ( v24 )
    {
      GreDeleteObject(v24);
      *((_QWORD *)i + 4) = 0LL;
    }
    v25 = (struct HOBJ__ *)*((_QWORD *)i + 5);
    if ( v25 )
    {
      GreDeleteObject(v25);
      *((_QWORD *)i + 5) = 0LL;
    }
    if ( (unsigned int)GreSetDCOwnerEx(*((struct HOBJ__ **)i + 2), 0x80000002, 1, 0) )
    {
      if ( (*((_DWORD *)i + 12) & 0x4000) != 0 )
      {
        if ( !v22 && !*((_QWORD *)i + 12) )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2088);
        if ( (int)IsGreSelectRedirectionBitmapSupported(v26) >= 0 )
          GreSelectRedirectionBitmap(*((_QWORD *)i + 2), 0LL);
        *((_DWORD *)i + 12) &= ~0x4000u;
        tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
      }
      if ( (unsigned int)GrepDeleteDC(*((HDC *)i + 2), 0x400000) )
      {
        if ( (*((_DWORD *)i + 12) & 0x1002) == 2 )
        {
          UserSessionState = W32GetUserSessionState(v28, v27, v29);
          --*(_DWORD *)(UserSessionState + 19692);
        }
        tagDCE::SetPwndOrg((tagDCE *)i, 0LL);
        tagDCE::SetPwndClip((tagDCE *)i, 0LL);
        tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
        v34 = *(PVOID **)i;
        if ( *(PVOID *)i != i )
        {
          if ( v34[1] != i || (v35 = (PVOID *)*((_QWORD *)i + 1), *v35 != i) )
            __fastfail(3u);
          *v35 = v34;
          v34[1] = v35;
        }
        GreDeleteFastMutex((char *)i, v31, v32, v33);
        v4 = 1;
LABEL_40:
        if ( v5 )
        {
          SessionState = W32GetSessionState(v36);
          GrepUnlockVisRgn(*(struct _ERESOURCE ***)(SessionState + 88), v41, v42);
        }
        return v4;
      }
      GreSetDCOwnerEx(*((struct HOBJ__ **)i + 2), 0x80000012, 1, 0);
    }
    tagDCE::SetPwndOrg((tagDCE *)i, 0LL);
    tagDCE::SetPwndClip((tagDCE *)i, 0LL);
    tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
    v37 = (HDC)*((_QWORD *)i + 2);
    *((_QWORD *)i + 9) = 0LL;
    DCOBJA::DCOBJA((DCOBJA *)v43, v37);
    if ( v43[0] )
      v43[0][9] |= 0x80000u;
    DCOBJA::~DCOBJA(v43);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
    if ( CurrentProcessWin32Process )
    {
      v36 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_40;
  }
  v6 = W32GetSessionState(0LL);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(v6 + 88), v7, v8);
  v5 = 1;
  v13 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 56968);
  for ( i = *(PVOID *)(v13 + 24); ; i = *(PVOID *)i )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 56968) + 24LL;
    if ( i == (PVOID)v13 )
      break;
    if ( *((_QWORD *)i + 2) == a2 )
      goto LABEL_7;
  }
  v15 = W32GetSessionState(v13);
  GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v15 + 88), v16, v17);
  return 0LL;
}
