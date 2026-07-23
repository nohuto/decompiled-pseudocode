/*
 * XREFs of PspQueryLastCallThread @ 0x140A2B038
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall PspQueryLastCallThread(__int64 a1, __int64 a2, int a3, _DWORD *a4, char a5)
{
  int v8; // r8d
  __int64 v9; // rdx
  __int16 v10; // r13
  int v11; // r9d
  __int64 v12; // r12
  int v13; // edx
  signed __int32 v15[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( ((a3 - 16) & 0xFFFFFFF7) != 0 )
    return 3221225476LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 340);
  _InterlockedOr(v15, 0);
  if ( *(_BYTE *)(a1 + 388) == 5 && *(_BYTE *)(a1 + 562) == 1 )
  {
    v9 = *(_QWORD *)(a1 + 136);
    v10 = *(_WORD *)(a1 + 128);
    v11 = *(_DWORD *)(a1 + 436);
    _InterlockedOr(v15, 0);
    if ( v8 == *(_DWORD *)(a1 + 340) )
    {
      v12 = KeMaximumIncrement * (unsigned __int64)(unsigned int)(MEMORY[0xFFFFF78000000320] - v11);
      if ( a5 )
        RtlWriteULong64ToUser((_QWORD *)a2, v9);
      else
        *(_QWORD *)a2 = v9;
      if ( a5 )
        RtlWriteUShortToUser((_WORD *)(a2 + 8), v10);
      else
        *(_WORD *)(a2 + 8) = v10;
      if ( a3 != 16 )
      {
        if ( a5 )
          RtlWriteULong64ToUser((_QWORD *)(a2 + 16), v12);
        else
          *(_QWORD *)(a2 + 16) = v12;
      }
      if ( !a4 )
        return 0LL;
      if ( a3 == 16 )
      {
        if ( !a5 )
        {
          *a4 = 16;
          return 0LL;
        }
        v13 = 16;
      }
      else
      {
        if ( !a5 )
        {
          *a4 = 24;
          return 0LL;
        }
        v13 = 24;
      }
      RtlWriteULongToUser(a4, v13);
      return 0LL;
    }
  }
  return 3221225473LL;
}
