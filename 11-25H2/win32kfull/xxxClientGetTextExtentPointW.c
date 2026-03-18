/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1400C1B54
 * Callers:
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1400C1310 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401920B4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402EA7B8 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSaveDC @ 0x140054408 (GreSaveDC.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  __int64 v5; // r12
  HDC CompatiblePublicDC; // r14
  unsigned __int64 MaximumLength; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  unsigned int v17; // ebx
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 UserSessionState; // rax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  void *v29; // rdx
  __int64 v30; // [rsp+60h] [rbp-318h] BYREF
  int v31; // [rsp+68h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-308h] BYREF
  void *Src; // [rsp+78h] [rbp-300h] BYREF
  __int64 v34; // [rsp+80h] [rbp-2F8h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-2F0h] BYREF
  unsigned __int8 *v36; // [rsp+98h] [rbp-2E0h]
  HDC v37; // [rsp+A0h] [rbp-2D8h]
  __int128 v38; // [rsp+A8h] [rbp-2D0h] BYREF
  void (*v39)(void *); // [rsp+B8h] [rbp-2C0h]
  __int64 v40; // [rsp+C0h] [rbp-2B8h]
  unsigned __int8 v41[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v42[512]; // [rsp+130h] [rbp-248h] BYREF

  v5 = a3;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v41, 0, sizeof(v41));
  Src = 0LL;
  v31 = 0;
  v34 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v37 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2 * v5 + 2) )
    MaximumLength = 2 * v5 + 2;
  v13 = (unsigned __int8 *)AllocCallbackMessage(0x50u, 1u, MaximumLength, v42, 1, 0x200uLL);
  v36 = v13;
  if ( !v13 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v34);
    }
    return 0LL;
  }
  PtiCurrent(v12, v11);
  v38 = 0LL;
  v39 = 0LL;
  if ( v13 != v41 && v13 != v42 )
  {
    v16 = PtiCurrent(v15, v14);
    *(_QWORD *)&v38 = *((_QWORD *)v16 + 48);
    *((_QWORD *)v16 + 48) = &v38;
    *((_QWORD *)&v38 + 1) = v13;
    v39 = Win32FreePool;
  }
  *((_QWORD *)v13 + 7) = CompatiblePublicDC;
  *((_DWORD *)v13 + 16) = v5;
  *((_WORD *)v13 + 20) = DestinationString.Length;
  *((_WORD *)v13 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v13 + 6) < 0 )
    goto LABEL_21;
  v17 = GreSaveDC(a1);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v30);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v18 = KeUserModeCallback(81LL, v13, *(unsigned int *)v13, &Src, &v31);
  EtwTraceEndCallback(81LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v30);
  GreRestoreDC(a1, v17);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v18 < 0 )
    {
LABEL_21:
      v25 = 0;
      goto LABEL_22;
    }
    v21 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 56968);
    v22 = *(_DWORD *)(v21 + 100);
    UserSessionState = W32GetUserSessionState(v21, v23);
    GreBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL),
      v22,
      CompatiblePublicDC,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v18 < 0 )
    goto LABEL_21;
  if ( v31 != 24 )
    goto LABEL_21;
  v30 = 0LL;
  RtlCopyFromUser(&v30, Src, 8uLL);
  v25 = v30;
  v40 = v30;
  v28 = *((_QWORD *)PtiCurrent(v27, v26) + 69);
  if ( v28 )
  {
    if ( (*(_DWORD *)(v28 + 84) & 1) != 0 && *(_QWORD **)(v28 + 96) == a4 )
      goto LABEL_21;
  }
  v29 = (void *)*((_QWORD *)Src + 2);
  v30 = 0LL;
  RtlCopyFromUser(&v30, v29, 8uLL);
  *a4 = v30;
LABEL_22:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v34);
  }
  if ( v13 != v41 && v13 != v42 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v38);
  }
  return v25;
}
