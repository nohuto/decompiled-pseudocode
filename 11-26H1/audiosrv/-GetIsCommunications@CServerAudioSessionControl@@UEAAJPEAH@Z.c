/*
 * XREFs of ?GetIsCommunications@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x1800D0330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetIsCommunications(CServerAudioSessionControl *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 9) + 408LL);
  return result;
}
