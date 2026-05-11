/*
 * XREFs of IntersectFindBestMatch @ 0x140030E54
 * Callers:
 *     IntersectFindDataRange @ 0x14003A9AC (IntersectFindDataRange.c)
 * Callees:
 *     IntersectGetMaxSampleRate @ 0x14003DC5C (IntersectGetMaxSampleRate.c)
 */

__int64 __fastcall IntersectFindBestMatch(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  __int64 v5; // rsi
  unsigned int v6; // r12d
  __int64 *v8; // r11
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 *v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 *v23; // rax
  unsigned int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx

  v3 = 0;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v8 = a1;
  if ( a2 )
  {
    v9 = a1;
    v10 = a2;
    do
    {
      IntersectGetMaxSampleRate(*v9++, a3);
      --v10;
    }
    while ( v10 );
    v12 = v8;
    do
    {
      v13 = *v12++;
      v14 = *(_DWORD *)(v13 + 100);
      if ( v14 <= v3 )
        v14 = v3;
      v3 = v14;
      --v5;
    }
    while ( v5 );
    v15 = v8;
    v16 = v11;
    v17 = v11;
    do
    {
      if ( *(_DWORD *)(*v15 + 100) < v3 )
      {
        *v15 = 0LL;
        --v17;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
    v18 = v8;
    v19 = v11;
    do
    {
      v20 = *v18;
      if ( *v18 )
      {
        v21 = *(_DWORD *)(v20 + 64);
        if ( v21 <= v4 )
          v21 = v4;
        v4 = v21;
        if ( *(_DWORD *)(v20 + 104) > v6 )
          v6 = *(_DWORD *)(v20 + 104);
      }
      ++v18;
      --v19;
    }
    while ( v19 );
    v22 = 0;
    v23 = v8;
    do
    {
      if ( v17 <= 1 )
        break;
      if ( *v23 && *(_DWORD *)(*v23 + 64) < v4 )
      {
        *v23 = 0LL;
        --v17;
      }
      ++v22;
      ++v23;
    }
    while ( v22 < (unsigned int)v11 );
    v24 = 0;
    v25 = v8;
    do
    {
      if ( v17 <= 1 )
        break;
      if ( *v25 && *(_DWORD *)(*v25 + 104) < v6 )
      {
        *v25 = 0LL;
        --v17;
      }
      ++v24;
      ++v25;
    }
    while ( v24 < (unsigned int)v11 );
    v26 = 0LL;
    if ( (_DWORD)v11 )
    {
      v27 = v8;
      do
      {
        if ( *v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
        ++v27;
      }
      while ( (unsigned int)v26 < (unsigned int)v11 );
    }
  }
  else
  {
    v26 = 0LL;
  }
  return v8[v26];
}
