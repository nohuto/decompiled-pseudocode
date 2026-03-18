/*
 * XREFs of xxxDDETrackPostHook @ 0x140255D80
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401DCF78 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402B22C0 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B28D8 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B29A0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1402BDD2C (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1402BDEAC (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1402DD790 (xxxMessageEvent.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, __int64 *a4)
{
  struct tagDDECONV *DdeConv; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  struct tagTHREADINFO *v19; // rax
  struct tagFREELIST *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v27[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+70h] [rbp-28h]

  DdeConv = 0LL;
  v11 = 2;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66688) & 0x4000000) != 0 )
  {
    v12 = *a1;
    v28 = 0LL;
    memset(v27, 0, sizeof(v27));
    if ( (_DWORD)v12 == 994 || (_DWORD)v12 == 996 || (_DWORD)v12 == 997 || (unsigned int)(v12 - 999) < 2 )
    {
      xxxClientGetDDEHookData(v12, *a4, v27);
    }
    else
    {
      *(_QWORD *)&v27[0] = *(unsigned __int16 *)a4;
      *((_QWORD *)&v27[0] + 1) = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, *a1, a3, *a4, 0x4000000, (__int64)v27);
  }
  if ( *((_QWORD *)PtiCurrent(v10, v9) + 58) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 464LL) )
  {
    if ( *a1 == 992 )
      return 0;
    v13 = (struct tagWND *)ValidateHwnd(a3);
    if ( v13 )
    {
      DdeConv = FindDdeConv(v13, a2);
      if ( DdeConv )
      {
        if ( PtiCurrent(v15, v14) != *((struct tagTHREADINFO **)DdeConv + 2) )
        {
          v18 = PtiCurrent(v17, v16);
          v17 = 1024LL;
          if ( *((_WORD *)v18 + 336) != 1024 )
          {
            UserSetLastError(1408);
            return 0;
          }
        }
        v19 = PtiCurrent(v17, v16);
        Win32HM_LockIntoThread<0>((__int64)v19, (__int64)DdeConv, BugCheckParameter3);
        v20 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
        *((_QWORD *)DdeConv + 9) = 0LL;
        xxxFreeListFree(v20);
        if ( (*(_BYTE *)(_HMPheFromObject(DdeConv) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)DdeConv + 20) & 6) != 0 )
        {
          v11 = 1;
        }
        else
        {
          v22 = *((_QWORD *)DdeConv + 7);
          if ( v22 )
            v23 = (*(__int64 (__fastcall **)(unsigned int *, __int64 *, struct tagDDECONV *))(v22 + 32))(
                    a1,
                    a4,
                    DdeConv);
          else
            v23 = (*((_DWORD *)DdeConv + 20) & 1) != 0
                ? xxxUnexpectedServerPost(a1, a4, DdeConv)
                : xxxUnexpectedClientPost(a1, a4, DdeConv);
          v11 = v23;
        }
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v21);
      }
      else
      {
        v11 = *a1 == 993;
      }
    }
    else
    {
      v11 = (*a1 == 993) + 1;
    }
    if ( v11 == 1 && (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v15, v14) + 132, 0, 0) & 1) == 0 )
    {
      v24 = 0x8000LL;
      switch ( (unsigned __int16)*a1 )
      {
        case 0x3E2u:
          v24 = 33025LL;
          break;
        case 0x3E3u:
          break;
        case 0x3E4u:
          v24 = 32769LL;
          break;
        default:
          if ( (unsigned __int16)*a1 != 997 )
          {
            if ( (unsigned __int16)*a1 == 998 )
              break;
            if ( (unsigned __int16)*a1 != 999 )
            {
              if ( (unsigned __int16)*a1 != 1000 )
                return v11;
              v24 = 34816LL;
              break;
            }
          }
          v24 = 32899LL;
          break;
      }
      if ( DdeConv )
      {
        xxxClientFreeDDEHandle(*a4, v24);
        return 3;
      }
    }
  }
  return v11;
}
