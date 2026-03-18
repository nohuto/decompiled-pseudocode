/*
 * XREFs of ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1401404A4
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x140140298 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14021C210 (-bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x1401405A0 (-Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

bool __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(PRKAPC_STATE ApcState, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 SessionState; // rax

  v5 = *(_QWORD *)(W32GetSessionState(ApcState, a2, a3) + 96);
  v11 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  if ( *(_BYTE *)(v11 + 24272) && a2 == *(_QWORD *)(v5 + 24168) )
  {
    if ( !LOBYTE(ApcState[1].ApcListHead[0].Flink) )
    {
      SessionState = W32GetSessionState(v10, v9, v11);
      Gre::AttachProcessObj::Attach(ApcState, *(PRKPROCESS *)(*(_QWORD *)(SessionState + 96) + 24176LL));
    }
    LOBYTE(ApcState[1].ApcListHead[1].Flink) = 1;
  }
  return (bool)ApcState[1].ApcListHead[1].Flink;
}
