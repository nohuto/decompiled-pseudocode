/*
 * XREFs of IvtCreateDevice @ 0x1405B1C90
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     IvtAllocateDevice @ 0x1405B1BDC (IvtAllocateDevice.c)
 *     IvtIommuFindDevice @ 0x1405B1DE8 (IvtIommuFindDevice.c)
 */

__int64 __fastcall IvtCreateDevice(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( (unsigned __int8)IvtIommuFindDevice() )
  {
    v9 = IvtAllocateDevice(*(unsigned __int16 *)(a2 + 12), *(_WORD *)(a2 + 10) & 3, a4, v8, &v16);
    if ( v9 < 0 )
    {
      v13 = v16;
      if ( v16 )
      {
        v14 = *(_QWORD *)(v16 + 72);
        if ( v14 )
          ExtEnvFreeMemory(v10, v14);
        ExtEnvFreeMemory(v10, v13);
      }
    }
    else
    {
      v11 = v16;
      v12 = a5;
      *(_BYTE *)(v16 + 35) = (a3 & 8) != 0;
      *(_BYTE *)(v11 + 48) = (a3 & 0x10) != 0;
      *v12 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v9;
}
