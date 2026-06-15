/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x18011AB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::SetChannelVolumeLevelScalar(
        CVolumeStrip *this,
        __int64 a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, int *, const struct _GUID *, int *))(**((_QWORD **)this + 20)
                                                                                        + 152LL))(
           *((_QWORD *)this + 20),
           a2,
           a5,
           a4,
           a5);
}
