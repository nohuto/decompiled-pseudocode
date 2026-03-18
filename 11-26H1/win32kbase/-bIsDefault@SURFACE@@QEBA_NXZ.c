/*
 * XREFs of ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1401065B0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SURFACE::bIsDefault(SURFACE *this)
{
  return this == *(SURFACE **)(*(_QWORD *)(W32GetSessionState(this) + 88) + 4376LL);
}
