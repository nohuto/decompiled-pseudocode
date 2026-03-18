/*
 * XREFs of ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgInsertObjectHelper::~HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  __int64 v1; // rax
  HmgInsertObjectHelper *v2; // rax
  HmgInsertObjectHelper **v3; // rdx

  v1 = *((_QWORD *)this + 4);
  if ( v1 && !*((_BYTE *)this + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(v1 + 12));
  v2 = *(HmgInsertObjectHelper **)this;
  if ( *(HmgInsertObjectHelper **)(*(_QWORD *)this + 8LL) != this
    || (v3 = (HmgInsertObjectHelper **)*((_QWORD *)this + 1), *v3 != this) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
}
