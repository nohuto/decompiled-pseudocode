/*
 * XREFs of ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DCOBJ::vLock(DCOBJ *this, HDC a2)
{
  __int64 v2; // r13
  unsigned int v4; // r12d
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rax
  unsigned int *v13; // r15
  unsigned int v14; // r12d
  __int64 v15; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rax
  struct _ENTRY *v25; // rax
  struct _DC_ATTR *v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int64 i; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int *v37; // [rsp+20h] [rbp-28h] BYREF
  int v38; // [rsp+28h] [rbp-20h]
  __int16 v39; // [rsp+2Ch] [rbp-1Ch]
  __int64 v40; // [rsp+30h] [rbp-18h]
  unsigned int v41; // [rsp+90h] [rbp+48h]
  __int16 v42; // [rsp+9Ah] [rbp+52h]
  __int64 v43; // [rsp+A0h] [rbp+58h]
  __int64 v44; // [rsp+A8h] [rbp+60h] BYREF

  v42 = WORD1(a2);
  v2 = 0LL;
  v43 = *((_QWORD *)this + 2);
  v40 = v43;
  v4 = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  v39 = 0;
  v41 = v4;
  v5 = 0LL;
  v44 = 0LL;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v44);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v6 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v8 = v6 + 8;
  v9 = -v6;
  v10 = v8 & -(__int64)(v9 != 0);
  if ( v10 )
    v2 = *(_QWORD *)((v8 & -(__int64)(v9 != 0)) + 0x40);
  v11 = 1;
  v38 = 1;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v43 + 8) + 40LL))(*(_QWORD *)(v43 + 8), v4);
  v37 = (unsigned int *)v12;
  v13 = (unsigned int *)v12;
  if ( v12 )
  {
    _m_prefetchw((const void *)(v12 + 8));
    v14 = *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
    if ( v14 == (v44 & 0xFFFFFFFC) || !v14 || v2 && v14 == (unsigned int)UMPDGetThreadClientPID(v10) )
    {
      v15 = v43;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v43 + 8) + 96LL))(
                         *(_QWORD *)(v43 + 8),
                         *v13)
                     + 14) & 0x20) != 0 )
      {
        if ( v10 )
        {
          v33 = *(_QWORD *)(v10 + 328);
          if ( v33 )
          {
            if ( *(_BYTE *)(v33 + 80) )
            {
              for ( i = 0LL; i < *(_QWORD *)(v33 + 32); ++i )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v33 + 40) + 4 * i) == v41 )
                  goto LABEL_9;
              }
            }
          }
        }
        LOBYTE(v39) = 1;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
        v15 = v40;
        v11 = v38;
        v13 = v37;
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
      v15 = v40;
      v11 = v38;
      v13 = v37;
    }
  }
  else
  {
    v11 = 0;
    KeLeaveCriticalRegion();
    v15 = v43;
  }
LABEL_9:
  if ( v11 )
  {
    if ( *((_BYTE *)v13 + 14) == 1 && *((_WORD *)v13 + 6) == v42 )
    {
      CurrentThread = KeGetCurrentThread();
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 8) + 96LL))(*(_QWORD *)(v15 + 8), *v13);
      v5 = v17;
      if ( !*(_WORD *)(v17 + 12) || *(struct _KTHREAD **)(v17 + 16) == CurrentThread )
      {
        _InterlockedAdd16((volatile signed __int16 *)(v17 + 12), 1u);
        *(_QWORD *)(v17 + 16) = CurrentThread;
      }
      else
      {
        v5 = 0LL;
      }
    }
    v18 = *(__int64 **)(v15 + 8);
    v19 = *v18;
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v18 + 96))(v18, *v13);
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 48))(v18, v20);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1
         && (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v22 = *(_QWORD *)this;
      v23 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v24 = HmgPentryFromPobj(*((_QWORD *)this + 2));
      }
      else
      {
        v40 = 0LL;
        v24 = v22 + 2152;
        *(_OWORD *)(v22 + 2152) = 0LL;
        *(_QWORD *)(v22 + 2168) = v40;
        *(_DWORD *)(v22 + 2160) = -2147483630;
        *(_QWORD *)(v22 + 2168) = 0LL;
      }
      if ( v23 == (*(_DWORD *)(v24 + 8) & 0xFFFFFFFE) )
      {
        v25 = DC::PentryFromPobj(*(DC **)this, *((struct Gre::Base::SESSION_GLOBALS **)this + 2));
        if ( v25 )
        {
          v26 = (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)v25 + 2));
          if ( v26 )
          {
            if ( !(unsigned int)DC::SaveAttributes(*(DC **)this, v26) )
            {
              _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
              *(_QWORD *)this = 0LL;
              return;
            }
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    v27 = *(_QWORD *)this;
    v28 = *(_DWORD *)(*(_QWORD *)this + 520LL);
    if ( (v28 & 4) != 0 )
    {
      v29 = v28 & 0xFFFFFFFB;
      *(_DWORD *)(v27 + 520) = v29;
      v30 = *(_QWORD *)(v27 + 976);
      v31 = *(_DWORD *)(v30 + 340);
      if ( (v29 & 1) != 0 )
        v32 = v31 | 0x16090;
      else
        v32 = v31 | 0x6090;
      *(_DWORD *)(v30 + 340) = v32;
    }
  }
}
