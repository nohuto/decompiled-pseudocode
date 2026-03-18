/*
 * XREFs of ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x14031CDAC
 * Callers:
 *     DxgkGetPathsModality @ 0x14031B1E0 (DxgkGetPathsModality.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14031E5CC (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x14033C0A8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x14033E9CC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  bool v6; // di
  CCD_BTL *v7; // rax
  int v8; // ebx
  bool v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = DxgkAcquireSessionModeChangeLock(0);
  v5 = v4;
  v6 = v4 >= 0;
  v10 = v4 >= 0;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 943;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  v7 = CCD_BTL::Global();
  LODWORD(v5) = CCD_BTL::RetrieveAllPaths(v7, this, a2);
  if ( (int)v5 < 0 )
  {
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v10);
    return (unsigned int)v5;
  }
  LODWORD(v5) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
  if ( (int)v5 < 0 )
  {
LABEL_9:
    if ( v6 )
      DxgkReleaseSessionModeChangeLock();
    return (unsigned int)v5;
  }
  v8 = CCD_TOPOLOGY::FillPathsTargetFlags(this);
  if ( v8 >= 0 )
  {
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v10);
  }
  else if ( v6 )
  {
    DxgkReleaseSessionModeChangeLock();
  }
  return (unsigned int)v8;
}
