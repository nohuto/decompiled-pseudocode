/*
 * XREFs of ?VolumeStepUp@CVolumeStrip@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800865C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::VolumeStepUp(CVolumeStrip *this, const struct _GUID *a2, int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 20) + 192LL))(
           *((_QWORD *)this + 20),
           a2,
           a3);
}
