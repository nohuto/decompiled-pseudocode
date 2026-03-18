/*
 * XREFs of ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0
 * Callers:
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14006F670 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x14007327C (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14007350C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140072F20 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepUpdateSpriteDevLockEnd(struct tagPOINT **a1, int a2)
{
  unsigned int v2; // r15d
  unsigned int updated; // esi
  __int64 HDEV; // rax
  struct tagPOINT *v7; // r12
  HDEV v8; // r13
  Gre::Base *v9; // rcx
  struct tagPOINT v10; // rbx
  struct tagPOINT *v12; // rcx
  struct tagSIZE v13; // rdx
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  struct tagPOINT *v16; // rdx
  struct tagRECT v17; // xmm0
  int v18; // r14d
  LONG left; // ecx
  LONG v20; // r10d
  LONG top; // r9d
  LONG v22; // ecx
  LONG right; // r8d
  LONG v24; // ecx
  LONG bottom; // edx
  LONG v26; // ecx
  struct tagPOINT *v27; // rdx
  struct tagSIZE v29; // [rsp+90h] [rbp-78h] BYREF
  struct tagPOINT v30; // [rsp+98h] [rbp-70h] BYREF
  struct REGION *v31; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagPOINT *v33; // [rsp+B8h] [rbp-50h] BYREF
  int v34; // [rsp+C0h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  _OWORD v37[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v38[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct tagPOINT v39; // [rsp+118h] [rbp+10h]
  __int16 v40; // [rsp+120h] [rbp+18h]
  struct tagPOINT *v41; // [rsp+128h] [rbp+20h] BYREF
  int v42; // [rsp+130h] [rbp+28h]
  struct tagPOINT *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  _OWORD v45[2]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v46[2]; // [rsp+168h] [rbp+60h] BYREF
  struct tagPOINT v47; // [rsp+188h] [rbp+80h]
  __int16 v48; // [rsp+190h] [rbp+88h]
  struct tagPOINT v49; // [rsp+198h] [rbp+90h] BYREF
  struct tagRECT v50; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v51[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  struct tagRECT v52; // [rsp+1BCh] [rbp+B4h]
  char v53; // [rsp+1CCh] [rbp+C4h]
  __int64 v54; // [rsp+1F0h] [rbp+E8h]
  __int64 v55; // [rsp+208h] [rbp+100h]
  int v56; // [rsp+210h] [rbp+108h]
  int v57; // [rsp+238h] [rbp+130h]
  __int64 v58; // [rsp+248h] [rbp+140h]
  unsigned int v59; // [rsp+258h] [rbp+150h] BYREF
  struct tagRECT v60[20]; // [rsp+25Ch] [rbp+154h] BYREF

  v2 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v7 = a1[2];
  v8 = (HDEV)HDEV;
  v32[0] = HDEV;
  v30 = (struct tagPOINT)v7;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)v32) )
  {
    EtwTraceGreLockAcquireSemaphoreShared(L"Sprite", *(_QWORD *)v7 + 1040LL);
    GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*(_QWORD *)v7 + 1040LL));
    GrepAcquireLockValidate<6>();
  }
  if ( !*((_QWORD *)Gre::Base::Globals(v9) + 28) )
  {
    GdiUpdateSpriteDevLockEnd((struct XDCOBJ *)a1);
    goto LABEL_5;
  }
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GreGetBounds)(**a1, &v50, 4LL) )
  {
    v12 = *a1;
    v13 = (struct tagSIZE)(*a1)[64];
    v29 = v13;
    v31 = (struct REGION *)v12[148];
    if ( !v31 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))EtwDevLockEndUpdate)(
        *(_QWORD *)&v12[59],
        v13,
        (unsigned int)v29.cy,
        (unsigned int)v50.left,
        v50.top,
        v50.right,
        v50.bottom);
      v30 = 0LL;
      v15 = Gre::Base::Globals(v14);
      v36 = 0LL;
      v35 = v15;
      v33 = 0LL;
      v34 = 0;
      memset(v37, 0, sizeof(v37));
      PushThreadGuardedObject(
        v37,
        &v33,
        UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
      memset(v38, 0, sizeof(v38));
      PushThreadGuardedObject(
        v38,
        &v33,
        UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
      v43 = a1[2];
      v39 = 0LL;
      v40 = 1;
      v44 = 0LL;
      memset(v45, 0, sizeof(v45));
      v41 = 0LL;
      v42 = 0;
      PushThreadGuardedObject(
        v45,
        &v41,
        UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
      memset(v46, 0, sizeof(v46));
      PushThreadGuardedObject(
        v46,
        &v41,
        UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
      v16 = *a1;
      if ( *a1 )
        v47 = *v16;
      else
        v47 = 0LL;
      v48 = 256;
      v41 = v16;
      updated = GrepUpdateSprite(
                  v8,
                  *(HWND *)&v16[59],
                  0LL,
                  (struct OPTAPIDCOBJ *)&v33,
                  0LL,
                  &v29,
                  (struct OPTAPIDCOBJ *)&v41,
                  &v30,
                  0,
                  0LL,
                  0x40200000u,
                  &v50,
                  0LL,
                  1,
                  a2,
                  0);
      v41 = (struct tagPOINT *)(-(__int64)((_BYTE)v48 != 0) & (unsigned __int64)v41);
      PopThreadGuardedObject(v46);
      DCOBJ::~DCOBJ((DCOBJ *)&v41);
      v33 = (struct tagPOINT *)(-(__int64)((_BYTE)v40 != 0) & (unsigned __int64)v33);
      PopThreadGuardedObject(v38);
      DCOBJ::~DCOBJ((DCOBJ *)&v33);
      goto LABEL_9;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v31) != 1 )
    {
      RGNOBJ::bOffset((RGNOBJ *)&v31, (const struct _POINTL *)&(*a1)[((*a1)[5].x & 1LL) + 127]);
      v55 = 0LL;
      v56 = 0;
      v57 = 1;
      v58 = 0LL;
      v54 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v51, v31, (const struct ERECTL *)&v50, 1);
      memset_0(&v59, 0, 0x144uLL);
      switch ( v53 )
      {
        case 0:
          v17 = v50;
          goto LABEL_19;
        case 1:
          v17 = v52;
LABEL_19:
          v60[0] = v17;
          v59 = 1;
          v18 = 0;
LABEL_20:
          updated = 1;
          if ( !v18 )
            goto LABEL_22;
          do
          {
            v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v51, 0x144u, &v59, 0LL);
LABEL_22:
            if ( v59 )
            {
              do
              {
                left = v50.left;
                v20 = v60[v2].left;
                if ( v20 < v50.left )
                {
                  v60[v2].left = v50.left;
                  v20 = left;
                }
                top = v60[v2].top;
                v22 = v50.top;
                if ( top < v50.top )
                {
                  v60[v2].top = v50.top;
                  top = v22;
                }
                right = v60[v2].right;
                v24 = v50.right;
                if ( right > v50.right )
                {
                  v60[v2].right = v50.right;
                  right = v24;
                }
                bottom = v60[v2].bottom;
                v26 = v50.bottom;
                if ( bottom > v50.bottom )
                {
                  v60[v2].bottom = v50.bottom;
                  bottom = v26;
                }
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)&(*a1)[59],
                  (unsigned int)v29.cx,
                  (unsigned int)v29.cy,
                  (unsigned int)v20,
                  top,
                  right,
                  bottom);
                v49 = 0LL;
                OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)&v41, 0LL);
                v35 = (struct Gre::Base::SESSION_GLOBALS *)a1[2];
                v36 = 0LL;
                v33 = 0LL;
                v34 = 0;
                UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v37);
                UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v38);
                v27 = *a1;
                if ( *a1 )
                  v39 = *v27;
                else
                  v39 = 0LL;
                v40 = 256;
                v33 = v27;
                updated &= -((unsigned int)GrepUpdateSprite(
                                             v8,
                                             *(HWND *)&v27[59],
                                             0LL,
                                             (struct OPTAPIDCOBJ *)&v41,
                                             0LL,
                                             &v29,
                                             (struct OPTAPIDCOBJ *)&v33,
                                             &v49,
                                             0,
                                             0LL,
                                             0x40200000u,
                                             &v60[v2],
                                             0LL,
                                             1,
                                             a2,
                                             0) != 0);
                v33 = (struct tagPOINT *)(-(__int64)((_BYTE)v40 != 0) & (unsigned __int64)v33);
                PopThreadGuardedObject(v38);
                DCOBJ::~DCOBJ((DCOBJ *)&v33);
                v41 = (struct tagPOINT *)(-(__int64)((_BYTE)v48 != 0) & (unsigned __int64)v41);
                PopThreadGuardedObject(v46);
                DCOBJ::~DCOBJ((DCOBJ *)&v41);
                ++v2;
              }
              while ( v2 < v59 );
            }
            v2 = 0;
          }
          while ( v18 );
          v7 = (struct tagPOINT *)v30;
          break;
        case 3:
          v18 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v51, 0, 0, 4u, 0x14u);
          goto LABEL_20;
      }
    }
  }
LABEL_9:
  v30 = (*a1)[148];
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
  (*a1)[148] = 0LL;
LABEL_5:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)v32) )
  {
    v10 = *v7;
    EtwTraceGreLockReleaseSemaphore(L"Sprite", *(_QWORD *)v7 + 1040LL);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(*(_QWORD *)&v10 + 1040LL));
  }
  return updated;
}
