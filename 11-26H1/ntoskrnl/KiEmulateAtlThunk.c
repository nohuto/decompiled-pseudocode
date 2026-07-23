/*
 * XREFs of KiEmulateAtlThunk @ 0x1403D5600
 * Callers:
 *     KiCheckForAtlThunk @ 0x1403D5594 (KiCheckForAtlThunk.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     MmCheckForSafeExecution @ 0x14087B208 (MmCheckForSafeExecution.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall KiEmulateAtlThunk(unsigned int *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  char *v11; // rdi
  __int16 UShortFromUser; // ax
  char v13; // si
  int ULongFromUser; // eax
  unsigned int v15; // esi
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int v20; // [rsp+20h] [rbp-98h]
  _QWORD v22[2]; // [rsp+60h] [rbp-58h] BYREF

  v20 = 0;
  memset(v22, 0, 13);
  if ( (KeGetCurrentThread()->ApcState.Process->Flags.ExecuteOptionsNV & 4) != 0 )
    return 0LL;
  v9 = *a1;
  v10 = (unsigned int)*a2;
  ProbeForRead((volatile void *)(unsigned int)v9, 1uLL, 1u);
  v11 = (char *)&KeGetPcr()->NtTib.$52D3C1DA33407D154F0BDE5002546D79::$6F04B0361B22895021FCD2048B05DFAB::Self[218].SubSystemTib
      + 2;
  UShortFromUser = RtlReadUShortFromUser(v11);
  v13 = UShortFromUser & 1;
  if ( (UShortFromUser & 1) != 0 )
    RtlWriteUShortToUser(v11, UShortFromUser & 0xFFFE);
  RtlCopyFromUser(v22, (void *)v9, 6uLL);
  if ( LOBYTE(v22[0]) != 89 || *(_DWORD *)((char *)v22 + 1) != 1627345240 || BYTE5(v22[0]) != 4 )
  {
    RtlCopyFromUser(v22, (void *)v9, 0xAuLL);
    if ( LOBYTE(v22[0]) == 0xB9 && BYTE5(v22[0]) == 0xE9 )
    {
      v17 = v9 + *(_DWORD *)((char *)v22 + 6) + 10;
      LOBYTE(v16) = 1;
      if ( !(unsigned __int8)MmCheckForSafeExecution(v9, v10, v17, v16) || !v13 )
        return v20;
      *a4 = *(_DWORD *)((char *)v22 + 1);
    }
    else
    {
      RtlCopyFromUser(v22, (void *)v9, 0xCuLL);
      if ( LOBYTE(v22[0]) == 0xBA && BYTE5(v22[0]) == 0xB9 && WORD1(v22[1]) == 0xE1FF )
      {
        v17 = *(_DWORD *)((char *)v22 + 6);
        if ( !(unsigned __int8)MmCheckForSafeExecution(v9, v10, *(unsigned int *)((char *)v22 + 6), 0LL) )
          return v20;
        *a5 = *(_DWORD *)((char *)v22 + 1);
        *a4 = v17;
      }
      else if ( LOBYTE(v22[0]) == 0xB9 && BYTE5(v22[0]) == 0xB8 && WORD1(v22[1]) == 0xE0FF )
      {
        v17 = *(_DWORD *)((char *)v22 + 6);
        LOBYTE(v18) = 1;
        if ( !(unsigned __int8)MmCheckForSafeExecution(v9, v10, *(unsigned int *)((char *)v22 + 6), v18) || !v13 )
          return v20;
        *a4 = *(_DWORD *)((char *)v22 + 1);
        *a3 = v17;
      }
      else
      {
        RtlCopyFromUser(v22, (void *)v9, 0xDuLL);
        if ( LODWORD(v22[0]) != 69485767 )
          return v20;
        if ( LOBYTE(v22[1]) != 0xE9 )
          return v20;
        v17 = v9 + *(_DWORD *)((char *)&v22[1] + 1) + 13;
        LOBYTE(v19) = 1;
        if ( !(unsigned __int8)MmCheckForSafeExecution(v9, v10, v17, v19) || !v13 )
          return v20;
        RtlWriteULongToUser(v10 + 4, HIDWORD(v22[0]));
      }
    }
    *a1 = v17;
    return 1;
  }
  ULongFromUser = RtlReadULongFromUser(v10 + 4);
  v15 = RtlReadULongFromUser((unsigned int)(ULongFromUser + 4));
  if ( (unsigned __int8)MmCheckForSafeExecution(v9, v10, v15, 0LL) )
  {
    *a4 = RtlReadULongFromUser(v10);
    *a3 = RtlReadULongFromUser(v10 + 4);
    RtlWriteULongToUser(v10 + 4, *a4);
    *a1 = v15;
    *a2 = v10 + 4;
    return 1;
  }
  return v20;
}
