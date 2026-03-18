/*
 * XREFs of ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140302010
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032F540 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x14032FB18 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x14030187C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140301A04 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x140301FBC (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14030229C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall vUpdateClientRgnOnSpriteOverlap(struct EWNDOBJ *a1, struct RGNOBJ *this)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  BOOL v6; // edi
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  REGION *v9; // rcx
  struct REGION *v10; // rdx
  HSEMAPHORE v11; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  HSEMAPHORE v15; // rbx
  const wchar_t *v16; // rax
  struct _GRETHREAD *v17; // rax
  REGION *v18; // [rsp+20h] [rbp-30h] BYREF
  HSEMAPHORE v19; // [rsp+28h] [rbp-28h] BYREF
  HSEMAPHORE v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+88h] [rbp+38h] BYREF

  if ( EWNDOBJ::bValid(a1) && (*(_DWORD *)(v5 + 184) & 0x200) != 0 )
  {
    v18 = *(REGION **)(v5 + 56);
    v23 = *(_QWORD *)(v5 + 192);
    if ( v23 )
    {
      if ( *v4 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v22);
        if ( v22 )
        {
          v6 = 0;
          if ( (unsigned int)RGNOBJ::iComplexity(this) == 1 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)&v23);
          }
          else
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)&v22, this, (struct RGNOBJ *)&v23, 8u) )
            {
              if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v22) != 1 )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v22, this);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v22, (struct RGNOBJ *)&v23, this, 4u) )
                  v6 = RGNOBJ::iComplexity((RGNOBJ *)&v22) != 1;
              }
            }
            if ( !v6 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v22);
              goto LABEL_25;
            }
          }
          if ( !RGNOBJ::bEqual((RGNOBJ *)&v18, (struct RGNOBJ *)&v22) )
          {
            v8 = Gre::Base::Globals(v7);
            SEMOBJ<33>::SEMOBJ<33>(&v20, v8);
            SEMOBJ<34>::SEMOBJ<34>(&v19, (__int64)a1);
            RGNOBJ::vSwap((RGNOBJ *)&v22, (struct RGNOBJ *)&v18);
            v9 = v18;
            *((_QWORD *)a1 + 7) = v18;
            REGION::vStamp(v9);
            v10 = (struct REGION *)*((_QWORD *)a1 + 7);
            v21 = *((_OWORD *)a1 + 2);
            EWNDOBJ::vSetClip((__int64)a1, v10, &v21);
            TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a1 + 21), a1, 0x200u);
            v11 = v19;
            if ( v19 )
            {
              GlobalLockName = GrepGetGlobalLockName(34);
              EtwTraceGreLockReleaseSemaphore(GlobalLockName, v11);
              v13 = GreGetCurrentThreadCrossSessionCheck();
              if ( v13 )
              {
                v14 = (*(_QWORD *)v13 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
                *(_QWORD *)v13 &= ~0x400000000uLL;
                if ( v14 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v11);
            }
            v15 = v20;
            if ( v20 )
            {
              v16 = GrepGetGlobalLockName(33);
              EtwTraceGreLockReleaseSemaphore(v16, v15);
              v17 = GreGetCurrentThreadCrossSessionCheck();
              if ( v17 )
              {
                v14 = (*(_QWORD *)v17 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
                *(_QWORD *)v17 &= ~0x200000000uLL;
                if ( v14 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v15);
            }
          }
        }
LABEL_25:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v22);
      }
    }
  }
}
