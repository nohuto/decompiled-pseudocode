/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x140484340
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140825EE8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF2FD0 (PpmInstallPlatformIdleStates.c)
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
  if ( *(_WORD *)&stru_140FC01F0.WaitRegister.Flags <= v1 )
    v3 = *(_WORD *)&stru_140FC01F0.WaitRegister.Flags;
  *(_WORD *)(a1 + 2) = v1;
  v4 = 0;
  *(_WORD *)a1 = v3;
  for ( *(_DWORD *)(a1 + 4) = 0;
        v4 < v3;
        *($353D57E818BB6F967B4B818D974CF463 *)(a1 + 8 * v5 + 8) = *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140FC01F0.116 + 8 * v5 + 4) )
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
