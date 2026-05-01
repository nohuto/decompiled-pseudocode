/*
 * XREFs of ?AddRef@VirtualDesktop@@UEAAKXZ @ 0x18018F0F0
 * Callers:
 *     ?AddRef@VirtualDesktop@@W7EAAKXZ @ 0x180495BD0 (-AddRef@VirtualDesktop@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBA@EAAKXZ @ 0x180495BE0 (-AddRef@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBI@EAAKXZ @ 0x180495BF0 (-AddRef@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WCA@EAAKXZ @ 0x180495C00 (-AddRef@VirtualDesktop@@WCA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WCI@EAAKXZ @ 0x180495C10 (-AddRef@VirtualDesktop@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::AddRef(VirtualDesktop *this)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int32 v7; // r9d

  v1 = *((_QWORD *)this + 10);
  v2 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v3;
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v7 == 0x7FFFFFFF )
      break;
    if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v7 + 1, v7) )
      return (unsigned int)(v7 + 1);
  }
  return v2;
}
