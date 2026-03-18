/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1400A3FF4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311C88 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1403345B0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140083168 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140288CE4 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserGetClientRgn @ 0x1402A48E4 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x140318488 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14031881C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x140318F6C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x14031963C (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140319904 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vForceClientRgnUpdate(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 i; // rsi
  int v5; // eax
  __int64 j; // rdi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  HRGN ClientRgn; // rax
  HRGN v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  LONG v14; // edx
  BOOL v15; // ebx
  __int64 v16; // rdx
  HSEMAPHORE v17; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v19; // rax
  bool v20; // zf
  HSEMAPHORE v21; // rbx
  const wchar_t *v22; // rax
  struct _GRETHREAD *v23; // rax
  HSEMAPHORE v24; // rbx
  const wchar_t *v25; // rax
  struct _GRETHREAD *v26; // rax
  HSEMAPHORE v27; // [rsp+28h] [rbp-39h] BYREF
  __int64 v28; // [rsp+30h] [rbp-31h] BYREF
  HSEMAPHORE v29; // [rsp+38h] [rbp-29h] BYREF
  __int64 v30; // [rsp+40h] [rbp-21h] BYREF
  struct _POINTL v31[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v32[8]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v33; // [rsp+98h] [rbp+37h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJ<33>::SEMOBJ<33>(&v29, v1);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2) + 96) + 4816LL); i; i = *(_QWORD *)(i + 8) )
  {
    v5 = *(_DWORD *)(i + 48);
    if ( (v5 & 0x40000000) != 0 )
    {
      *(_DWORD *)(i + 48) = v5 & 0x3FFFFFFF | 0x80000000;
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        v7 = *(_DWORD *)(j + 184);
        if ( (v7 & 0x40000000) != 0 )
        {
          v8 = v7 & 0x3FFFFFFF | 0x80000000;
          *(_DWORD *)(j + 184) = v8;
          v9 = *(_QWORD *)(j + 176);
          if ( v9 )
          {
            ClientRgn = UserGetClientRgn(v9, &v33, v8 & 0x20);
          }
          else
          {
            v33 = *(_OWORD *)(i + 52);
            ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v33);
          }
          v11 = ClientRgn;
          if ( !ClientRgn )
            goto LABEL_47;
          GreSetRegionOwner(ClientRgn, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v32, v11, 0, 0);
          if ( v32[0] )
          {
            if ( (*(_DWORD *)(j + 184) & 0x100) == 0 )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(j + 168) + 32LL);
              v13 = *(_QWORD *)(v12 + 48);
              if ( v13 )
              {
                if ( v12 == *(_QWORD *)(v13 + 2544) )
                {
                  v14 = -*(_DWORD *)(v13 + 2580);
                  v31[0].x = -*(_DWORD *)(v13 + 2576);
                  v31[0].y = v14;
                  if ( v31[0].x || v14 )
                  {
                    RGNOBJ::bOffset((RGNOBJ *)v32, v31);
                    ERECTL::bOffsetAdd((ERECTL *)&v33, v31, 0);
                  }
                }
              }
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
              if ( v28 )
              {
                if ( v27 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v27, (const struct _RECTL *const)(i + 52));
                  RGNOBJ::bCopy((RGNOBJ *)&v28, (struct RGNOBJ *)v32);
                  RGNOBJAPI::iCombine((RGNOBJAPI *)v32, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v27, 1);
                  if ( RGNOBJ::iCombine((RGNOBJ *)&v28, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v27, 1) )
                    RGNOBJAPI::bSwap((RGNOBJAPI *)v32, (struct RGNOBJ *)&v28);
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
            v15 = 0;
            if ( (*(_DWORD *)(j + 184) & 0x200) != 0 && v30 )
              v15 = RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)v32) != 0;
            SEMOBJ<34>::SEMOBJ<34>(&v27, j);
            if ( v15 )
            {
              v31[0] = *(struct _POINTL *)(j + 192);
              if ( v31[0] )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v30, (struct RGNOBJ *)v31);
                *(struct _POINTL *)(j + 192) = v31[0];
              }
            }
            RGNOBJAPI::bSwap(
              (RGNOBJAPI *)v32,
              (struct RGNOBJ *)((j + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)j >> 64)));
            REGION::vStamp(*(REGION **)(j + 56));
            v16 = *(_QWORD *)(j + 56);
            *(_OWORD *)&v31[0].x = v33;
            EWNDOBJ::vSetClip(j, v16, v31);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v32);
            if ( (*(_DWORD *)(i + 48) & 1) != 0 )
              TRACKOBJ::vUpdateDrvDelta((TRACKOBJ *)i, (struct EWNDOBJ *)j, 1u);
            if ( (*(_DWORD *)(i + 48) & 2) != 0 )
              TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, (struct EWNDOBJ *)j, 2u);
            vSpWndobjChange(*(HDEV *)(*(_QWORD *)(i + 32) + 48LL), (struct EWNDOBJ *)j);
            v17 = v27;
            if ( v27 )
            {
              GlobalLockName = GrepGetGlobalLockName(34);
              EtwTraceGreLockReleaseSemaphore(GlobalLockName, v17);
              v19 = GreGetCurrentThreadCrossSessionCheck();
              if ( v19 )
              {
                v20 = (*(_QWORD *)v19 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
                *(_QWORD *)v19 &= ~0x400000000uLL;
                if ( v20 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v17);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
          }
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
          v21 = v29;
          if ( v29 )
          {
            v22 = GrepGetGlobalLockName(33);
            EtwTraceGreLockReleaseSemaphore(v22, v21);
            v23 = GreGetCurrentThreadCrossSessionCheck();
            if ( v23 )
            {
              v20 = (*(_QWORD *)v23 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
              *(_QWORD *)v23 &= ~0x200000000uLL;
              if ( v20 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v21);
          }
          GreClientRgnUpdated((Gre::Base *)1);
          return;
        }
      }
      break;
    }
  }
LABEL_47:
  v24 = v29;
  if ( v29 )
  {
    v25 = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(v25, v24);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    if ( v26 )
    {
      v20 = (*(_QWORD *)v26 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v26 &= ~0x200000000uLL;
      if ( v20 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v24);
  }
}
