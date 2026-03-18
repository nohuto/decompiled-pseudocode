/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400D5EE0 (NtGdiEngBitBlt.c)
 *     NtGdiEngEraseSurface @ 0x1401E2D60 (NtGdiEngEraseSurface.c)
 *     NtGdiEngCheckAbort @ 0x1401F8490 (NtGdiEngCheckAbort.c)
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x14033AF40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14033BD70 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033D130 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140007028 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z @ 0x1400D7068 (-ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1401EB878 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(
        UMPDSURFOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ **a3,
        __int64 a4)
{
  struct _SURFOBJ *LockedSURFOBJ; // rax
  int v6; // ecx
  HDEV hdev; // rdi
  bool v8; // al
  __int64 v10; // rcx

  *((_QWORD *)this + 2) = 0LL;
  LockedSURFOBJ = a2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = a2;
  if ( !a2
    || (a2 == a3[11]
      ? (LockedSURFOBJ = a3[10])
      : a2 == a3[13]
      ? (LockedSURFOBJ = a3[12])
      : a2 == a3[15]
      ? (LockedSURFOBJ = a3[14])
      : (LockedSURFOBJ = 0LL),
        (*(_QWORD *)this = LockedSURFOBJ) != 0LL
     || (LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(this, a2), *(_QWORD *)this = LockedSURFOBJ,
                                                                  v6 = 1,
                                                                  !LockedSURFOBJ)) )
  {
    v6 = 0;
  }
  *((_DWORD *)this + 2) = v6;
  if ( LockedSURFOBJ )
  {
    hdev = LockedSURFOBJ->hdev;
    if ( hdev )
      v8 = ValidateAndReferencePDEV(LockedSURFOBJ->hdev);
    else
      v8 = LockedSURFOBJ->iType == 0;
    if ( v8 )
    {
      *((_QWORD *)this + 2) = hdev;
      if ( !*((_DWORD *)this + 14) )
      {
        PushThreadGuardedObject((char *)this + 24, this, UMPDSURFOBJ::Cleanup, a4);
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
      if ( (unsigned int)dword_14039BBC0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v10,
          (__int64)&unk_14036C13A);
    }
  }
  return this;
}
