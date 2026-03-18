/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x140984A10
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpCheckKcbStackAccess @ 0x140772FB8 (CmpCheckKcbStackAccess.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140981988 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140981D5C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpInitializeKeyNodeStack @ 0x140982128 (CmpInitializeKeyNodeStack.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140983680 (CmpCheckKeyNodeStackAccess.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14098542C (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140B61DD8 (CmpSubtreeEnumeratorStartForKcbStack.c)
 */

__int64 __fastcall CmpDoAccessCheckOnLayeredSubtree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int16 v12; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v13[14]; // [rsp+32h] [rbp-A6h] BYREF
  char v14[80]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v15; // [rsp+90h] [rbp-48h]

  memset_0(v13, 0, 0x66uLL);
  v12 = -2;
  CmpInitializeKeyNodeStack(v14);
  if ( (a6 & 1) != 0 )
  {
    if ( a1 )
    {
      v9 = CmpCheckKcbStackAccess(a1, 0LL);
      if ( v9 < 0 )
        goto LABEL_9;
      goto LABEL_12;
    }
    v9 = CmpCheckKeyNodeStackAccess();
    if ( v9 < 0 )
      goto LABEL_9;
  }
  if ( !a1 )
  {
    v8 = CmpSubtreeEnumeratorStartForKeyNodeStack(&v12, a3);
    goto LABEL_4;
  }
LABEL_12:
  v8 = CmpSubtreeEnumeratorStartForKcbStack(&v12, a1);
LABEL_4:
  while ( 1 )
  {
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( (unsigned int)CmpSubtreeEnumeratorAdvance(&v12) == -2147483622 )
    {
      v9 = 0;
      break;
    }
    v10 = *(_QWORD *)(408LL * v12 + v15 + 8);
    if ( v10 )
      v8 = CmpCheckKcbStackAccess(v10, 0LL);
    else
      v8 = CmpCheckKeyNodeStackAccess();
  }
LABEL_9:
  CmpSubtreeEnumeratorCleanup((__int64)&v12);
  return (unsigned int)v9;
}
