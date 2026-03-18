/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140AFF7BC (CmEnumerateValueKeyFromMergedView.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransDereferenceTransaction @ 0x1408ECC08 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
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
