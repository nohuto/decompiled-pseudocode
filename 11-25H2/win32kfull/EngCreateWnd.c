/*
 * XREFs of EngCreateWnd @ 0x140302300
 * Callers:
 *     VerifierEngCreateWnd @ 0x1403322F0 (VerifierEngCreateWnd.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserAssociateHwnd @ 0x140287DC0 (UserAssociateHwnd.c)
 *     ??1WO_CLEANUP@@QEAA@XZ @ 0x140301914 (--1WO_CLEANUP@@QEAA@XZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x140301FBC (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  __int64 v5; // rdi
  PVOID *p_pvScan0; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v12; // rdx
  Gre::Base *v13; // rcx
  __int64 v14; // r8
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 i; // rcx
  HSEMAPHORE v22; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 Semaphore; // rax
  FLONG v30; // r14d
  __int64 v31; // rax
  HSEMAPHORE v32; // rbx
  const wchar_t *v33; // rax
  struct _GRETHREAD *v34; // rax
  HSEMAPHORE v36; // [rsp+20h] [rbp-91h] BYREF
  REGION *v37; // [rsp+28h] [rbp-89h] BYREF
  REGION *v38; // [rsp+30h] [rbp-81h] BYREF
  __int64 v39; // [rsp+38h] [rbp-79h] BYREF
  __int64 v40; // [rsp+40h] [rbp-71h] BYREF
  struct _RECTL v41; // [rsp+50h] [rbp-61h] BYREF
  int v42; // [rsp+60h] [rbp-51h] BYREF
  __int64 v43; // [rsp+68h] [rbp-49h]
  __int128 v44; // [rsp+70h] [rbp-41h]
  __int128 v45; // [rsp+80h] [rbp-31h]
  __int128 v46; // [rsp+90h] [rbp-21h]
  struct _RECTL v47; // [rsp+A0h] [rbp-11h] BYREF
  struct _RECTL v48; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0LL;
  p_pvScan0 = &pso[-1].pvScan0;
  v42 = 0;
  v7 = -(__int64)pso;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v8 = (unsigned __int64)p_pvScan0 & -(__int64)(v7 != 0);
  v46 = 0LL;
  if ( !(unsigned int)UserIsUserCritSecIn(v7) || (fl & 0xF7FFFC00) != 0 )
    goto LABEL_47;
  v15 = Gre::Base::Globals(v13);
  SEMOBJ<33>::SEMOBJ<33>(&v36, v15);
  v18 = *(_QWORD *)(W32GetSessionState(v17, v16) + 96);
  v19 = *(_QWORD *)(v18 + 4824);
  v20 = v19;
LABEL_4:
  if ( v20 )
  {
    for ( i = *(_QWORD *)(v20 + 24); ; i = *(_QWORD *)(i + 160) )
    {
      if ( !i )
      {
        v20 = *(_QWORD *)(v20 + 8);
        goto LABEL_4;
      }
      if ( *(HWND *)(i + 176) == hwnd )
        break;
    }
    if ( *(WNDOBJCHANGEPROC *)(v20 + 40) == pfn && *(_DWORD *)(i + 188) == iPixelFormat )
    {
      v22 = v36;
      if ( v36 )
      {
        GlobalLockName = GrepGetGlobalLockName(33);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v22);
        v24 = GreGetCurrentThreadCrossSessionCheck();
        if ( v24 )
        {
          v25 = (*(_QWORD *)v24 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
          *(_QWORD *)v24 &= ~0x200000000uLL;
          if ( v25 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v22);
      }
      v5 = -1LL;
      goto LABEL_47;
    }
  }
  else
  {
    if ( !v19 )
      goto LABEL_50;
    do
    {
      if ( *(_QWORD *)(v19 + 32) == v8 && *(WNDOBJCHANGEPROC *)(v19 + 40) == pfn )
        break;
      v19 = *(_QWORD *)(v19 + 8);
    }
    while ( v19 );
    if ( !v19 )
    {
LABEL_50:
      v26 = Win32AllocPoolZInit(72LL, 1684961095LL);
      v19 = v26;
      if ( !v26 )
        goto LABEL_42;
      v43 = v26;
      *(_DWORD *)v26 = 1128354388;
      *(_QWORD *)(v26 + 16) = 0LL;
      *(_QWORD *)(v26 + 24) = 0LL;
      *(_QWORD *)(v26 + 32) = v8;
      *(_QWORD *)(v26 + 40) = pfn;
      *(_DWORD *)(v26 + 48) = fl;
      *(_QWORD *)(v26 + 52) = 0LL;
      *(_DWORD *)(v26 + 60) = *(_DWORD *)(v8 + 56);
      *(_DWORD *)(v26 + 64) = *(_DWORD *)(v8 + 60);
      if ( (fl & 0xC) != 0 )
      {
        v27 = Win32AllocPoolZInit(208LL, 1684961095LL);
        v28 = v27;
        if ( !v27 )
          goto LABEL_42;
        *(_QWORD *)&v44 = v27;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
        if ( !v37 )
          goto LABEL_42;
        *(_QWORD *)&v45 = v37;
        RGNOBJ::vSet((RGNOBJ *)&v37, (const struct _RECTL *const)(v19 + 52));
        *(_QWORD *)(v28 + 168) = v19;
        REGION::vStamp(v37);
        v41 = *(struct _RECTL *)(v19 + 52);
        EWNDOBJ::vSetClip(v28, v37, &v41);
        *(_QWORD *)(v28 + 24) = 0LL;
        *(_DWORD *)(v28 + 152) = 1145984837;
        v12 = v8 + 24;
        *(_QWORD *)(v28 + 160) = 0LL;
        *(_QWORD *)(v28 + 176) = 0LL;
        *(_DWORD *)(v28 + 188) = 0;
        *(_QWORD *)(v28 + 48) = (v8 + 24) & -(__int64)(v8 != 0);
        *(_DWORD *)(v28 + 184) = fl | 0x20000000;
        *(_QWORD *)(v19 + 16) = v28;
      }
    }
    if ( (*(_DWORD *)(v19 + 48) & 0x87FFFFF) == fl && !Win32AllocPoolZInit(208LL, 1684961095LL) )
    {
      *((_QWORD *)&v44 + 1) = 0LL;
      v47 = 0LL;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      if ( v38 )
      {
        *((_QWORD *)&v45 + 1) = v38;
        RGNOBJ::vSet((RGNOBJ *)&v38, &v47);
        v48 = 0LL;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
        if ( v39 )
        {
          *(_QWORD *)&v46 = v39;
          RGNOBJ::vSet((RGNOBJ *)&v39, &v48);
          Semaphore = GreCreateSemaphore();
          MEMORY[0xC8] = Semaphore;
          if ( Semaphore )
          {
            MEMORY[0xA8] = v19;
            v30 = fl | 0x10000000;
            *((_QWORD *)&v46 + 1) = Semaphore;
            REGION::vStamp(v38);
            v41 = v47;
            EWNDOBJ::vSetClip(0LL, v38, &v41);
            MEMORY[0xC0] = v39;
            v31 = v8 + 24;
            MEMORY[0x18] = 0LL;
            if ( !v8 )
              v31 = 0LL;
            MEMORY[0x30] = v31;
            MEMORY[0xBC] = iPixelFormat;
            MEMORY[0x98] = 1145984837;
            MEMORY[0xB0] = hwnd;
            MEMORY[0xB8] = v30;
            if ( hwnd )
            {
              if ( !(unsigned int)UserAssociateHwnd((__int64)hwnd, 0LL) )
                goto LABEL_42;
            }
            else
            {
              *(_QWORD *)(v8 + 136) = 0LL;
            }
            MEMORY[0xA0] = *(_QWORD *)(v19 + 24);
            *(_QWORD *)(v19 + 24) = 0LL;
            if ( v43 )
            {
              *(_QWORD *)(v19 + 8) = *(_QWORD *)(v18 + 4824);
              *(_QWORD *)(v18 + 4824) = v19;
            }
            *(_DWORD *)(v19 + 48) |= 0x40000000u;
            MEMORY[0xB8] |= 0x40000000u;
            *(_DWORD *)(v18 + 4816) = 1;
            v40 = *(_QWORD *)(v8 + 48);
            PDEVOBJ::vReferencePdev((PDEVOBJ *)&v40);
            v42 = 1;
          }
        }
      }
    }
  }
LABEL_42:
  v32 = v36;
  if ( v36 )
  {
    v33 = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(v33, v32);
    v34 = GreGetCurrentThreadCrossSessionCheck();
    if ( v34 )
    {
      v25 = (*(_QWORD *)v34 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v34 &= ~0x200000000uLL;
      if ( v25 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v32);
  }
LABEL_47:
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v42, v12, v14);
  return (WNDOBJ *)v5;
}
