/*
 * XREFs of ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18008819C
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::IsReadyForMaximizeSnapPostTransition(CTopLevelWindow3D *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 29) + 116LL) & 0x20000000) == 0 && !*((_BYTE *)this + 336) )
    return *((_QWORD *)this + 30) != 0LL;
  return v1;
}
