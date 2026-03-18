/*
 * XREFs of SmProcessCompressionAcceleratorRequest @ 0x140819228
 * Callers:
 *     SmQueryStoreInformation @ 0x140B26304 (SmQueryStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x140A53F9C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessCompressionAcceleratorRequest(char *a1, size_t Size, _DWORD *a3, char a4)
{
  size_t v6; // rsi
  int v8; // ebx
  char *v9; // rdx
  __int64 v10; // r8
  __int64 ProcessPartition; // rax
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 Src; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  _BYTE v16[24]; // [rsp+60h] [rbp-18h] BYREF

  v6 = (unsigned int)Size;
  v13 = 0LL;
  Src = 0LL;
  v15 = 0LL;
  if ( (unsigned int)Size < 0x18 )
  {
    v8 = -1073741306;
    goto LABEL_25;
  }
  if ( a4 )
  {
    ProbeForWrite(a1, (unsigned int)Size, 8u);
    RtlCopyFromUser(&Src, a1, 0x18uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&Src, a1, 0x18uLL);
  }
  if ( (_BYTE)Src != 1 )
  {
    v8 = -1073741735;
    goto LABEL_25;
  }
  if ( (_DWORD)v6 != 24 )
  {
    v8 = -1073741820;
    goto LABEL_25;
  }
  v9 = a1 + 24;
  if ( a4 )
    RtlCopyFromUser(v16, v9, 0LL);
  else
    RtlCopyVolatileMemory(v16, v9, 0LL);
  if ( (Src & 0xFFFFFF00) != 0 || DWORD1(Src) )
  {
    v8 = -1073741811;
  }
  else
  {
    if ( !*((_QWORD *)&Src + 1) )
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
LABEL_18:
      LODWORD(v15) = *(_DWORD *)(ProcessPartition + 2720);
      v8 = 0;
      if ( a4 )
        RtlCopyToUser(a1, &Src, v6);
      else
        RtlCopyVolatileMemory(a1, &Src, v6);
      *a3 = 24;
      goto LABEL_25;
    }
    LOBYTE(v10) = a4;
    v8 = PsReferencePartitionByHandle(*((_QWORD *)&Src + 1), 1LL, v10, 1381068115LL, &v13);
    if ( v8 >= 0 )
    {
      ProcessPartition = *(_QWORD *)(v13 + 24);
      if ( ProcessPartition )
        goto LABEL_18;
      v8 = -1073741399;
    }
  }
LABEL_25:
  if ( v13 )
    PsDereferencePartition(v13);
  return (unsigned int)v8;
}
