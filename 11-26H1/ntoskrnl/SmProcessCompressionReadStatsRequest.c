/*
 * XREFs of SmProcessCompressionReadStatsRequest @ 0x14081F5D4
 * Callers:
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessCompressionReadStatsRequest(char *a1, size_t Size, _DWORD *a3, char a4)
{
  SIZE_T v6; // r14
  int v8; // ebx
  char *v9; // rdx
  __int64 v10; // r8
  __int64 ProcessPartition; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v15; // [rsp+40h] [rbp-E8h] BYREF
  _DWORD Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-D0h]
  _BYTE v18[136]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-40h]
  _QWORD v20[7]; // [rsp+F0h] [rbp-38h] BYREF

  v6 = (unsigned int)Size;
  v15 = 0LL;
  memset_0(Src, 0, 0xA0uLL);
  if ( (unsigned int)v6 < 0xA0 )
  {
    v8 = -1073741306;
    goto LABEL_27;
  }
  if ( a4 )
  {
    ProbeForWrite(a1, v6, 8u);
    RtlCopyFromUser(Src, a1, 0xA0uLL);
  }
  else
  {
    RtlCopyVolatileMemory(Src, a1, 0xA0uLL);
  }
  if ( LOBYTE(Src[0]) != 1 )
  {
    v8 = -1073741735;
    goto LABEL_27;
  }
  if ( (_DWORD)v6 != 160 )
  {
    v8 = -1073741820;
    goto LABEL_27;
  }
  v9 = a1 + 160;
  if ( a4 )
    RtlCopyFromUser(v20, v9, 0LL);
  else
    RtlCopyVolatileMemory(v20, v9, 0LL);
  if ( (Src[0] & 0xFFFFFF00) != 0 || Src[1] )
  {
    v8 = -1073741811;
    goto LABEL_27;
  }
  if ( v17 )
  {
    LOBYTE(v10) = a4;
    v8 = PsReferencePartitionByHandle(v17, 1LL, v10, 1381068115LL, &v15);
    if ( v8 < 0 )
      goto LABEL_27;
    ProcessPartition = *(_QWORD *)(v15 + 24);
    if ( !ProcessPartition )
    {
      v8 = -1073741399;
      goto LABEL_27;
    }
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v12 = v18;
  v13 = 17LL;
  do
  {
    *v12 = *(_QWORD *)((char *)v12 + ProcessPartition - (_QWORD)v18 + 2752);
    ++v12;
    --v13;
  }
  while ( v13 );
  v19 = *(_QWORD *)(ProcessPartition + 2896);
  v8 = 0;
  if ( a4 )
    RtlCopyToUser(a1, Src, v6);
  else
    RtlCopyVolatileMemory(a1, Src, v6);
  *a3 = 160;
LABEL_27:
  if ( v15 )
    PsDereferencePartition(v15);
  return (unsigned int)v8;
}
