/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960
 * Callers:
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140038E94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  _DWORD *v3; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 SessionState; // rax
  unsigned int v10; // ebx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  LONG left; // r9d
  LONG top; // r8d
  __int64 v18; // rdx
  int v19; // r8d
  char *v20; // r10
  LONG v21; // r9d
  LONG v22; // ecx
  int v23; // eax
  RGNOBJ *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+28h] [rbp-38h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v28; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-20h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 20);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != 0xF8000000
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != 0xF8000000
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != 0xF8000000
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v27 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v27, 0x70u);
    v7 = v27;
    if ( v27 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v27, a2);
      SessionState = W32GetSessionState(v8);
      DC::vReleaseRao(this, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
      if ( !v3 )
      {
        if ( a3 == 1 )
        {
          ++*(_DWORD *)(v7 + 76);
          *((_QWORD *)this + 20) = v7;
          return 2;
        }
        v26 = 0LL;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v26, 0x70u);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
        if ( v26 )
        {
          if ( v25 )
          {
            v13 = DC::bDpiScaledSurface(this);
            if ( v13 )
              v14 = *(_QWORD *)((char *)this + 532);
            else
              v14 = *((_QWORD *)this + 64);
            v15 = (_DWORD *)*((_QWORD *)this + 6);
            left = 0;
            top = 0;
            v18 = HIDWORD(*(_QWORD *)((char *)this + (v13 != 0 ? 0x14 : 0) + 512));
            *(_QWORD *)&v29.left = 0LL;
            v29.right = v14;
            v29.bottom = v18;
            if ( *((_QWORD *)this + 62) )
            {
              SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v28);
              if ( (v15[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
              {
                v29.left += v15[644];
                v29.right += v15[644];
                v29.top += v15[645];
                v29.bottom += v15[645];
              }
              GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v28,
                v19);
              LODWORD(v18) = v29.bottom;
              LODWORD(v14) = v29.right;
              top = v29.top;
              left = v29.left;
            }
            v20 = (char *)this + 1024;
            if ( (*((_DWORD *)this + 10) & 1) == 0 )
              v20 = (char *)this + 1016;
            v21 = left - *(_DWORD *)v20;
            v22 = v14 - *(_DWORD *)v20;
            v29.left = v21;
            v23 = *((_DWORD *)v20 + 1);
            v29.right = v22;
            v29.top = top - v23;
            v29.bottom = v18 - v23;
            if ( top - v23 == (_DWORD)v18 - v23 || v21 == v22 || !(unsigned int)IsRectEmptyInl(&v29) )
            {
              RGNOBJ::vSet((RGNOBJ *)&v25, (const struct _RECTL *const)&v29);
              v10 = RGNOBJ::iCombine((RGNOBJ *)&v26, (struct RGNOBJ *)&v25, (struct RGNOBJ *)&v27, a3);
              if ( v10 )
              {
                ++*(_DWORD *)(v26 + 76);
                *((_QWORD *)this + 20) = v26;
                goto LABEL_23;
              }
            }
            else
            {
              v10 = 0;
            }
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
            goto LABEL_23;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
        }
        v10 = 0;
LABEL_23:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
        return v10;
      }
      v25 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v25, 0x70u);
      if ( v25 )
      {
        v28 = v3;
        v10 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v27, a3);
        if ( v10 )
        {
          ++*(_DWORD *)(v25 + 76);
          *((_QWORD *)this + 20) = v25;
          if ( v28[19]-- != 1 )
          {
LABEL_17:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
            return v10;
          }
          v24 = (RGNOBJ *)&v28;
        }
        else
        {
          v24 = (RGNOBJ *)&v25;
        }
        RGNOBJ::vDeleteRGNOBJ(v24);
        goto LABEL_17;
      }
      v10 = 0;
      goto LABEL_17;
    }
  }
  return 0LL;
}
