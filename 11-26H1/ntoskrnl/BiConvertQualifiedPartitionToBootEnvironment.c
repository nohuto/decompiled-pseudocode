/*
 * XREFs of BiConvertQualifiedPartitionToBootEnvironment @ 0x14077BD14
 * Callers:
 *     BiConvertElementToRegistryData @ 0x1409A3524 (BiConvertElementToRegistryData.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertQualifiedPartitionToBootEnvironment(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v6; // ebp
  size_t v7; // r15
  char *Pool2; // rax
  char *v9; // rbx
  int v10; // eax

  v3 = 0;
  if ( a2 < 0x3C )
    return (unsigned int)-1073741811;
  v6 = *(_DWORD *)(a1 + 24) & 0x10000;
  v7 = v6 != 0 ? 88 : 72;
  Pool2 = (char *)ExAllocatePool2(0x102uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v7);
    *(_QWORD *)v9 = 6LL;
    *((_DWORD *)v9 + 2) = v7;
    *((_DWORD *)v9 + 8) = v6 != 0 ? 7 : 0;
    if ( v6 )
    {
      *((_OWORD *)v9 + 1) = *(_OWORD *)(a1 + 44);
      *((_DWORD *)v9 + 14) = 12;
      *((_DWORD *)v9 + 16) = 32;
      *(_OWORD *)(v9 + 72) = *(_OWORD *)(a1 + 28);
      *((_DWORD *)v9 + 1) |= 1u;
LABEL_10:
      *a3 = v9;
      return v3;
    }
    v10 = *(_DWORD *)(a1 + 20);
    if ( !v10 )
    {
      *((_DWORD *)v9 + 9) = 1;
      *((_DWORD *)v9 + 10) = *(_DWORD *)(a1 + 28);
      *((_QWORD *)v9 + 2) = *(_QWORD *)(a1 + 32);
      goto LABEL_10;
    }
    if ( v10 == 1 )
    {
      *((_DWORD *)v9 + 9) = 0;
      *(_OWORD *)(v9 + 40) = *(_OWORD *)(a1 + 28);
      *((_OWORD *)v9 + 1) = *(_OWORD *)(a1 + 44);
      goto LABEL_10;
    }
    ExFreePoolWithTag(v9, 0x4B444342u);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741670;
}
