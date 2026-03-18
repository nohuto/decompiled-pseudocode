/*
 * XREFs of GreClientRgnUpdated @ 0x14001B35C
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x140301A98 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016CB84 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x14030187C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x140301FBC (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14030229C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1403022C0 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreClientRgnUpdated(Gre::Base *a1)
{
  char v1; // r14
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  HSEMAPHORE v3; // rbx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  __int64 i; // rdi
  int v9; // eax
  int v10; // eax
  __int64 j; // rsi
  int v12; // eax
  HSEMAPHORE v13; // rbx
  __int64 GlobalLockName; // rax
  struct _GRETHREAD *v15; // rax
  struct _RECTL *v16; // rsi
  __int64 k; // rbx
  REGION **p_right; // rbx
  REGION *v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  HSEMAPHORE v22; // rbx
  __int64 v23; // rax
  struct _GRETHREAD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  HSEMAPHORE v26; // [rsp+28h] [rbp-18h] BYREF
  struct _RECTL v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+78h] [rbp+38h] BYREF
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  HSEMAPHORE v30; // [rsp+88h] [rbp+48h] BYREF

  v1 = (char)a1;
  v2 = Gre::Base::Globals(a1);
  v3 = (HSEMAPHORE)(*(_QWORD *)v2 + 832LL);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<14>();
  v5 = Gre::Base::Globals(v4);
  ++*((_DWORD *)v5 + 1070);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v3);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      v7 = (*((_BYTE *)v6 + 22))-- == 1;
      if ( v7 )
        *(_QWORD *)v6 &= ~0x4000uLL;
      if ( !*(_QWORD *)v6 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v3);
  }
  if ( (v1 & 1) != 0 )
  {
    SEMOBJ<33>::SEMOBJ<33>(&v26, v2);
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
    {
      v9 = *(_DWORD *)(i + 48);
      if ( v9 < 0 )
      {
        v10 = v9 & 0x7FFFFFFF;
        *(_DWORD *)(i + 48) = v10;
        if ( (v10 & 0x12) == 0x12 )
        {
          for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
          {
            v12 = *(_DWORD *)(j + 184);
            if ( v12 >= 0 )
            {
              SEMOBJ<34>::SEMOBJ<34>(&v30, j);
              TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, (struct EWNDOBJ *)j, 2u);
              v13 = v30;
              if ( v30 )
              {
                GlobalLockName = GrepGetGlobalLockName(34LL);
                EtwTraceGreLockReleaseSemaphore(GlobalLockName, v13);
                v15 = GreGetCurrentThreadCrossSessionCheck();
                if ( v15 )
                {
                  v7 = (*(_QWORD *)v15 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
                  *(_QWORD *)v15 &= ~0x400000000uLL;
                  if ( v7 )
                    GrepOnAllLocksReleased();
                }
                GreReleaseSemaphoreExclusiveInternal(v13);
                v30 = 0LL;
              }
            }
            else
            {
              *(_DWORD *)(j + 184) = v12 & 0x7FFFFFFF;
            }
          }
        }
        if ( (*(_DWORD *)(i + 48) & 0xC) != 0 )
        {
          v16 = *(struct _RECTL **)(i + 16);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
          if ( v29 && v28 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v28, v16 + 2);
            for ( k = *(_QWORD *)(i + 24); k; k = *(_QWORD *)(k + 160) )
            {
              v25 = *(_QWORD *)(k + 56);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v29, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v25, 4) )
                RGNOBJ::vSwap((RGNOBJ *)&v28, (struct RGNOBJ *)&v29);
            }
            if ( (*(_DWORD *)(i + 48) & 4) != 0 )
            {
              p_right = (REGION **)&v16[3].right;
              v25 = *(_QWORD *)&v16[3].right;
              if ( RGNOBJ::iCombine((RGNOBJ *)&v29, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v25, 4) )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v16[3].right, (struct RGNOBJ *)&v29);
                REGION::vStamp(*p_right);
                v19 = *p_right;
                v27 = v16[2];
                EWNDOBJ::vSetClip(v16, v19, &v27);
                TRACKOBJ::vUpdateDrvDelta((TRACKOBJ *)i, (struct EWNDOBJ *)v16, 4u);
              }
            }
            RGNOBJ::vSwap((RGNOBJ *)&v16[3].right, (struct RGNOBJ *)&v28);
            REGION::vStamp(*(REGION **)&v16[3].right);
            v20 = *(_QWORD *)&v16[3].right;
            v27 = v16[2];
            EWNDOBJ::vSetClip(v16, v20, &v27);
            if ( (*(_DWORD *)(i + 48) & 8) != 0 )
              TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, (struct EWNDOBJ *)v16, 8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        }
        TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, 0LL, 0x10u);
        v21 = *(_DWORD *)(i + 48);
        if ( (v21 & 0x40) != 0 )
        {
          if ( (v1 & 2) != 0 )
          {
            *(_DWORD *)(i + 48) = v21 | 0x4000000;
          }
          else
          {
            TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, 0LL, 0x40u);
            *(_DWORD *)(i + 48) &= ~0x4000000u;
          }
        }
      }
    }
    v22 = v26;
    if ( v26 )
    {
      v23 = GrepGetGlobalLockName(33LL);
      EtwTraceGreLockReleaseSemaphore(v23, v22);
      v24 = GreGetCurrentThreadCrossSessionCheck();
      if ( v24 )
      {
        v7 = (*(_QWORD *)v24 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
        *(_QWORD *)v24 &= ~0x200000000uLL;
        if ( v7 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v22);
    }
  }
}
