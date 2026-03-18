/*
 * XREFs of ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400C33B0 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     bDeleteFont @ 0x1400C5ABC (bDeleteFont.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1401C0AC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C (-bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreDeleteClientObj @ 0x140248BDC (GreDeleteClientObj.c)
 *     XFERDCOBJ_bEndXfer @ 0x140248CC4 (XFERDCOBJ_bEndXfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall GrepDeleteOneGdiObject(struct _ERESOURCE **a1, struct OBJECT *a2, struct OBJECT *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ecx
  struct _ERESOURCE *v17; // rbx
  struct _GRETHREAD *v18; // rax
  __int64 v20; // rcx
  __int64 SessionState; // rax
  struct OBJECT *v22; // rax
  struct OBJECT *v23; // rbx
  __int64 v24; // rcx
  union _LARGE_INTEGER *v25; // rbx
  int (*v26)(void); // rax
  __int64 v27; // rcx
  void (__fastcall *v28)(struct OBJECT *); // rax
  struct OBJECT *v29; // rcx
  _QWORD v30[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v31; // [rsp+60h] [rbp-10h]
  unsigned int *v32; // [rsp+90h] [rbp+20h] BYREF

  v6 = ((__int64 (__fastcall *)(struct _ERESOURCE *, struct OBJECT *))a1[1]->SystemResourcesList.Flink->Blink)(
         a1[1],
         a3);
  v7 = ((unsigned int)a2 >> 16) & 0x1F;
  *(_BYTE *)(v6 + 15) &= ~1u;
  if ( (unsigned int)v7 <= 9 )
  {
    if ( (_DWORD)v7 == 9 )
    {
      bDeleteColorSpace(a1, a2, 0LL);
    }
    else
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v15 = v10 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 == 1 )
                {
                  v17 = *a1 + 3;
                  GreAcquireSemaphoreInternal(v17);
                  GrepAcquireLockValidate<13>();
                  EPALOBJ::EPALOBJ((EPALOBJ *)&v32, (HPALETTE)a2);
                  if ( v32 )
                  {
                    XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v32);
                    SessionState = W32GetSessionState(v20);
                    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v32);
                  }
                  if ( v17 )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"Palette", v17);
                    v18 = GreGetCurrentThreadCrossSessionCheck();
                    if ( v18 )
                    {
                      if ( (*((_BYTE *)v18 + 21))-- == 1 )
                        *(_QWORD *)v18 &= ~0x2000uLL;
                    }
                    GreReleaseSemaphoreSharedInternal(v17);
                  }
                  bDeletePalette(a2);
                }
              }
              else
              {
                v22 = HmgRemoveObject((struct Gre::Base::SESSION_GLOBALS *)a1, (unsigned int)a2, 0, 0, 1, 7, 0LL);
                v23 = v22;
                if ( v22 )
                {
                  PATH_CORE::vFreeBlocks((struct OBJECT *)((char *)v22 + 24));
                  FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v23);
                }
              }
            }
            else
            {
              GreDeleteClientObj(a2);
            }
          }
          else
          {
            SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v32, a1);
            UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v30);
            SURFREF::vLock((SURFREF *)v30, (HSURF)a2);
            v11 = v31;
            v12 = *((_DWORD *)v31 + 28);
            if ( v12 >= 0 || (v12 & 0x40000) != 0 )
            {
              v13 = SURFACE::bDeleteSurface(v31, (__int64)a1, 0, 0);
              v11 = v31;
              if ( v13 )
                v11 = 0LL;
              v31 = v11;
            }
            if ( v11 )
            {
              v14 = W32GetSessionState(v11);
              HmgDecrementShareReferenceCount(*(_QWORD *)(v14 + 88), (unsigned int *)v31);
            }
            PopThreadGuardedObject(v30);
            GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v32);
          }
        }
        else
        {
          *(_QWORD *)(((__int64 (__fastcall *)(struct _ERESOURCE *, struct OBJECT *))a1[1]->SystemResourcesList.Flink->Blink)(
                        a1[1],
                        a3)
                    + 16) = 0LL;
          bDeleteRegion((HRGN)a2);
        }
      }
      else
      {
        while ( *((_DWORD *)a3 + 534) && !(unsigned int)XFERDCOBJ_bEndXfer(a2) )
        {
          v25 = (union _LARGE_INTEGER *)a1[285];
          W32GetSessionState(v24);
          KeDelayExecutionThread(0, 0, v25);
        }
        GrepDeleteDC((HDC)a2, 0xC00000u);
      }
    }
    return;
  }
  switch ( (_DWORD)v7 )
  {
    case 0x10:
      bDeleteBrush((HBRUSH)a2);
      return;
    case 0xA:
      bDeleteFont(a2, 0LL);
      return;
    case 0x12:
      if ( !*((_DWORD *)a1 + 778) )
        return;
      v28 = *(void (__fastcall **)(struct OBJECT *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 2312LL);
      if ( !v28 )
        return;
      v29 = a3;
LABEL_52:
      v28(v29);
      return;
    case 0x15:
      if ( !*((_DWORD *)a1 + 778) )
        return;
      v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 2368LL);
      if ( !v26 )
        return;
      if ( v26() < 0 )
        return;
      v28 = *(void (__fastcall **)(struct OBJECT *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27) + 24) + 2376LL);
      if ( !v28 )
        return;
      v29 = a2;
      goto LABEL_52;
    case 0x1C:
      EngDeleteDriverObj((HDRVOBJ)a2, 1, 1);
      break;
  }
}
