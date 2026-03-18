/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04
 * Callers:
 *     NtGdiEngEraseSurface @ 0x1400F48A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1400F5100 (NtGdiEngFillPath.c)
 *     NtGdiEngCheckAbort @ 0x1400F5950 (NtGdiEngCheckAbort.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14032D7D0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14032FBB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z @ 0x1400F5F54 (-ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z.c)
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1400F66A8 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct UMPDOBJ *a3)
{
  struct _SURFOBJ *LockedSURFOBJ; // rax
  int v5; // ecx
  HDEV hdev; // rdi
  bool v7; // al
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 2) = 0LL;
  LockedSURFOBJ = a2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = a2;
  if ( !a2 )
    goto LABEL_2;
  if ( a2 == *((struct _SURFOBJ **)a3 + 9) )
  {
    LockedSURFOBJ = (struct _SURFOBJ *)*((_QWORD *)a3 + 8);
  }
  else if ( a2 == *((struct _SURFOBJ **)a3 + 11) )
  {
    LockedSURFOBJ = (struct _SURFOBJ *)*((_QWORD *)a3 + 10);
  }
  else
  {
    if ( a2 != *((struct _SURFOBJ **)a3 + 13) )
    {
      *(_QWORD *)this = 0LL;
      goto LABEL_17;
    }
    LockedSURFOBJ = (struct _SURFOBJ *)*((_QWORD *)a3 + 12);
  }
  *(_QWORD *)this = LockedSURFOBJ;
  if ( LockedSURFOBJ )
  {
LABEL_2:
    v5 = 0;
    goto LABEL_3;
  }
LABEL_17:
  LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(this, a2);
  *(_QWORD *)this = LockedSURFOBJ;
  v5 = 1;
  if ( !LockedSURFOBJ )
    goto LABEL_2;
LABEL_3:
  *((_DWORD *)this + 2) = v5;
  if ( LockedSURFOBJ )
  {
    hdev = LockedSURFOBJ->hdev;
    if ( hdev )
      v7 = ValidateAndReferencePDEV(LockedSURFOBJ->hdev);
    else
      v7 = LockedSURFOBJ->iType == 0;
    if ( v7 )
    {
      *((_QWORD *)this + 2) = hdev;
      if ( !*((_DWORD *)this + 14) )
      {
        PushThreadGuardedObject((char *)this + 24, this, UMPDSURFOBJ::Cleanup);
        *((_DWORD *)this + 14) = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 2) )
      {
        EngUnlockSurface(*(SURFOBJ **)this);
        *((_DWORD *)this + 2) = 0;
      }
      *(_QWORD *)this = 0LL;
      v9[0] = 45276645;
      v9[2] = 0;
      v9[1] = (hdev != 0LL) + 1;
      RtlLogUnexpectedCodepath(v9);
    }
  }
  return this;
}
