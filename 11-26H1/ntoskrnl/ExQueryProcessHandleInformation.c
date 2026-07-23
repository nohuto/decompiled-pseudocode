/*
 * XREFs of ExQueryProcessHandleInformation @ 0x140A4DD2C
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x140444160 (ExLockHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x140A4DF70 (ExpGetNextHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(unsigned int *a1, _QWORD *a2, int a3, int *a4, char a5)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  int v7; // r13d
  __int64 v8; // rbx
  signed __int64 *NextHandleTableEntry; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  __int64 *v12; // rsi
  unsigned __int64 HandlePointer; // rax
  int v14; // r12d
  int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rdi
  int v18; // esi
  int v20; // [rsp+20h] [rbp-88h]
  char *v21; // [rsp+28h] [rbp-80h]
  signed __int64 *v22; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-68h]
  _QWORD Src[3]; // [rsp+48h] [rbp-60h] BYREF
  int v26; // [rsp+60h] [rbp-48h]
  int v27; // [rsp+64h] [rbp-44h]
  int v28; // [rsp+68h] [rbp-40h]
  int v29; // [rsp+6Ch] [rbp-3Ch]
  unsigned int v32; // [rsp+C0h] [rbp+18h]

  v5 = (__int64)a1;
  v21 = (char *)(a2 + 2);
  v24 = (unsigned int)(a3 - 16) / 0x28uLL;
  v32 = 0;
  v6 = 0;
  v7 = 16;
  v20 = 0;
  v8 = 4LL;
  NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, 4LL);
  v23 = 4LL;
  while ( 1 )
  {
    v12 = NextHandleTableEntry;
    v22 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v10 < v11 )
    {
      if ( ExLockHandleTableEntry(v5, NextHandleTableEntry) )
      {
        HandlePointer = ExGetHandlePointer(v12);
        v14 = ((__int64)*(unsigned int *)v12 >> 17) & 7 | 8;
        if ( (v12[1] & 0x2000000) == 0 )
          LOBYTE(v14) = ((__int64)*(unsigned int *)v12 >> 17) & 7;
        v15 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                 + 40);
        v16 = *(_QWORD *)HandlePointer;
        v17 = *(_QWORD *)(HandlePointer + 8);
        v18 = v12[1] & 0x1FFFFFF;
        ExUnlockHandleTableEntry(a1, v22);
        v7 += 40;
        ++v32;
        v29 = 0;
        Src[0] = v8;
        Src[1] = v17;
        Src[2] = v16;
        v26 = v18;
        v27 = v15;
        v28 = v14 & 7;
        if ( a5 )
          RtlCopyToUser(v21, Src, 0x28uLL);
        else
          RtlCopyVolatileMemory(v21, Src, 0x28uLL);
        if ( a5 )
          RtlWriteULong64ToUser(a2, v32);
        else
          *a2 = v32;
        v21 += 40;
        v12 = v22;
        v6 = v20;
        v5 = (__int64)a1;
      }
    }
    else if ( (v8 & 0x3FC) != 0 )
    {
      if ( *NextHandleTableEntry )
      {
        v7 += 40;
        v6 = -1073741820;
        v20 = -1073741820;
      }
    }
    NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(v5, v12, &v23);
    v8 = v23;
    v10 = v32;
    v11 = v24;
  }
  if ( a4 )
  {
    if ( a5 )
      RtlWriteULongToUser(a4, v7);
    else
      *a4 = v7;
  }
  return v6;
}
