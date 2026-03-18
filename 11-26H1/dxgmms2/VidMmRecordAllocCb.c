/*
 * XREFs of VidMmRecordAllocCb @ 0x140114EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecordAllocCb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  unsigned __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rdx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rax

  v4 = *(unsigned __int16 *)(a3 + 16);
  v6 = (unsigned __int64)*(unsigned int *)(a3 + 12) << 12;
  v7 = **(_QWORD **)a4 + 184 * v4;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8 * v4);
  v9 = *(_DWORD *)(a2 + 44);
  if ( !v9 )
    goto LABEL_14;
  v10 = v8 + 72;
  if ( !v8 )
    v10 = 64LL;
  v11 = *(unsigned __int16 *)v10;
  if ( (*(_DWORD *)(a2 + 44) & 0x1F) == v11 )
  {
LABEL_14:
    v23 = *(_DWORD *)(v7 + 64);
    v24 = *(_QWORD *)(v7 + 72);
    if ( *(_DWORD *)(a4 + 8) )
    {
      *(_DWORD *)(v7 + 64) = v23 - 1;
      *(_QWORD *)(v7 + 72) = v24 - v6;
    }
    else
    {
      *(_DWORD *)(v7 + 64) = v23 + 1;
      *(_QWORD *)(v7 + 72) = v24 + v6;
    }
  }
  else
  {
    v12 = 6;
    v13 = 1;
    while ( v12 < 0x1E )
    {
      if ( ((v9 >> v12) & 0x1F) == v11 )
      {
        v14 = v13;
        v15 = *(_DWORD *)(a4 + 8);
        v16 = 2 * v14;
        v17 = *(_DWORD *)(v7 + 8 * v16 + 64);
        v18 = *(_QWORD *)(v7 + 8 * v16 + 72);
        v19 = v17 - 1;
        v20 = v17 + 1;
        if ( v15 )
          v20 = v19;
        v21 = v18 + v6;
        *(_DWORD *)(v7 + 8 * v16 + 64) = v20;
        if ( v15 )
          v21 = v18 - v6;
        *(_QWORD *)(v7 + 8 * v16 + 72) = v21;
        return 0LL;
      }
      ++v13;
      v12 += 6;
    }
    v25 = *(_DWORD *)(v7 + 144);
    v26 = *(_DWORD *)(a4 + 8);
    v27 = *(_QWORD *)(v7 + 152);
    v28 = v25 - 1;
    v29 = v25 + 1;
    if ( v26 )
      v29 = v28;
    v30 = v27 + v6;
    *(_DWORD *)(v7 + 144) = v29;
    if ( v26 )
      v30 = v27 - v6;
    *(_QWORD *)(v7 + 152) = v30;
  }
  return 0LL;
}
