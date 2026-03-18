/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x140035A40 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HANDLELOCK_bLockHobj @ 0x1401F0A50 (HANDLELOCK_bLockHobj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  __int16 v4; // r14d^2
  __int64 v6; // rsi
  unsigned int v7; // r12d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v17; // rdx
  unsigned __int64 i; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = WORD1(a2);
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  v21 = 0LL;
  v6 = 0LL;
  v7 = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v21);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v6 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v9 = v6 + 8;
  v10 = -v6;
  v11 = v9 & -(__int64)(v10 != 0);
  if ( v11 )
    v12 = *(_QWORD *)((v9 & -(__int64)(v10 != 0)) + 0x40);
  else
    v12 = 0LL;
  v13 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 2) = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 8) + 40LL))(*(_QWORD *)(v13 + 8), v7);
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v14 + 8));
    v15 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
    if ( v15 == (v21 & 0xFFFFFFFC) || !v15 || v12 && v15 == (unsigned int)UMPDGetThreadClientPID(v11) )
    {
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 8LL) + 96LL))(
                         *(_QWORD *)(*((_QWORD *)this + 2) + 8LL),
                         **(unsigned int **)this)
                     + 14) & 0x20) == 0 )
        goto LABEL_10;
      if ( v11 )
      {
        v17 = *(_QWORD *)(v11 + 328);
        if ( v17 )
        {
          if ( *(_BYTE *)(v17 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v17 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 4 * i) == v7 )
                goto LABEL_10;
            }
          }
        }
      }
      *((_BYTE *)this + 12) = 1;
    }
    HANDLELOCK::vUnlock(this);
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
  }
LABEL_10:
  if ( *((_DWORD *)this + 2) && (*(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(*(_QWORD *)this + 12LL) != v4) )
  {
    *((_BYTE *)this + 13) = 1;
    HANDLELOCK::vUnlock(this);
  }
  return *((unsigned int *)this + 2);
}
