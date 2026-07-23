/*
 * XREFs of ExpDiskEnumCallback @ 0x1406D3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetPartitionTableInfo @ 0x140A2E19C (ExpGetPartitionTableInfo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall ExpDiskEnumCallback(const WCHAR *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  unsigned int v5; // r8d
  __int64 v6; // rdx
  int v7; // eax

  v4 = 0;
  if ( (int)ExpGetPartitionTableInfo(a1) >= 0 && MEMORY[0] == 1 )
  {
    v5 = 0;
    while ( v5 < MEMORY[4] )
    {
      v6 = *(_QWORD *)(144LL * v5 + 0x60) - **(_QWORD **)a3;
      if ( !v6 )
        v6 = *(_QWORD *)(144LL * v5 + 0x68) - *(_QWORD *)(*(_QWORD *)a3 + 8LL);
      v7 = ++v5;
      if ( !v6 )
      {
        *(_DWORD *)(a3 + 8) = v7;
        v4 = 1;
        *(_BYTE *)(a3 + 12) = 1;
        return v4;
      }
    }
  }
  return v4;
}
