/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x14047DCB0
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14082C128 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF57C0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // dx
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *(_WORD *)(a1 + 2);
  v3 = v1;
  if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags <= v1 )
    v3 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  *(_WORD *)(a1 + 2) = v1;
  v4 = 0;
  *(_WORD *)a1 = v3;
  for ( *(_DWORD *)(a1 + 4) = 0;
        v4 < v3;
        *($C9C4F79064DE35237E3F199A7D1BD3E1 *)(a1 + 8 * v5 + 8) = *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140FC11F0.116 + 8 * v5 + 4) )
  {
    v5 = v4++;
  }
  while ( v4 < *(_WORD *)(a1 + 2) )
  {
    v6 = v4++;
    *(_QWORD *)(a1 + 8 * v6 + 8) = 0LL;
  }
  return (unsigned int)KeNumberProcessors_0;
}
