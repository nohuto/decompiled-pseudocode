/*
 * XREFs of IvtSetDeviceSvmCapabilities @ 0x1405AA190
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateContextTable @ 0x140508E08 (IvtAllocateContextTable.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 */

__int64 __fastcall IvtSetDeviceSvmCapabilities(__int64 a1, __int64 a2, int a3, char a4)
{
  int ContextTable; // ebx
  unsigned __int64 v6; // rdx
  _DWORD *v10; // rax
  unsigned int *v11; // rdx
  _DWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  ContextTable = 0;
  v6 = *(_QWORD *)(a2 + 40);
  v12 = (_DWORD *)v6;
  if ( a4 )
  {
    if ( v6 )
      return 3221225488LL;
    ContextTable = ExtEnvAllocateMemory(a1, 0x70u, &v12);
    if ( ContextTable < 0 )
    {
      v6 = (unsigned __int64)v12;
    }
    else
    {
      v10 = v12;
      *v12 = 0;
      v10[12] = a3;
      v10[1] = 2;
      v11 = *(unsigned int **)(a2 + 72);
      *(_QWORD *)(a2 + 40) = v10;
      ContextTable = IvtAllocateContextTable(a1, *v11);
      v6 = 0LL;
    }
  }
  if ( v6 )
  {
    ExtEnvFreeMemory(a1, v6);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  return (unsigned int)ContextTable;
}
