/*
 * XREFs of ?ClearDialogSessionState@CProcess@@QEAAXXZ @ 0x18002119C
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180038368 (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 */

void __fastcall CProcess::ClearDialogSessionState(CProcess *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 129);
  if ( v1 > 0 )
  {
    CApplication::DialogSessionStateChanged(*((CApplication **)this + 28), -v1);
    *((_DWORD *)this + 129) = 0;
  }
}
