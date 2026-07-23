/*
 * XREFs of HsaSetDeviceSvmCapabilities @ 0x1405AD0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 */

__int64 __fastcall HsaSetDeviceSvmCapabilities(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int *v4; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  int v12; // eax
  _DWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(unsigned int **)(a2 + 56);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = 0;
  v13 = (_DWORD *)v6;
  v9 = a1;
  v10 = *v4;
  if ( a4 )
  {
    if ( v6 )
      return 3221225488LL;
    v12 = ExtEnvAllocateMemory(a1, 0x70u, &v13);
    v6 = (unsigned __int64)v13;
    v7 = v12;
    if ( v12 >= 0 )
    {
      *v13 = 0;
      *(_DWORD *)(v6 + 48) = a3;
      *(_DWORD *)(v6 + 4) = 2;
      *(_QWORD *)(a2 + 40) = v6;
      if ( (unsigned int)v10 >= 0x10000 || (a1 = *(_QWORD *)(v9 + 40) >> 5, v10 >= a1) )
        v7 = -1073741811;
      else
        v6 = 0LL;
    }
  }
  if ( v6 )
  {
    ExtEnvFreeMemory(a1, v6);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  return v7;
}
