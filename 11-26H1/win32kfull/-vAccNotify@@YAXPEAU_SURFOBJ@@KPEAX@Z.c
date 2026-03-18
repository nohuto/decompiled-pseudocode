/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1400A3FF4
 * Callers:
 *     GreAccNotifyWindow @ 0x1400A4A2C (GreAccNotifyWindow.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x14019AE90 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreDwmShutdown @ 0x140253E18 (GreDwmShutdown.c)
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x14030C8B4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  struct _DISPSURF *i; // rbx
  __int64 v13; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v15)(struct _SURFOBJ *, _QWORD, void *); // r10
  void (__fastcall *v16)(struct _SURFOBJ *, _QWORD, void *); // rax
  _BYTE v17[160]; // [rsp+20h] [rbp-A8h] BYREF
  HDEV v18; // [rsp+D0h] [rbp+8h] BYREF

  hdev = a1->hdev;
  if ( !hdev )
    hdev = (HDEV)UserGetHDEV();
  v18 = hdev;
  if ( hdev )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v18);
    v10 = *((_DWORD *)hdev + 10);
    if ( (v10 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 223); i; i = *(struct _DISPSURF **)i )
      {
        v13 = *((_QWORD *)i + 6);
        if ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 1808) & 0x8000000) != 0 && (*(_DWORD *)(v13 + 2112) & 0x8000) != 0 )
          {
            v8 = *(_QWORD *)(v13 + 1776);
            if ( *(_QWORD *)(v8 + 768) )
            {
              DevBitmap = GetDevBitmap(i, a1);
              v15(DevBitmap, a2, a3);
            }
          }
        }
      }
    }
    else if ( (v10 & 0x20000) == 0 && ((_DWORD)hdev[452] & 0x8000000) != 0 && ((_DWORD)hdev[528] & 0x8000) != 0 )
    {
      v16 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 222) + 768LL);
      if ( v16 )
        v16(a1, a2, a3);
    }
    v11 = *(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96);
    if ( *(_DWORD *)(v11 + 4808) )
    {
      if ( a2 == 5 )
      {
        *(_DWORD *)(v11 + 4808) = 0;
        vForceClientRgnUpdate();
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  }
}
