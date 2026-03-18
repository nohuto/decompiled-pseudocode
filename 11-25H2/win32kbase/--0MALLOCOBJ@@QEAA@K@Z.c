/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x14016028C
 * Callers:
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x140152194 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     EtwTraceTrappedAppContainerRender @ 0x1401D0E50 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM(a2, 1886221383LL);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
