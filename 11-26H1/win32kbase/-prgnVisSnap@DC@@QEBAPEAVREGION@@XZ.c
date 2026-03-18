/*
 * XREFs of ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC1C
 * Callers:
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140038E94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnVisSnap(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 145) )
    return (struct REGION *)*((_QWORD *)v1 + 143);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 143);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 143);
  return result;
}
