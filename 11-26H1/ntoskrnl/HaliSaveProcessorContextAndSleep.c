/*
 * XREFs of HaliSaveProcessorContextAndSleep @ 0x140727CF0
 * Callers:
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     HaliCompleteAcpiAPSleep @ 0x1404B2880 (HaliCompleteAcpiAPSleep.c)
 *     HalpSaveProcessorState @ 0x140727AC0 (HalpSaveProcessorState.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 */

__int64 __fastcall HaliSaveProcessorContextAndSleep(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64 a1),
        __int64 a3,
        int a4,
        _BYTE *a5)
{
  int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi

  v8 = 0;
  v9 = HalpSaveProcessorState(a1);
  while ( !v8 )
  {
    v10 = (__int64)a5;
    *a5 = v9;
    if ( (_BYTE)v9 || (v8 = 1, _InterlockedIncrement(&dword_140F87A4C), !a2) )
    {
      v9 = 0;
      goto LABEL_12;
    }
    while ( dword_140F87A4C != a4 )
      _mm_pause();
    guard_check_icall_no_overrides(a2);
    v9 = a2(a3);
  }
  v11 = 1073742484LL;
  if ( v9 == 1073742484 )
  {
    v10 = (__int64)a5;
    *a5 = 1;
  }
LABEL_12:
  v12 = v9;
  LOBYTE(v11) = *a5;
  HaliCompleteAcpiAPSleep(v11, v10);
  return v12;
}
