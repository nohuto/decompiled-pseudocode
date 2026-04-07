/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001B2A4
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18002139C (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BBE0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  int v4; // ebp
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  CBitmapSourceArray::ReleaseContents(this, 0);
  v4 = *((_DWORD *)a2 + 6);
  Src = *(void **)a2;
  v6 = DynArrayImpl<0>::Grow((_DWORD)this, 8, v4, v5, (__int64)&Src);
  v7 = 0;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x210u, 0LL);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)this + (unsigned int)(8 * *((_DWORD *)this + 6))), Src, (unsigned int)(8 * v4));
    *((_DWORD *)this + 6) += v4;
    if ( *((_DWORD *)this + 6) )
    {
      do
        CBaseObject::AddRef(*(CBaseObject **)(*(_QWORD *)this + 8LL * v7++));
      while ( v7 < *((_DWORD *)this + 6) );
    }
  }
  return v8;
}
