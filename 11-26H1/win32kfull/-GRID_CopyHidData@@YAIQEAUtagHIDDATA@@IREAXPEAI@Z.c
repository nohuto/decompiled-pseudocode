/*
 * XREFs of ?GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z @ 0x1400936DC
 * Callers:
 *     NtUserGetRawInputData @ 0x1400935E0 (NtUserGetRawInputData.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall GRID_CopyHidData(struct tagHIDDATA *const a1, int a2, void *volatile a3, unsigned int *a4)
{
  char *v6; // r14
  int v7; // r8d
  unsigned int v8; // edi
  int v10; // ebx
  int v11; // ecx

  v6 = (char *)a1 + 56;
  v7 = *((_DWORD *)a1 + 14);
  if ( v7 && (unsigned int)(v7 - 1) > 1 )
  {
    v11 = 6;
LABEL_17:
    UserSetLastError(v11);
    return 0xFFFFFFFFLL;
  }
  if ( a2 == 268435459 )
  {
    v8 = *((_DWORD *)a1 + 15);
    goto LABEL_5;
  }
  if ( a2 != 268435461 )
  {
    v11 = 87;
    goto LABEL_17;
  }
  v8 = 24;
LABEL_5:
  if ( !a3 )
  {
    RtlWriteULongToUser(a4, v8);
    return 0LL;
  }
  if ( (unsigned int)RtlReadULongFromUser(a4) < v8 )
  {
    RtlWriteULongToUser(a4, v8);
    UserSetLastError(122);
    return 0xFFFFFFFFLL;
  }
  v10 = a2 - 268435459;
  if ( v10 )
  {
    if ( v10 == 2 )
      RtlCopyToUser(a3, v6, 0x18uLL);
  }
  else
  {
    ProbeForWrite(a3, v8, 4u);
    memmove(a3, v6, v8);
  }
  return v8;
}
