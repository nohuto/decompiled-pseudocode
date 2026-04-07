/*
 * XREFs of ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800D099C
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::IsReadyForMaximizeSnapPostTransition(CTopLevelWindow3D *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 36) + 116LL) & 0x20000000) == 0 && !*((_BYTE *)this + 488) )
    return *((_QWORD *)this + 37) != 0LL;
  return v1;
}
