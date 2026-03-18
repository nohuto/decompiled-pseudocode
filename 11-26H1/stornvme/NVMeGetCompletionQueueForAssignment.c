/*
 * XREFs of NVMeGetCompletionQueueForAssignment @ 0x140017DE4
 * Callers:
 *     IoSqToIoCqMapping @ 0x140015574 (IoSqToIoCqMapping.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeGetCompletionQueueForAssignment(
        __int64 a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        int *a4,
        _DWORD *a5)
{
  unsigned int v5; // r10d
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  int v12; // r11d
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // r9d
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx

  v5 = -1;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  while ( v11 < *(unsigned __int16 *)(a1 + 332) )
  {
    v13 = *(_QWORD *)(a1 + 944) + 392LL * v11;
    if ( !g_HeteroSystem || !a5 || (*(_DWORD *)(v13 + 244) & 0xF) == *a5 )
    {
      v14 = *(_DWORD *)(v13 + 180);
      if ( v14 >= *(unsigned __int16 *)(v13 + 200) )
        *(_DWORD *)(v13 + 204) = -1;
      if ( v14 >= *(unsigned __int16 *)(v13 + 202) )
        *(_DWORD *)(v13 + 208) = -1;
      v15 = *(_DWORD *)(v13 + 212);
      if ( v15 >= *(unsigned __int16 *)(v13 + 232) )
        *(_DWORD *)(v13 + 236) = -1;
      if ( v15 >= *(unsigned __int16 *)(v13 + 234) )
        *(_DWORD *)(v13 + 240) = -1;
      v16 = *(_DWORD *)(v13 + 240);
      v17 = *(_DWORD *)(v13 + 236);
      v18 = v17;
      v19 = *(_DWORD *)(v13 + 208);
      if ( v17 >= v16 )
        v18 = *(_DWORD *)(v13 + 240);
      if ( v19 >= v18 )
      {
        v20 = *(_DWORD *)(v13 + 240);
        if ( v17 < v16 )
          v20 = *(_DWORD *)(v13 + 236);
      }
      else
      {
        v20 = *(_DWORD *)(v13 + 208);
      }
      v21 = *(_DWORD *)(v13 + 204);
      if ( v21 >= v20 )
      {
        v22 = *(_DWORD *)(v13 + 240);
        if ( v17 < v16 )
          v22 = *(_DWORD *)(v13 + 236);
        if ( v19 >= v22 )
        {
          v19 = *(_DWORD *)(v13 + 240);
          if ( v17 < v16 )
            v19 = *(_DWORD *)(v13 + 236);
        }
      }
      else
      {
        v19 = *(_DWORD *)(v13 + 204);
      }
      if ( v19 == *a2 )
      {
        v10 = *(_WORD *)(v13 + 168);
        v5 = v19;
        v12 = v19 != v21 && v19 != *(_DWORD *)(v13 + 208);
        break;
      }
      if ( v19 < v5 )
      {
        v10 = *(_WORD *)(v13 + 168);
        v5 = v19;
        v12 = v19 != v21 && v19 != *(_DWORD *)(v13 + 208);
      }
    }
    ++v11;
  }
  if ( v5 == -1 )
    return 0;
  v23 = *(_QWORD *)(a1 + 944);
  v24 = 392LL * v10;
  *a2 = v5;
  *a3 = v10;
  *a4 = v12;
  if ( v12 )
  {
    v27 = *(_DWORD *)(v24 + v23 - 156);
    if ( v5 == v27 )
    {
      *(_DWORD *)(v24 + v23 - 156) = v27 + 1;
    }
    else
    {
      v28 = *(_DWORD *)(v24 + v23 - 152);
      if ( v5 == v28 )
        *(_DWORD *)(v24 + v23 - 152) = v28 + 1;
    }
  }
  else
  {
    v25 = *(_DWORD *)(v24 + v23 - 188);
    if ( v5 == v25 )
    {
      *(_DWORD *)(v24 + v23 - 188) = v25 + 1;
    }
    else
    {
      v26 = *(_DWORD *)(v24 + v23 - 184);
      if ( v5 == v26 )
        *(_DWORD *)(v24 + v23 - 184) = v26 + 1;
    }
  }
  return 1;
}
