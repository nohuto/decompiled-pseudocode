/*
 * XREFs of HUBUCX_GetEndpointPriority @ 0x140027834
 * Callers:
 *     HUBUCX_CreateEndpointsInUCX @ 0x140026884 (HUBUCX_CreateEndpointsInUCX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBUCX_GetEndpointPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  __int64 v8; // rcx
  __int16 v9; // si
  char v10; // bp
  unsigned int v11; // ecx
  unsigned int v12; // edi
  char v13; // bp
  __int64 v14; // rax
  __int16 v15; // r15
  __int16 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax

  v4 = *(_DWORD *)(a1 + 2712);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)-1073741275;
  v8 = *(_QWORD *)(a3 + 32);
  if ( (*(_BYTE *)(v8 + 3) & 3) != 2 )
    return (unsigned int)-1073741275;
  v9 = 0;
  v10 = *(_BYTE *)(v8 + 2);
  v11 = 0;
  v12 = *(_DWORD *)(a2 + 24);
  v13 = v10 & 0x80;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = *(unsigned __int8 *)(v14 + 2);
  v16 = *(unsigned __int8 *)(v14 + 3);
  if ( v12 )
  {
    v17 = a2 + 40;
    while ( v17 != a3 )
    {
      v18 = *(_QWORD *)(v17 + 32);
      if ( (*(_BYTE *)(v18 + 3) & 3) == 2 && (*(_BYTE *)(v18 + 2) & 0x80) == v13 )
        ++v9;
      ++v11;
      v17 += 80LL;
      if ( v11 >= v12 )
        goto LABEL_10;
    }
    goto LABEL_11;
  }
LABEL_10:
  if ( v11 == v12 )
    return (unsigned int)-1073741275;
LABEL_11:
  v19 = 0;
  v20 = *(_QWORD *)(a1 + 2704);
  while ( 1 )
  {
    v21 = *(_WORD *)(v20 + 20LL * v19);
    if ( v21 == *(unsigned __int8 *)(*(_QWORD *)(a1 + 2024) + 5LL) || v21 == -1 )
    {
      v22 = *(_WORD *)(v20 + 20LL * v19 + 2);
      if ( v22 == v15 || v22 == -1 )
      {
        v23 = *(_WORD *)(v20 + 20LL * v19 + 4);
        if ( (v23 == v16 || v23 == -1)
          && (*(_DWORD *)(v20 + 20LL * v19 + 8) == 0) == v13
          && *(_WORD *)(v20 + 20LL * v19 + 12) == v9 )
        {
          break;
        }
      }
    }
    if ( ++v19 >= v4 )
      return (unsigned int)-1073741275;
  }
  *a4 = *(_DWORD *)(v20 + 20LL * v19 + 16);
  return v5;
}
