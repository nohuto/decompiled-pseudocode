/*
 * XREFs of SmProcessConfigRequest @ 0x14081F7D0
 * Callers:
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     SmpSystemStoreCreate @ 0x140820570 (SmpSystemStoreCreate.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 */

__int64 __fastcall SmProcessConfigRequest(void *Src, unsigned int a2, KPROCESSOR_MODE a3)
{
  int Partition; // edi
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int16 v10; // bx
  int v11; // r15d
  unsigned int v12; // eax
  __int64 ProcessPartition; // rcx
  __int64 v14; // r14
  unsigned int v15; // edx
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int128 Address; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+88h] [rbp+10h] BYREF
  KPROCESSOR_MODE v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = a3;
  v21 = 0LL;
  v17 = 0LL;
  Address = 0LL;
  v19 = 0;
  if ( a2 < 0x20 )
  {
    Partition = -1073741306;
    goto LABEL_48;
  }
  if ( a3 )
  {
    ProbeForWrite(Src, 0x20uLL, 8u);
    RtlCopyFromUser(&v17, Src, 0x20uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v17, Src, 0x20uLL);
  }
  if ( (_BYTE)v17 != 9 )
  {
    Partition = -1073741735;
    goto LABEL_48;
  }
  if ( a2 != 32 )
  {
    Partition = -1073741820;
    goto LABEL_48;
  }
  if ( (v17 & 0xFFFF00) != 0 )
    goto LABEL_47;
  v8 = BYTE3(v17);
  if ( BYTE3(v17) >= 3u || ((_QWORD)Address == 0LL) != (*((_QWORD *)&Address + 1) == 0LL) )
    goto LABEL_47;
  if ( v8 )
  {
    if ( !*((_QWORD *)&v17 + 1) && !(_QWORD)Address )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
LABEL_46:
          Partition = 0;
          goto LABEL_48;
        }
        if ( (unsigned int)(DWORD1(v17) - 4) <= 0x1C && DWORD1(v17) && ((DWORD1(v17) - 1) & DWORD1(v17)) == 0 )
        {
          dword_140E360D4 = DWORD1(v17);
          goto LABEL_46;
        }
      }
      else if ( DWORD1(v17) <= 1 )
      {
        PspOutSwapSharedPages = DWORD1(v17);
        goto LABEL_46;
      }
    }
    goto LABEL_47;
  }
  v10 = WORD2(v17);
  if ( DWORD1(v17) >= 0x2000 )
    goto LABEL_47;
  v11 = DWORD1(v17) >> 1;
  if ( ((DWORD1(v17) >> 1) & 3) == 3 )
    goto LABEL_47;
  v12 = BYTE4(v17) & 0x18;
  if ( v12 >= 0x18 )
    goto LABEL_47;
  if ( (((DWORD1(v17) >> 1) & 3) == 2 || v12 == 16) && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    Partition = -1073741790;
    goto LABEL_48;
  }
  if ( (v10 & 0x180) == 0x80 )
    goto LABEL_47;
  if ( !(_QWORD)Address )
    goto LABEL_37;
  if ( *((_QWORD *)&Address + 1) != 4LL )
  {
LABEL_47:
    Partition = -1073741811;
    goto LABEL_48;
  }
  if ( a3 )
  {
    ProbeForWrite((volatile void *)Address, 4uLL, 4u);
    RtlCopyFromUser(&v19, (void *)Address, 4uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v19, (const void *)Address, 4uLL);
  }
LABEL_37:
  if ( !*((_QWORD *)&v17 + 1) )
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
LABEL_42:
    v15 = v11 & 0xF | *(_DWORD *)(ProcessPartition + 2336) & 0xFFFFC010 | (2 * (v10 & 0x1FE0 | (16 * (v10 & 1))));
    if ( (_QWORD)Address )
      *(_DWORD *)(ProcessPartition + 2340) = v19;
    *(_DWORD *)(ProcessPartition + 2336) = v15;
    if ( (v15 & 3) != 0 )
      SmpSystemStoreCreate();
    goto LABEL_46;
  }
  LOBYTE(v7) = a3;
  Partition = PsReferencePartitionByHandle(*((_QWORD *)&v17 + 1), 2LL, v7, 1380150611LL, &v21);
  if ( Partition >= 0 )
  {
    v14 = v21;
    Partition = SmCreatePartition(v21);
    if ( Partition >= 0 )
    {
      ProcessPartition = *(_QWORD *)(v14 + 24);
      goto LABEL_42;
    }
  }
LABEL_48:
  if ( v21 )
    PsDereferencePartition(v21);
  return (unsigned int)Partition;
}
