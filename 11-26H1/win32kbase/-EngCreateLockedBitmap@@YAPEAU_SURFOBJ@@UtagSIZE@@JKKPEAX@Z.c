/*
 * XREFs of ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1401668B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002550C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 */

struct _SURFOBJ *__fastcall EngCreateLockedBitmap(struct tagSIZE a1, unsigned int a2, int a3, int a4, void *a5)
{
  SURFOBJ *v5; // rbx
  unsigned int *v7[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v7, 0, 0LL, *(_QWORD *)&a1, a2, a3, a4, a5);
  v5 = 0LL;
  if ( v7[0] )
    v5 = EngLockSurface(*((HSURF *)v7[0] + 4));
  SURFMEM::~SURFMEM(v7);
  return v5;
}
