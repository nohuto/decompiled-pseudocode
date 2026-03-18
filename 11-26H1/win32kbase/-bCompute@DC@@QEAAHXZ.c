/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x140037910
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x140012140 (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x140015370 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x14001FDF0 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z @ 0x140037830 (-vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140038E94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x140106CE0 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x14010F950 (-vStamp@REGION@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  unsigned int v2; // ebx
  int v3; // esi
  REGION *v4; // r14
  int v5; // eax
  _DWORD *v6; // r15
  REGION *v7; // rdx
  __int64 v8; // rcx
  REGION *v9; // r8
  __int64 v10; // rcx
  __int64 SessionState; // rax
  BOOL v13; // eax
  _BOOL8 v14; // rcx
  __int64 v15; // rax
  int v16; // r15d
  int v17; // eax
  REGION *v18; // rax
  BOOL v19; // ecx
  bool v20; // zf
  REGION *v21; // [rsp+20h] [rbp-60h] BYREF
  REGION *v22; // [rsp+28h] [rbp-58h] BYREF
  REGION *v23; // [rsp+30h] [rbp-50h] BYREF
  REGION *v24; // [rsp+38h] [rbp-48h] BYREF
  REGION *v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+48h] [rbp-38h]
  REGION *v27; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29[3]; // [rsp+68h] [rbp-18h] BYREF

  DC::AcquireDcVisRgnShared(this, (__int64)v29);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  v2 = 0;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  v3 = 0;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 142) )
  {
LABEL_16:
    v2 = v3;
    goto LABEL_17;
  }
  v4 = (REGION *)*((_QWORD *)this + 143);
  v22 = (REGION *)*((_QWORD *)this + 142);
  v3 = 1;
  v23 = v4;
  v5 = 0;
  if ( !v4 )
  {
    v21 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v21, 0x70u);
    v4 = v21;
    if ( !v21 )
      goto LABEL_17;
    v23 = v21;
    v5 = 1;
  }
  if ( !v5 && (*((_DWORD *)this + 9) & 0x10) == 0 )
  {
    v6 = (_DWORD *)((char *)this + 36);
    if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 145) )
      *((_DWORD *)this + 130) |= 0x10u;
LABEL_9:
    v7 = (REGION *)*((_QWORD *)this + 21);
    v8 = *((_QWORD *)this + 20);
    v9 = (REGION *)*((_QWORD *)this + 141);
    if ( !((unsigned __int64)v9 | v8 | (unsigned __int64)v7) )
    {
      if ( *((_QWORD *)this + 144) )
      {
        v21 = (REGION *)*((_QWORD *)this + 144);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
        *((_QWORD *)this + 144) = 0LL;
      }
      RGNOBJ::vGetSubRect((RGNOBJ *)&v23, (struct _RECTL *)((char *)this + 1000));
      *v6 &= ~0x10u;
LABEL_13:
      if ( (unsigned int)DC::bDpiScaledSurface(this) )
        *((_DWORD *)this + 130) |= 8u;
      DC::vUpdateScaledRegions(this);
      SessionState = W32GetSessionState(v10);
      DC::vUpdate_VisRect(
        this,
        *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88),
        *((struct REGION **)this + 143));
      goto LABEL_16;
    }
    v25 = (REGION *)*((_QWORD *)this + 20);
    v13 = v8 != 0;
    v14 = v8 != 0;
    v26 = 0LL;
    v15 = (unsigned int)(v13 + 1);
    *(&v25 + v14) = v7;
    if ( !v7 )
      v15 = v14;
    v16 = v15 + 1;
    *(&v25 + v15) = v9;
    if ( !v9 )
      v16 = v15;
    v22 = (REGION *)*((_QWORD *)this + 144);
    if ( !v22 )
    {
      v21 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v21, 0x70u);
      if ( v21 )
        v22 = v21;
    }
    if ( !v22 )
      goto LABEL_24;
    if ( v16 == 1 )
    {
      v21 = v25;
      v17 = RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)&v21);
    }
    else
    {
      if ( v16 != 2 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        v27 = v25;
        v28 = *((_QWORD *)&v26 + 1);
        v24 = (REGION *)v26;
        if ( !v21
          || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v24, 1)
          || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v22, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v28, 1) )
        {
          v3 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        if ( !v3 )
          goto LABEL_25;
        goto LABEL_30;
      }
      v24 = v25;
      v21 = (REGION *)v26;
      v17 = RGNOBJ::iCombine((RGNOBJ *)&v22, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v21, 1);
    }
    if ( !v17 )
    {
LABEL_24:
      v3 = 0;
LABEL_25:
      *((_QWORD *)this + 144) = 0LL;
      if ( v22 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
      goto LABEL_13;
    }
LABEL_30:
    REGION::vStamp(v22);
    if ( (unsigned int)RGNOBJ::bOffset((RGNOBJ *)&v22, (const struct _POINTL *)this + 129) )
    {
      if ( !(unsigned int)RGNOBJ::bRectl((RGNOBJ *)&v23) )
        goto LABEL_50;
      v18 = v22;
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v20 = (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                 + 16LL))(
                ((unsigned __int64)v4 + 24) & -(__int64)(v4 != 0LL),
                ((unsigned __int64)v22 + 24) & -(__int64)(v22 != 0LL)) == 0;
        v18 = v22;
        v19 = !v20;
      }
      else if ( *(_DWORD *)((((unsigned __int64)v4 + 24) & -(__int64)(v4 != 0LL)) + 0x1C) > *(_DWORD *)((((unsigned __int64)v22 + 24) & -(__int64)(v22 != 0LL)) + 0x1C)
             || *(_DWORD *)((((unsigned __int64)v4 + 24) & -(__int64)(v4 != 0LL)) + 0x24) < *(_DWORD *)((((unsigned __int64)v22 + 24) & -(__int64)(v22 != 0LL)) + 0x24)
             || *(_DWORD *)((((unsigned __int64)v4 + 24) & -(__int64)(v4 != 0LL)) + 0x20) > *(_DWORD *)((((unsigned __int64)v22 + 24) & -(__int64)(v22 != 0LL)) + 0x20)
             || (v19 = 1,
                 *(_DWORD *)((((unsigned __int64)v4 + 24) & -(__int64)(v4 != 0LL)) + 0x28) < *(_DWORD *)((((unsigned __int64)v22 + 24) & -(__int64)(v22 != 0LL)) + 0x28)) )
      {
        v19 = 0;
      }
      if ( v19 )
      {
        *((_QWORD *)this + 144) = v18;
        RGNOBJ::vGetSubRect((RGNOBJ *)&v22, (struct _RECTL *)((char *)this + 1000));
        *((_DWORD *)this + 9) &= ~0x10u;
      }
      else
      {
LABEL_50:
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        if ( v21
          && (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v23, (struct RGNOBJ *)&v22, 1)
          && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)&v21) )
        {
          *((_QWORD *)this + 144) = v22;
          RGNOBJ::vGetSubRect((RGNOBJ *)&v22, (struct _RECTL *)((char *)this + 1000));
          *((_DWORD *)this + 9) &= ~0x10u;
        }
        else
        {
          v3 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
      }
      if ( v3 )
        goto LABEL_13;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v23, (struct RGNOBJ *)&v22) )
  {
    if ( (unsigned int)DC::bDpiScaledSurface(this) )
      *((_DWORD *)this + 130) |= 0x10u;
    v4 = v23;
    v6 = (_DWORD *)((char *)this + 36);
    *((_QWORD *)this + 143) = v23;
    goto LABEL_9;
  }
LABEL_17:
  _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v29);
  return v2;
}
