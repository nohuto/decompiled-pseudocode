/*
 * XREFs of ?InitializeFromHandle@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@I@Z @ 0x1800059A4
 * Callers:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x1800058E0 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::InitializeFromHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = a4;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, a4);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Eu, 0LL);
  else
    return 0;
  return v5;
}
