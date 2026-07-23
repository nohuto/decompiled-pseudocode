/*
 * XREFs of MiUnloadApproved @ 0x140B3D458
 * Callers:
 *     MiDereferenceImports @ 0x140B3D3D0 (MiDereferenceImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     strcmp @ 0x140742840 (strcmp.c)
 *     MiCallDllUnload @ 0x14087B384 (MiCallDllUnload.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  __int16 v1; // ax
  __int64 v4; // rcx
  char *v5; // r14
  unsigned int v6; // ebx
  __int64 (*v7)(void); // rax
  __int64 (*v8)(void); // rdi
  int v9; // r12d
  char *v10; // rax
  int v11; // ebp
  char *v12; // r13
  int v13; // ebp
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rax
  __int64 (*v17)(void); // rdx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  char *v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v1 = *(_WORD *)(a1 + 108);
  if ( v1 != 1 )
  {
    *(_WORD *)(a1 + 108) = v1 - 1;
    return 0LL;
  }
  if ( (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x80u) == 0 )
  {
    v5 = *(char **)(v4 + 48);
    v6 = 0;
    Size = 0;
    v7 = (__int64 (*)(void))RtlImageDirectoryEntryToData(v5, 1u, 0, &Size);
    v8 = v7;
    if ( v7 )
    {
      v9 = 0;
      v10 = &v5[*((unsigned int *)v7 + 8)];
      v11 = *((_DWORD *)v8 + 6);
      v12 = &v5[*((unsigned int *)v8 + 9)];
      v19 = v10;
      v13 = v11 - 1;
      while ( v13 >= v9 )
      {
        v14 = (v9 + v13) >> 1;
        v20 = v14;
        v15 = strcmp("DllUnload", &v5[*(unsigned int *)&v10[4 * v14]]);
        if ( v15 >= 0 )
        {
          if ( v15 <= 0 )
          {
            v16 = *(unsigned __int16 *)&v12[2 * v20];
            if ( (unsigned int)v16 < *((_DWORD *)v8 + 5) )
            {
              v17 = (__int64 (*)(void))&v5[*(unsigned int *)&v5[4 * v16 + *((unsigned int *)v8 + 7)]];
              if ( (unsigned __int64)v17 <= (unsigned __int64)v8 || (unsigned __int64)v17 >= (unsigned __int64)v8 + Size )
              {
                if ( v17 )
                {
                  LOBYTE(v6) = (int)MiCallDllUnload(a1, v17) >= 0;
                  return v6;
                }
              }
            }
            return 0LL;
          }
          v9 = v14 + 1;
        }
        else
        {
          if ( !v14 )
            return 0LL;
          v13 = v14 - 1;
        }
        v10 = v19;
      }
    }
    return 0LL;
  }
  return 1LL;
}
