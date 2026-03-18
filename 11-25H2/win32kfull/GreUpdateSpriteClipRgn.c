/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x14005D774
 * Callers:
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     UserGetWindowRect @ 0x14017BF40 (UserGetWindowRect.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1401E6C88 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 */

void __fastcall GreUpdateSpriteClipRgn(Gre::Base *a1, HWND a2, HRGN a3, int a4)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rsi
  RGNOBJ *v12; // rcx
  struct _POINTL v13; // [rsp+28h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v15[4]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v18[16]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v19[32]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp+7h]
  _QWORD v21[7]; // [rsp+90h] [rbp+Fh] BYREF

  v8 = Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON(v16, v8, a1, 0LL);
  if ( (unsigned int)IsDwmActive(v9) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a3, 0, 0);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v19, a2);
    v10 = v20;
    if ( !v20 )
    {
LABEL_25:
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v19);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
      goto LABEL_26;
    }
    if ( v20 != -88 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 88));
    v11 = *(_QWORD *)(v10 + 144);
    if ( v11 != -256 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 256));
    if ( v21[0] && (unsigned int)UserGetWindowRect(*(_QWORD *)(v10 + 40), v15) )
    {
      if ( !*(_QWORD *)(v11 + 88) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
        if ( v13 )
          *(struct _POINTL *)(v11 + 88) = v13;
      }
      if ( !*(_QWORD *)(v11 + 88) )
        goto LABEL_19;
      v14 = *(_QWORD *)(v11 + 88);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v14, (struct RGNOBJ *)v21) )
        goto LABEL_19;
      v13.x = -v15[0];
      v13.y = -v15[1];
      if ( RGNOBJ::bOffset((RGNOBJ *)&v14, &v13) )
      {
        if ( (*(_DWORD *)(v10 + 140) & 0x20) != 0 )
          RGNOBJ::vScale(
            &v14,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v10 + 132), (__m128)*(unsigned int *)(v10 + 136)).m128_u64[0]);
        *(_QWORD *)(v11 + 88) = v14;
        goto LABEL_18;
      }
      v12 = (RGNOBJ *)&v14;
    }
    else
    {
      if ( !*(_QWORD *)(v11 + 88) )
      {
LABEL_19:
        if ( v11 != -256 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 256));
        if ( (*(_DWORD *)(v11 + 252) & 1) == 0 || !a4 )
          vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v11);
        if ( v10 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v10 + 88));
        goto LABEL_25;
      }
      v13 = *(struct _POINTL *)(v11 + 88);
      v12 = (RGNOBJ *)&v13;
    }
    RGNOBJ::vDeleteRGNOBJ(v12);
    *(_QWORD *)(v11 + 88) = 0LL;
LABEL_18:
    *(_DWORD *)(v11 + 252) |= 0x20u;
    goto LABEL_19;
  }
LABEL_26:
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v18);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v17);
}
