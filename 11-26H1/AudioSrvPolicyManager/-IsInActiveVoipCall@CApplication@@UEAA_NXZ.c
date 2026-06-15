/*
 * XREFs of ?IsInActiveVoipCall@CApplication@@UEAA_NXZ @ 0x180038C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CApplication::IsInActiveVoipCall(CApplication *this)
{
  return (*((_DWORD *)this + 52) & 0x10) != 0;
}
