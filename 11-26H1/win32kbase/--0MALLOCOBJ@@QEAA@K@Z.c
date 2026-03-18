/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x140158C04
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1401FA010 (EtwTraceTrappedAppContainerRender.c)
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x1402F3598 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  *(_QWORD *)this = 0LL;
  v5 = PALLOCMEM(a2, 1886221383LL, a3, a4);
  *(_QWORD *)this = v5;
  if ( !v5 )
    EngSetLastError(8u);
  return this;
}
