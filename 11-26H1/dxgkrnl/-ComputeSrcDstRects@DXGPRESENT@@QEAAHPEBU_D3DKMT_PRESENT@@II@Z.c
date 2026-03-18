/*
 * XREFs of ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x140322848
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1403211B8 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x140322980 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x140323418 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::ComputeSrcDstRects(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        LONG a3,
        LONG a4)
{
  struct tagRECT *v4; // rsi
  struct tagRECT *v7; // rdi
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  LONG right; // ecx
  LONG bottom; // eax
  __int64 v12; // rdx

  v4 = this + 8;
  v7 = this + 8;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  *(_QWORD *)&this[8].left = 0LL;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0 )
    {
      if ( !DXGPRESENT::IntersectRect(v4, &a2->DstRect, v4) )
        return 0LL;
      v7 = this + 8;
    }
    this[9] = *v4;
  }
  else
  {
    this[9].right = a3;
    this[9].bottom = a4;
    *(_QWORD *)&this[9].left = 0LL;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          this + 9,
                          v4,
                          (const struct tagRECT *)((unsigned __int64)&a2->SrcRect & -(__int64)((*(_DWORD *)&a2->Flags.0 & 0x80u) != 0)),
                          (const struct tagRECT *)((unsigned __int64)&a2->DstRect & -(__int64)((a2->Flags.Value & 0x40) != 0))) )
      return 0LL;
  }
  right = this[1].right;
  bottom = this[1].bottom;
  v4->left += right;
  this[8].top += bottom;
  this[8].right += right;
  this[8].bottom += bottom;
  if ( (a2->Flags.Value & 0x10000) != 0 && LOWORD(this[26].bottom) > 1u )
  {
    v12 = 4LL;
    do
    {
      v7->left *= LOWORD(this[26].bottom);
      v7 = (struct tagRECT *)((char *)v7 + 4);
      --v12;
    }
    while ( v12 );
  }
  return 1LL;
}
