/*
 * XREFs of ??$ActivateInstance@UICustomShellExperience@CustomShell@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUICustomShellExperience@CustomShell@Shell@Internal@1@@Z @ 0x18031BF80
 * Callers:
 *     ?get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUICustomShellExperience@2345@@Z @ 0x18031C7D0 (-get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperience>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_6ff11408_7eca_429b_8440_22c10384b01d,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
