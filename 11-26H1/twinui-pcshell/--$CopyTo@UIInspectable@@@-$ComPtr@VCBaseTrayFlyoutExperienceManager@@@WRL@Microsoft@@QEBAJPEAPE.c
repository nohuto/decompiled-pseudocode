/*
 * XREFs of ??$CopyTo@UIInspectable@@@?$ComPtr@VCBaseTrayFlyoutExperienceManager@@@WRL@Microsoft@@QEBAJPEAPEAUIInspectable@@@Z @ 0x1803C0A24
 * Callers:
 *     ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG@Z @ 0x1802320E8 (--$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CBaseTrayFlyoutExperienceManager>::CopyTo<IInspectable>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
}
