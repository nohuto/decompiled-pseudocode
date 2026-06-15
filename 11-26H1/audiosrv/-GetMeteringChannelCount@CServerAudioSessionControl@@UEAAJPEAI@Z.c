/*
 * XREFs of ?GetMeteringChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x180084340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetMeteringChannelCount(
        CServerAudioSessionControl *this,
        unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 352LL))(
           *((_QWORD *)this + 9),
           a2);
}
