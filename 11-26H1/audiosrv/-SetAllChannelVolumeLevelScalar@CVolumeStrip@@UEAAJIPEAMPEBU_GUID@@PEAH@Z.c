/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAMPEBU_GUID@@PEAH@Z @ 0x18011AB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::SetAllChannelVolumeLevelScalar(
        CVolumeStrip *this,
        __int64 a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *, const struct _GUID *, int *))(**((_QWORD **)this + 21)
                                                                                          + 208LL))(
           *((_QWORD *)this + 21),
           a2,
           a3,
           a4,
           a5);
}
