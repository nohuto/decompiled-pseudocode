/*
 * XREFs of TppSetupNextWait @ 0x1800C7470
 * Callers:
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 * Callees:
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 *     TppRaiseHandleStatus @ 0x1800C7568 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160070 (ZwAssociateWaitCompletionPacket.c)
 */

__int64 __fastcall TppSetupNextWait(_QWORD *a1, void *a2, __int64 *a3)
{
  _RTL_SRWLOCK *v3; // rbp
  void *v4; // r9
  void *v8; // rcx
  NTSTATUS v9; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // ecx
  BOOLEAN v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = (_RTL_SRWLOCK *)a1[18];
  v4 = a1 + 49;
  a1[45] = a2;
  v8 = (void *)a1[46];
  v16 = 0;
  v9 = ZwAssociateWaitCompletionPacket(v8, v3[8].Ptr, a2, v4, a1, 0, 0LL, &v16);
  if ( v9 < 0 )
  {
    a1[45] = 0LL;
    TppRaiseHandleStatus((unsigned int)v9, a2, a1);
    return 0LL;
  }
  if ( !a3 || v16 )
    return 1LL;
  v11 = *a3;
  if ( *a3 < 0 )
  {
    v13 = -v11;
  }
  else
  {
    if ( v11 <= MEMORY[0x7FFE0014] )
    {
      LODWORD(v12) = 0;
LABEL_11:
      v14 = v12;
      goto LABEL_12;
    }
    v13 = v11 - MEMORY[0x7FFE0014];
  }
  v12 = v13 >> 16;
  v14 = 300;
  if ( v12 <= 0x12C )
    goto LABEL_11;
LABEL_12:
  TppSetTimer((__int64)a1, v3 + 14, a3, 0, v14);
  return 2LL;
}
