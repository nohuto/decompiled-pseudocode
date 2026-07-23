/*
 * XREFs of IopAddCodeRegion @ 0x1404E058C
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlULongLongSub @ 0x1404A8EE4 (RtlULongLongSub.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IopAddCodeRegion(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  __int64 v6; // r12
  char v8; // cl
  char *v9; // rsi
  ULONGLONG v10; // r13
  ULONGLONG v11; // r14
  PVOID *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rbp
  unsigned int *v16; // rdx
  unsigned int *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  ULONGLONG pullResult[11]; // [rsp+20h] [rbp-58h] BYREF
  char v23; // [rsp+90h] [rbp+18h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp+20h] BYREF

  pullResult[0] = 0LL;
  v3 = a2 + 7;
  v4 = 4112;
  v6 = v3 & 0xFFFFFFF8;
  v8 = 0;
  v9 = 0LL;
  v23 = 0;
  v10 = -1LL;
  if ( (unsigned int)(v6 + 4112) >= 0x3FFFC )
  {
    if ( (unsigned int)v6 >= 0x3FFFC )
      v4 = 0;
    else
      v4 = 262140 - v6;
  }
  v11 = *(_QWORD *)(a1 + 248);
  v12 = (PVOID *)PsLoadedModuleList;
  if ( v4 <= 0x10 )
    return a2;
  v13 = v4 - 16;
  while ( v12 != &PsLoadedModuleList )
  {
    v14 = (char *)v12[6];
    if ( v11 >= (unsigned __int64)v14 && v11 < (unsigned __int64)&v14[*((unsigned int *)v12 + 38)] )
    {
      OutHeaders = 0LL;
      RtlImageNtHeaderEx(1u, v14, 0LL, &OutHeaders);
      if ( !OutHeaders )
        return a2;
      v16 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
      v17 = &v16[10 * OutHeaders->FileHeader.NumberOfSections];
      while ( 1 )
      {
        if ( v16 >= v17 )
        {
          v8 = v23;
          goto LABEL_7;
        }
        v9 = &v14[v16[3]];
        v10 = (ULONGLONG)&v9[v16[2]];
        if ( v11 >= (unsigned __int64)v9 && v11 < v10 )
          break;
        v16 += 10;
      }
      if ( (v16[9] & 0x2000000) != 0 )
        return a2;
      v8 = 1;
      v23 = 1;
    }
LABEL_7:
    v12 = (PVOID *)*v12;
  }
  if ( !v8 )
    return a2;
  v18 = (unsigned __int64)(unsigned int)v13 >> 1;
  if ( *(_QWORD *)(a1 + 248) - v18 + 1 >= (unsigned __int64)v9 )
    v9 = (char *)(*(_QWORD *)(a1 + 248) - v18 + 1);
  if ( (unsigned __int64)&v9[v13] > v10 )
  {
    if ( RtlULongLongSub(v10, (ULONGLONG)v9, pullResult) < 0 )
      return a2;
    LODWORD(v13) = pullResult[0];
    if ( pullResult[0] > 0xFFFFFFFF )
      return a2;
  }
  if ( !(_DWORD)v13 )
    return a2;
  a3[1038] |= 0x800u;
  a3[2078] = v6;
  a3[2079] = 1;
  v19 = (v6 + 23) & 0xFFFFFFF8;
  *(_QWORD *)((char *)a3 + v6) = v9;
  *(_DWORD *)((char *)a3 + v6 + 12) = v13;
  *(_DWORD *)((char *)a3 + v6 + 8) = v19;
  memmove((char *)a3 + v19, v9, (unsigned int)v13);
  return v19 + (unsigned int)v13;
}
