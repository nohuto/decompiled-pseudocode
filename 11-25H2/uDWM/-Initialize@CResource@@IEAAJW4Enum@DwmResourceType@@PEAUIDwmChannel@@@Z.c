/*
 * XREFs of ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180008900
 * Callers:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800087D0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  int v4; // ebx

  *(_QWORD *)(a1 + 16) = a3;
  v3 = (_DWORD *)(a1 + 24);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 72LL))(a3, a2, a1 + 24);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x42u, 0LL);
  }
  else if ( !*v3 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x43u, 0LL);
  }
  return (unsigned int)v4;
}
