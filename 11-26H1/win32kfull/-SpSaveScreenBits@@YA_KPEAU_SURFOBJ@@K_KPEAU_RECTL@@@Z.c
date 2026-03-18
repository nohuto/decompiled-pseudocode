/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140313B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140288CE4 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1403104F0 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140312B4C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140312C04 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1403136D8 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpSaveScreenBits(struct _SURFOBJ *a1, __int64 a2, __int64 a3, struct _RECTL *a4)
{
  HDEV hdev; // r13
  __int64 v5; // rbx
  int v6; // esi
  unsigned int v8; // r15d
  __int64 SessionState; // rax
  __int64 v11; // rdx
  Gre::Base *v12; // rcx
  __int64 v13; // rdi
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int64 v15; // rdi
  __int64 i; // rbx
  HSEMAPHORE v17; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v19; // rax
  bool v20; // zf
  struct _RECTL v21; // xmm0
  __int64 v22; // rbx
  __int64 v23; // rdx
  HSEMAPHORE v25; // rbx
  const wchar_t *v26; // rax
  struct _GRETHREAD *v27; // rax
  HSEMAPHORE v28; // [rsp+30h] [rbp-39h] BYREF
  __int64 v29; // [rsp+38h] [rbp-31h]
  _BYTE v30[16]; // [rsp+40h] [rbp-29h] BYREF
  int v31; // [rsp+50h] [rbp-19h] BYREF
  HDEV v32; // [rsp+58h] [rbp-11h]
  struct _RECTL v33; // [rsp+60h] [rbp-9h]
  __int64 v34; // [rsp+70h] [rbp+7h]

  hdev = a1->hdev;
  v5 = a3;
  v6 = 0;
  v29 = a3;
  v34 = 0LL;
  v31 = 0;
  v8 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  if ( *((_QWORD *)hdev + 173) )
  {
    v13 = *(_QWORD *)(SessionState + 96);
    if ( *(_QWORD *)(v13 + 4816) )
    {
      if ( v8 )
      {
        if ( v8 == 2 )
          goto LABEL_22;
        goto LABEL_21;
      }
      v14 = Gre::Base::Globals(v12);
      SEMOBJ<33>::SEMOBJ<33>(&v28, v14);
      v15 = *(_QWORD *)(v13 + 4816);
      if ( v15 )
      {
        while ( !v6 )
        {
          for ( i = *(_QWORD *)(v15 + 24); i; i = *(_QWORD *)(i + 160) )
          {
            UNDODESKTOPCOORD::UNDODESKTOPCOORD(
              (UNDODESKTOPCOORD *)v30,
              (struct EWNDOBJ *)i,
              (struct _SPRITESTATE *)(hdev + 20));
            if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
              && (unsigned int)bIntersect(i + 4, a4)
              && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
            {
              v6 = 1;
              UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v30);
              break;
            }
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v30);
          }
          v15 = *(_QWORD *)(v15 + 8);
          if ( !v15 )
          {
            if ( !v6 )
              goto LABEL_23;
            break;
          }
        }
        v17 = v28;
        if ( v28 )
        {
          GlobalLockName = GrepGetGlobalLockName(33);
          EtwTraceGreLockReleaseSemaphore(GlobalLockName, v17);
          v19 = GreGetCurrentThreadCrossSessionCheck();
          if ( v19 )
          {
            v20 = (*(_QWORD *)v19 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
            *(_QWORD *)v19 &= ~0x200000000uLL;
            if ( v20 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v17);
        }
        v5 = v29;
LABEL_21:
        v21 = *a4;
        v32 = a1->hdev;
        v33 = v21;
        v31 = GreTearDownSprites(v32, a4);
LABEL_22:
        v22 = (*((__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))hdev + 173))(
                a1,
                v8,
                v5,
                a4);
        DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v31, v23);
        return v22;
      }
LABEL_23:
      v25 = v28;
      if ( v28 )
      {
        v26 = GrepGetGlobalLockName(33);
        EtwTraceGreLockReleaseSemaphore(v26, v25);
        v27 = GreGetCurrentThreadCrossSessionCheck();
        if ( v27 )
        {
          v20 = (*(_QWORD *)v27 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
          *(_QWORD *)v27 &= ~0x200000000uLL;
          if ( v20 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v25);
      }
    }
  }
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v31, v11);
  return 0LL;
}
