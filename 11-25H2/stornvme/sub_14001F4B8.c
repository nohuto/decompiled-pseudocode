/*
 * XREFs of sub_14001F4B8 @ 0x14001F4B8
 * Callers:
 *     sub_14001C664 @ 0x14001C664 (sub_14001C664.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14001F4B8(__int64 a1, unsigned int *a2, unsigned __int16 *a3, int *a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  int v12; // r11d
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx

  v5 = -1;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  while ( v11 < *(unsigned __int16 *)(a1 + 332) )
  {
    v13 = *(_QWORD *)(a1 + 944) + 392LL * v11;
    if ( !byte_140042220 || !a5 || (*(_DWORD *)(v13 + 244) & 0xF) == *a5 )
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
      v16 = *(_DWORD *)(v13 + 236);
      v17 = v16;
      v18 = *(_DWORD *)(v13 + 240);
      v19 = *(_DWORD *)(v13 + 208);
      if ( v16 >= v18 )
        v17 = *(_DWORD *)(v13 + 240);
      if ( v19 >= v17 )
      {
        v20 = *(_DWORD *)(v13 + 240);
        if ( v16 < v18 )
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
        if ( v16 < v18 )
          v22 = *(_DWORD *)(v13 + 236);
        if ( v19 >= v22 )
        {
          if ( v16 < v18 )
            v18 = *(_DWORD *)(v13 + 236);
        }
        else
        {
          v18 = *(_DWORD *)(v13 + 208);
        }
      }
      else
      {
        v18 = *(_DWORD *)(v13 + 204);
      }
      if ( v18 == *a2 )
      {
        v10 = *(_WORD *)(v13 + 168);
        v5 = v18;
        v12 = v18 != v21 && v18 != v19;
        break;
      }
      if ( v18 < v5 )
      {
        v10 = *(_WORD *)(v13 + 168);
        v5 = v18;
        v12 = v18 != v21 && v18 != v19;
      }
    }
    ++v11;
  }
  if ( v5 == -1 )
    return 0;
  *a2 = v5;
  v23 = *(_QWORD *)(a1 + 944) + 392LL * v10;
  *a3 = v10;
  *a4 = v12;
  if ( v12 )
  {
    v26 = *(_DWORD *)(v23 - 156);
    if ( v5 == v26 )
    {
      *(_DWORD *)(v23 - 156) = v26 + 1;
    }
    else
    {
      v27 = *(_DWORD *)(v23 - 152);
      if ( v5 == v27 )
        *(_DWORD *)(v23 - 152) = v27 + 1;
    }
  }
  else
  {
    v24 = *(_DWORD *)(v23 - 188);
    if ( v5 == v24 )
    {
      *(_DWORD *)(v23 - 188) = v24 + 1;
    }
    else
    {
      v25 = *(_DWORD *)(v23 - 184);
      if ( v5 == v25 )
        *(_DWORD *)(v23 - 184) = v25 + 1;
    }
  }
  return 1;
}
