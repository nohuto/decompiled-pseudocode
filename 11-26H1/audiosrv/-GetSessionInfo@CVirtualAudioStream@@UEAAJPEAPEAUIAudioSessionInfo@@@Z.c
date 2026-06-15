/*
 * XREFs of ?GetSessionInfo@CVirtualAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x1800A9CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAudioStream::GetSessionInfo(CVirtualAudioStream *this, struct IAudioSessionInfo **a2)
{
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioSessionInfo **))this + 6))(
           *((_QWORD *)this + 6),
           &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
           a2);
}
