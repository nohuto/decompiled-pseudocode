/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180082A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::SetMasterVolumeLevelScalar(
        CVolumeStrip *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  __int64 v4; // rdx

  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 20) + 120LL))(
           *((_QWORD *)this + 20),
           v4,
           a3,
           a4);
}
