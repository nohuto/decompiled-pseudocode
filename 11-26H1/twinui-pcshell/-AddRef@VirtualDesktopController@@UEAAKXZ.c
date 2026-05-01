/*
 * XREFs of ?AddRef@VirtualDesktopController@@UEAAKXZ @ 0x18018F150
 * Callers:
 *     ?AddRef@VirtualDesktopController@@W7EAAKXZ @ 0x1804915D0 (-AddRef@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktopController@@WBA@EAAKXZ @ 0x1804915E0 (-AddRef@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopController@@WBI@EAAKXZ @ 0x1804915F0 (-AddRef@VirtualDesktopController@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopController@@WCA@EAAKXZ @ 0x180491600 (-AddRef@VirtualDesktopController@@WCA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopController@@WCI@EAAKXZ @ 0x180491610 (-AddRef@VirtualDesktopController@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::AddRef(VirtualDesktopController *this)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int32 v6; // r9d

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
    v6 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v6 == 0x7FFFFFFF )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v6 + 1, v6) )
      return (unsigned int)(v6 + 1);
  }
  return v2;
}
