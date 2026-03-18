/*
 * XREFs of ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140316108 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x140316884 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1403179A8 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140318514 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  LONG x; // r15d
  LONG v16; // esi
  LONG v17; // edi
  int v18; // ecx
  unsigned int v19; // r15d
  LONG v20; // edi
  LONG v21; // esi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  LONG v40; // [rsp+40h] [rbp-51h]
  struct _POINTL v41; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v42[2]; // [rsp+50h] [rbp-41h] BYREF
  struct _RECTL *v43; // [rsp+58h] [rbp-39h]
  struct _POINTL *v44; // [rsp+60h] [rbp-31h]
  struct _XLATEOBJ *v45; // [rsp+68h] [rbp-29h]
  _DWORD v46[4]; // [rsp+70h] [rbp-21h] BYREF

  v44 = a8;
  v43 = a7;
  v45 = a6;
  if ( _bittest((const signed __int32 *)&a2[1].hsurf, 0xAu) || !a4->hdev )
  {
    if ( a2->iType == 1
      && (unsigned int)bAllowShareAccess(a2)
      && GreGetCurrentThread(v36)
      && *((_QWORD *)GreGetCurrentThread(v37) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v38) + 85) || *((_DWORD *)GreGetCurrentThread(v39) + 86)) )
    {
      v31 = *((_QWORD *)GreGetCurrentThread(v39) + 34);
      if ( _bittest((const signed __int32 *)(v31 + 20), 0xAu) )
        goto LABEL_32;
    }
    if ( (a2->iType != 1
       || !(unsigned int)bAllowShareAccess(a2)
       || !GreGetCurrentThread(v23)
       || !*((_QWORD *)GreGetCurrentThread(v24) + 34)
       || !*((_DWORD *)GreGetCurrentThread(v25) + 85) && !*((_DWORD *)GreGetCurrentThread(v26) + 86))
      && _bittest((const signed __int32 *)&a2[1].hsurf, 0xAu) )
    {
      hdev = a2->hdev;
LABEL_6:
      v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
      goto LABEL_7;
    }
LABEL_26:
    v13 = EngCopyBits;
    goto LABEL_7;
  }
  if ( a4->iType != 1
    || !(unsigned int)bAllowShareAccess(a4)
    || !GreGetCurrentThread(v27)
    || !*((_QWORD *)GreGetCurrentThread(v28) + 34)
    || !*((_DWORD *)GreGetCurrentThread(v29) + 85) && !*((_DWORD *)GreGetCurrentThread(v30) + 86)
    || (v31 = *((_QWORD *)GreGetCurrentThread(v30) + 34), !_bittest((const signed __int32 *)(v31 + 20), 0xAu)) )
  {
    if ( (a4->iType != 1
       || !(unsigned int)bAllowShareAccess(a4)
       || !GreGetCurrentThread(v32)
       || !*((_QWORD *)GreGetCurrentThread(v33) + 34)
       || !*((_DWORD *)GreGetCurrentThread(v34) + 85) && !*((_DWORD *)GreGetCurrentThread(v35) + 86))
      && _bittest((const signed __int32 *)&a4[1].hsurf, 0xAu) )
    {
      hdev = a4->hdev;
      goto LABEL_6;
    }
    goto LABEL_26;
  }
LABEL_32:
  v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)GreGetCurrentThread(v31)
                                                                                               + 34)
                                                                                             + 80LL);
LABEL_7:
  y = a3->y;
  x = a3->x;
  v16 = a1->x;
  v17 = a1->y;
  v40 = y;
  if ( a5 && (v16 || v17) )
  {
    a5->rclBounds.left += v16;
    a5->rclBounds.right += v16;
    a5->rclBounds.top += v17;
    a5->rclBounds.bottom += v17;
    if ( a5->iDComplexity )
    {
      v41.x = v16;
      v41.y = v17;
      RGNOBJ::bOffset((RGNOBJ *)&a5[2].rclBounds.top, &v41);
    }
  }
  v46[0] = v16 + v43->left;
  v46[2] = v16 + v43->right;
  v46[1] = v17 + v43->top;
  v46[3] = v17 + v43->bottom;
  v18 = x + v44->x;
  v42[1] = v44->y + v40;
  v19 = 0;
  v42[0] = v18;
  if ( v13 )
    v19 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v13)(
            a2,
            a4,
            a5,
            v45,
            v46,
            v42);
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
        v41.x = v21;
        v41.y = v20;
        RGNOBJ::bOffset((RGNOBJ *)&a5[2].rclBounds.top, &v41);
      }
    }
  }
  return v19;
}
