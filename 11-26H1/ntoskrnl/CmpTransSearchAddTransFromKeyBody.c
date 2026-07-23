/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x1408F48C4 (CmpTransReferenceTransaction.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // r9
  int v7; // edi
  __int64 Count; // r8
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[7];
  v3 = 0LL;
  v11 = 0LL;
  if ( !v2 && !a1[8] )
    return (unsigned int)-1072103422;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(struct _EX_RUNDOWN_REF **)(v5 + 32);
  if ( (v2 & 1) != 0 )
  {
    v7 = CmpTransReferenceTransaction(v2);
    if ( v7 >= 0 )
    {
      if ( *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFEuLL) + 16) )
      {
        v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
        v7 = 0;
      }
      else
      {
        v7 = -1072103422;
      }
      if ( v2 )
        CmpTransDereferenceTransaction(v2);
    }
  }
  else
  {
    Count = v6[520].Count;
    if ( !Count )
      return (unsigned int)-1072103419;
    v10 = CmpTransSearchAddTrans(v2, a1[8], Count, v6, 0, &v11);
    v3 = v11;
    v7 = v10;
  }
  if ( v7 >= 0 )
  {
    *a2 = v3;
    return 0;
  }
  return (unsigned int)v7;
}
