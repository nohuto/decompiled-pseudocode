/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14009EBD4
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14009E81C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, struct SURFACE *a2)
{
  __int64 v3; // rcx

  if ( (*((_DWORD *)this + 61) & 0x20) != 0 )
  {
    if ( a2 )
    {
      v3 = *((_QWORD *)a2 + 4);
      LOBYTE(a2) = 5;
      GreDereferenceObject(v3, a2, 1LL);
    }
    *((_DWORD *)this + 61) &= ~0x20u;
  }
}
