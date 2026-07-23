/*
 * XREFs of HsaCreateDevice @ 0x1405ABBA0
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     HsaIommuFindDevice @ 0x1405ACA68 (HsaIommuFindDevice.c)
 */

__int64 __fastcall HsaCreateDevice(__int64 a1, int *a2, char a3, __int64 a4, unsigned __int64 *a5)
{
  int v5; // eax
  int Memory; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a2;
  v17 = 0LL;
  if ( (v5 == 1 || v5 == 2) && (unsigned __int8)HsaIommuFindDevice() )
  {
    v10 = ExtEnvAllocateMemory(v9, 0x48u, &v17);
    v12 = v17;
    Memory = v10;
    if ( v10 < 0 || (v13 = v17 + 56, Memory = ExtEnvAllocateMemory(v11, 8u, (_QWORD *)(v17 + 56)), Memory < 0) )
    {
      if ( v12 )
      {
        v15 = *(_QWORD *)(v12 + 56);
        if ( v15 )
          ExtEnvFreeMemory(v11, v15);
        ExtEnvFreeMemory(v11, v12);
      }
    }
    else
    {
      **(_DWORD **)v13 = *((unsigned __int16 *)a2 + 6);
      *(_DWORD *)(*(_QWORD *)v13 + 4LL) = *((_WORD *)a2 + 5) & 3;
      *(_BYTE *)(v12 + 35) = (a3 & 8) != 0;
      v14 = a5;
      Memory = 0;
      *(_BYTE *)(v12 + 48) = (a3 & 0x10) != 0;
      *v14 = v12;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)Memory;
}
