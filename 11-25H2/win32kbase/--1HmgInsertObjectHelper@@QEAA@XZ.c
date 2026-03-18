/*
 * XREFs of ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001EEB0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001F7EC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400875B0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140098640 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x14014C7D0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall HmgInsertObjectHelper::~HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  OBJECT *v2; // rcx

  v2 = (OBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
  PopThreadGuardedObject(this);
}
