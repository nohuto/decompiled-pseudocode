/*
 * XREFs of MmGetNodeFastLargePageCounts @ 0x1404F6254
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x140822998 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 */

__int64 __fastcall MmGetNodeFastLargePageCounts(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rcx
  ULONG *v5; // rax
  ULONG *v6; // rdx
  int v7; // r11d
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  char v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  v2 = a2;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v3 = !_bittest64(&KeFeatureBits, 0x25u);
  v4 = &MiPageSizes[v3];
  do
  {
    if ( *v4 == 512 )
      break;
    v3 = (unsigned int)(v3 + 1);
    ++v4;
  }
  while ( (unsigned int)v3 < 3 );
  if ( (_DWORD)v3 == 3 )
    return 0LL;
  v5 = MiPartitionObjectToPartition((ULONG **)0xFFFFFFFFFFFFFFFFLL, 0, &v14);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = MiLargePageShifts[v3];
  v8 = *((_QWORD *)v5 + 2) + 56320 * v2;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = 2LL;
    v11 = (__int64 *)(((unsigned __int64)(unsigned int)v3 << 10) + v8 + 8);
    do
    {
      v12 = *v11++;
      v9 += ((unsigned __int64)MiPageSizes[v3] >> v7) * v12;
      --v10;
    }
    while ( v10 );
    if ( !(_DWORD)v3 )
      break;
    v3 = (unsigned int)(v3 - 1);
  }
  if ( v14 )
    PsDereferencePartition(*((_QWORD *)v6 + 32));
  return v9;
}
