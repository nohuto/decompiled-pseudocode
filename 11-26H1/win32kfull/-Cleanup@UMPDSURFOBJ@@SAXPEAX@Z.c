/*
 * XREFs of ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x140295CA0
 * Callers:
 *     NtGdiEngCheckAbort @ 0x1400F5950 (NtGdiEngCheckAbort.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDSURFOBJ::Cleanup(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v2 = Gre::Base::Globals(a1);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v3, v2);
  }
  if ( *((_DWORD *)a1 + 2) )
    EngUnlockSurface(*(SURFOBJ **)a1);
}
