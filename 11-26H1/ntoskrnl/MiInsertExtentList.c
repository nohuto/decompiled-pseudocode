/*
 * XREFs of MiInsertExtentList @ 0x1406FF328
 * Callers:
 *     MiInsertCopyExtents @ 0x1406FF27C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x1406FF634 (MiMergeCopyExtents.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall MiInsertExtentList(unsigned int *a1)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  unsigned __int64 *v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *BugCheckParameter4; // rdx
  bool v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // r8

  v1 = (int)a1[1];
  v3 = 0;
  v4 = (unsigned __int64 *)&stru_140E2D2D0.WaitBlockFill11[8 * v1 + 160];
  v5 = a1 + 2;
  while ( v3 < *a1 )
  {
    v6 = v5[4];
    LOBYTE(v1) = 0;
    if ( v6 == 0x8000000000000000uLL )
      goto LABEL_14;
    BugCheckParameter4 = (_QWORD *)*v4;
    v8 = 0;
    if ( !*v4 )
      goto LABEL_13;
    v9 = v6 + v5[5];
    while ( 1 )
    {
      v10 = BugCheckParameter4[4];
      if ( v9 > v10 )
        break;
      v11 = (_QWORD *)*BugCheckParameter4;
      if ( !*BugCheckParameter4 )
      {
        v8 = 0;
        goto LABEL_13;
      }
LABEL_11:
      BugCheckParameter4 = v11;
    }
    v12 = v5[4];
    if ( v12 < BugCheckParameter4[5] + v10 )
      KeBugCheckEx(0x1Au, 0x1483uLL, v12, v5[5], (ULONG_PTR)BugCheckParameter4);
    v11 = (_QWORD *)BugCheckParameter4[1];
    if ( v11 )
      goto LABEL_11;
    v8 = 1;
LABEL_13:
    LOBYTE(v1) = RtlAvlInsertNodeEx(v4, (unsigned __int64)BugCheckParameter4, v8, v5);
LABEL_14:
    ++v3;
    v5 += 6;
  }
  return v1;
}
