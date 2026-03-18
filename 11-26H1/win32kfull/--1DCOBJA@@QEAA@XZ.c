/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x140015860
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1400151B0 (GreSelectRedirectionBitmap.c)
 *     GreConvertMemToRedirectionDC @ 0x14004114C (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x140041200 (DxgkEngAccumD3DPresentBounds.c)
 *     GreSetPaletteEntries @ 0x14017E780 (GreSetPaletteEntries.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngGetDC @ 0x1401DD4C0 (DxgkEngGetDC.c)
 *     NtGdiIsDcInXfer @ 0x140239880 (NtGdiIsDcInXfer.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x140295574 (--1XFERDCOBJ@@QEAA@XZ.c)
 *     GreWatchVisRgnChange @ 0x14032632C (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x140326374 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x140326788 (GreConvertRedirectionToMemDC.c)
 *     DxgkEngIsRedirectionDC @ 0x140348950 (DxgkEngIsRedirectionDC.c)
 * Callees:
 *     <none>
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *(_QWORD *)this )
  {
    v2 = Gre::Base::Globals(this);
    DEC_SHARE_REF_CNT(v2, *(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  PopThreadGuardedObject((char *)this + 32);
}
