/*
 * XREFs of RaidQueryLedState @ 0x140095808
 * Callers:
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1400A4754 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 * Callees:
 *     RaidGetNpemControlInterface @ 0x140094604 (RaidGetNpemControlInterface.c)
 *     RaidQueryLedStateByAcpiDsm @ 0x1400958B4 (RaidQueryLedStateByAcpiDsm.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidQueryLedState(__int64 a1, unsigned int *a2)
{
  int LedStateByAcpiDsm; // ebx
  unsigned int (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rcx
  char v7; // al
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  LedStateByAcpiDsm = RaidQueryLedStateByAcpiDsm();
  if ( LedStateByAcpiDsm == -1073741637 )
  {
    v9 = 0LL;
    LedStateByAcpiDsm = RaidGetNpemControlInterface(a1, &v9);
    if ( LedStateByAcpiDsm >= 0 )
    {
      if ( *(_WORD *)(v9 + 2) >= 2u && (v5 = *(unsigned int (__fastcall **)(_QWORD))(v9 + 56)) != 0LL )
        *a2 = (v5(*(_QWORD *)(v9 + 8)) >> 2) & 0x3FF;
      else
        LedStateByAcpiDsm = -1073741637;
    }
  }
  if ( LedStateByAcpiDsm >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = *(_BYTE *)(v6 + 109);
    if ( v7 >= 0 )
      *(_BYTE *)(v6 + 109) = v7 | 0x80;
  }
  return (unsigned int)LedStateByAcpiDsm;
}
