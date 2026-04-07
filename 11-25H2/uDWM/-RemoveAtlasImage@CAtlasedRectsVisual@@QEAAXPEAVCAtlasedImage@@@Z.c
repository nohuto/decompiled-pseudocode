/*
 * XREFs of ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18001E080
 * Callers:
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18001E05C (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAtlasImage(CAtlasedRectsVisual *this, struct CAtlasedImage *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 i; // r11
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 56);
  v3 = 0LL;
  for ( i = *((_QWORD *)this + 25); (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( a2 == *(struct CAtlasedImage **)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 < v2 )
  {
    for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)this + 56) )
    {
      v6 = (unsigned int)v3;
      LODWORD(v3) = v3 + 1;
      *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
    }
    *((_DWORD *)this + 56) = v2 - 1;
  }
  *((_QWORD *)a2 + 10) = 0LL;
  CBaseObject::Release(a2);
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
}
