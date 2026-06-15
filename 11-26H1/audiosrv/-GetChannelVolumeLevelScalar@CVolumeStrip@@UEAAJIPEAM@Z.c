/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z @ 0x18007E6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelVolumeLevelScalar(CVolumeStrip *this, __int64 a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 20) + 168LL))(
           *((_QWORD *)this + 20),
           a2,
           a3);
}
