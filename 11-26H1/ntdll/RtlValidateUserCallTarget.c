/*
 * XREFs of RtlValidateUserCallTarget @ 0x1800C6B50
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18011041C (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     CfgAddressToBitState @ 0x1800C6BEC (CfgAddressToBitState.c)
 */

__int64 __fastcall RtlValidateUserCallTarget(__int64 a1, _DWORD *a2)
{
  char v3; // di
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax
  int v8; // eax

  v3 = a1;
  v4 = CfgAddressToBitState(a1, qword_1801E3518);
  v5 = 0;
  if ( !v4 )
    goto LABEL_8;
  v6 = v4 - 1;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        *a2 = 16;
        return v5;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v5;
  }
  LOBYTE(v5) = (v3 & 0xF) == 0;
  *a2 = (v5 ^ 1) + 1;
  return v5;
}
