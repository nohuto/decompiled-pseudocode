/*
 * XREFs of TppSetupNextWait @ 0x1800C9CF0
 * Callers:
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 * Callees:
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 *     TppRaiseHandleStatus @ 0x1800C9DE8 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160170 (ZwAssociateWaitCompletionPacket.c)
 */

__int64 __fastcall TppSetupNextWait(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1[18];
  v4 = a1 + 49;
  a1[45] = a2;
  v8 = a1[46];
  v16 = 0;
  v9 = ZwAssociateWaitCompletionPacket(v8, *(_QWORD *)(v3 + 64), a2, v4, a1, 0, 0LL, &v16);
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
  TppSetTimer((__int64)a1, (volatile signed __int64 *)(v3 + 112), a3, 0, v14);
  return 2LL;
}
