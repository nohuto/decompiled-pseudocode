/*
 * XREFs of ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140008FB0
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140007408 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140007B54 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DF7B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D53C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032DCD4 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x14032EE30 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032F13C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032F9C0 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall INVOKEOFFCOPYBITS(
        struct _POINTL *a1,
        struct _SURFOBJ *a2,
        struct _POINTL *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8)
{
  HDEV hdev; // rax
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r14
  LONG y; // eax
  LONG x; // r12d
  LONG v16; // esi
  LONG v17; // edi
  int v18; // ecx
  unsigned int v19; // r12d
  LONG v20; // edi
  LONG v21; // esi
  struct _POINTL v23; // [rsp+40h] [rbp-51h] BYREF
  struct _POINTL v24; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-41h] BYREF
  struct _RECTL *v26; // [rsp+58h] [rbp-39h]
  struct _POINTL *v27; // [rsp+60h] [rbp-31h]
  struct _XLATEOBJ *v28; // [rsp+68h] [rbp-29h]
  _DWORD v29[4]; // [rsp+70h] [rbp-21h] BYREF

  v28 = a6;
  v26 = a7;
  v27 = a8;
  if ( _bittest((const signed __int32 *)&a2[1].hsurf, 0xAu) || !a4->hdev )
  {
    if ( a2->iType == 1
      && (unsigned int)bAllowShareAccess(a2)
      && GreGetCurrentThread()
      && *((_QWORD *)GreGetCurrentThread() + 34)
      && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
      && _bittest((const signed __int32 *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL), 0xAu) )
    {
      goto LABEL_27;
    }
    if ( (a2->iType != 1
       || !(unsigned int)bAllowShareAccess(a2)
       || !GreGetCurrentThread()
       || !*((_QWORD *)GreGetCurrentThread() + 34)
       || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88))
      && _bittest((const signed __int32 *)&a2[1].hsurf, 0xAu) )
    {
      hdev = a2->hdev;
LABEL_6:
      v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
      goto LABEL_7;
    }
LABEL_16:
    v13 = EngCopyBits;
    goto LABEL_7;
  }
  if ( a4->iType != 1
    || !(unsigned int)bAllowShareAccess(a4)
    || !GreGetCurrentThread()
    || !*((_QWORD *)GreGetCurrentThread() + 34)
    || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88)
    || !_bittest((const signed __int32 *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL), 0xAu) )
  {
    if ( (a4->iType != 1
       || !(unsigned int)bAllowShareAccess(a4)
       || !GreGetCurrentThread()
       || !*((_QWORD *)GreGetCurrentThread() + 34)
       || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88))
      && _bittest((const signed __int32 *)&a4[1].hsurf, 0xAu) )
    {
      hdev = a4->hdev;
      goto LABEL_6;
    }
    goto LABEL_16;
  }
LABEL_27:
  v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)GreGetCurrentThread()
                                                                                               + 34)
                                                                                             + 80LL);
LABEL_7:
  y = a3->y;
  x = a3->x;
  v16 = a1->x;
  v17 = a1->y;
  v23.x = y;
  if ( a5 )
  {
    v24 = 0LL;
    if ( v16 || v17 )
    {
      a5->rclBounds.left += v16;
      a5->rclBounds.right += v16;
      a5->rclBounds.top += v17;
      a5->rclBounds.bottom += v17;
      if ( a5->iDComplexity )
      {
        v24.x = v16;
        v24.y = v17;
        RGNOBJ::bOffset((RGNOBJ *)&a5[2].rclBounds.top, &v24);
      }
    }
  }
  v29[0] = v16 + v26->left;
  v29[2] = v16 + v26->right;
  v29[1] = v17 + v26->top;
  v29[3] = v17 + v26->bottom;
  v18 = x + v27->x;
  v25[1] = v27->y + v23.x;
  v19 = 0;
  v25[0] = v18;
  if ( v13 )
    v19 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v13)(
            a2,
            a4,
            a5,
            v28,
            v29,
            v25);
  if ( a5 )
  {
    v20 = -v17;
    v21 = -v16;
    if ( v21 || v20 )
    {
      a5->rclBounds.left += v21;
      a5->rclBounds.right += v21;
      a5->rclBounds.top += v20;
      a5->rclBounds.bottom += v20;
      if ( a5->iDComplexity )
      {
        v23.x = v21;
        v23.y = v20;
        RGNOBJ::bOffset((RGNOBJ *)&a5[2].rclBounds.top, &v23);
      }
    }
  }
  return v19;
}
