/*
 * XREFs of PsQueryFullProcessImageName @ 0x140A892B4
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall PsQueryFullProcessImageName(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4, char a5)
{
  __int128 *v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 *v12; // r15
  size_t v13; // r8
  void *v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-38h]

  v7 = *(__int128 **)(a1 + 848);
  v8 = *a4;
  *a4 = *((unsigned __int16 *)v7 + 1);
  if ( *((unsigned __int16 *)v7 + 1) > v8 )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v16 = *v7;
    v9 = *(_QWORD *)v7;
    v10 = 0;
    v11 = 0LL;
    if ( WORD1(*v7) )
      v11 = (__int64)a3;
    v12 = (__int64 *)(a2 + 2);
    if ( a5 )
    {
      RtlWriteULongToUser(a2, v9);
      RtlWriteULong64ToUser(v12, v11);
    }
    else
    {
      *a2 = v9;
      *v12 = v11;
    }
    if ( WORD1(v16) )
    {
      v13 = *((unsigned __int16 *)v7 + 1);
      v14 = (void *)*((_QWORD *)v7 + 1);
      if ( a5 )
        RtlCopyToUser(a3, v14, v13);
      else
        RtlCopyVolatileMemory(a3, v14, v13);
    }
  }
  return v10;
}
