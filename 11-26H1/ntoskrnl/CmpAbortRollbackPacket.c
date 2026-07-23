/*
 * XREFs of CmpAbortRollbackPacket @ 0x140B4E8A4
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     TmRollbackEnlistment @ 0x140536C50 (TmRollbackEnlistment.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408B48C4 (CmpRollbackLightWeightTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1, _BYTE *a2)
{
  int v2; // esi
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // edi

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v6 )
        break;
LABEL_19:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v6 & 1) != 0 )
    {
      v7 = CmpRollbackLightWeightTransaction(v6 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v7 >= 0 )
      {
        CmpTransDereferenceTransaction(v6);
LABEL_10:
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
LABEL_16:
        if ( v2 >= 0 && v7 < 0 )
          v2 = v7;
        goto LABEL_19;
      }
    }
    else
    {
      v7 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8 * v5), 0LL);
      if ( v7 >= 0 )
      {
        ObfDereferenceObject((PVOID)v6);
        goto LABEL_10;
      }
    }
    if ( v7 == -1072103403 || v7 == -1072103405 || v7 == -1072103402 )
    {
      v7 = 0;
      if ( a2 )
        *a2 = 1;
    }
    goto LABEL_16;
  }
  return (unsigned int)v2;
}
