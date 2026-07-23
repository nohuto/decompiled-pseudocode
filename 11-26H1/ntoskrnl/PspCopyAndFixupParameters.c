/*
 * XREFs of PspCopyAndFixupParameters @ 0x1409E5AE8
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 */

__int64 __fastcall PspCopyAndFixupParameters(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  size_t v5; // r13
  __int64 v6; // rdi
  struct _KPROCESS *Process; // r10
  char PreviousMode; // r9
  __int64 v9; // rbx
  __int64 ULong64FromUser; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  int v23; // eax
  __int64 *v24; // r14
  __int64 v25; // rbx
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+90h] [rbp+8h]
  char v29; // [rsp+98h] [rbp+10h]
  __int64 v30; // [rsp+A0h] [rbp+18h] BYREF
  struct _KPROCESS *v31; // [rsp+A8h] [rbp+20h]

  v28 = a1;
  v30 = 0LL;
  v4 = *(unsigned int **)(a3 + 216);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v6 = *(_QWORD *)(a3 + 224);
  Process = KeGetCurrentThread()->ApcState.Process;
  v31 = Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 16) & 0x40) != 0 && (*(_BYTE *)(a3 + 17) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 88) == 3 && (int)v4[4] > 0 )
  {
    v23 = ObDuplicateObject(a1, *((void **)v4 + 2), Process, &v30, 0, 0, 6, PreviousMode);
    a1 = v28;
    Process = v31;
    PreviousMode = v29;
    if ( v23 >= 0 )
      *((_QWORD *)v4 + 2) = v30;
  }
  if ( a2 )
  {
    v24 = (__int64 *)(v4 + 8);
    v25 = 0LL;
    while ( (unsigned int)v25 < 3 )
    {
      v26 = *(void **)&a2[2 * v25];
      if ( v26 )
      {
        if ( (a2[2 * v25] & 0x80000000) != 0 )
        {
          v27 = 0LL;
          v30 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, v26, Process, &v30, 0, 0, 6, PreviousMode);
          v27 = v30;
        }
        if ( (int)result < 0 )
        {
          if ( a2 == v4 + 8 )
            return result;
        }
        else
        {
          *v24 = v27;
        }
      }
      ++v24;
      v25 = (unsigned int)(v25 + 1);
      a1 = v28;
      Process = v31;
      PreviousMode = v29;
    }
  }
  v9 = v6 - (_QWORD)v4;
  RtlCopyToUser((void *)v6, v4, v5);
  ULong64FromUser = RtlReadULong64FromUser((volatile void *)(v6 + 64));
  if ( ULong64FromUser )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 64), ULong64FromUser + v9);
  v11 = RtlReadULong64FromUser((volatile void *)(v6 + 88));
  if ( v11 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 88), v11 + v9);
  v12 = RtlReadULong64FromUser((volatile void *)(v6 + 104));
  if ( v12 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 104), v12 + v9);
  v13 = RtlReadULong64FromUser((volatile void *)(v6 + 120));
  if ( v13 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 120), v13 + v9);
  v14 = RtlReadULong64FromUser((volatile void *)(v6 + 184));
  if ( v14 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 184), v14 + v9);
  v15 = RtlReadULong64FromUser((volatile void *)(v6 + 200));
  if ( v15 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 200), v15 + v9);
  v16 = RtlReadULong64FromUser((volatile void *)(v6 + 216));
  if ( v16 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 216), v16 + v9);
  v17 = RtlReadULong64FromUser((volatile void *)(v6 + 232));
  if ( v17 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 232), v17 + v9);
  v18 = RtlReadULong64FromUser((volatile void *)(v6 + 1048));
  if ( v18 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 1048), v18 + v9);
  v19 = RtlReadULong64FromUser((volatile void *)(v6 + 1064));
  if ( v19 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 1064), v19 + v9);
  v20 = RtlReadULong64FromUser((volatile void *)(v6 + 1072));
  if ( v20 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 1072), v20 + v9);
  v21 = RtlReadULong64FromUser((volatile void *)(v6 + 128));
  if ( v21 )
    RtlWriteULong64ToUser((_QWORD *)(v6 + 128), v21 + v9);
  RtlWriteULong64ToUser(&KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink[2].Flink, v6);
  return 0LL;
}
