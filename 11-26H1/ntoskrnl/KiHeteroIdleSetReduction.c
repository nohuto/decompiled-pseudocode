/*
 * XREFs of KiHeteroIdleSetReduction @ 0x14040C5E0
 * Callers:
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x14040C320 (KiHeteroSelectIdleProcessorFromSubNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiHeteroIdleSetReduction(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdi
  int v10; // ecx
  unsigned __int8 v11; // r9
  __int64 v12; // r10
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  unsigned __int8 v15; // r9
  __int64 v16; // r10
  unsigned __int8 v17; // cl
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  unsigned __int8 v24; // r9
  char v25; // dl
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned __int8 v30; // r10
  __int64 v31; // rdx
  unsigned __int8 i; // cl
  __int64 result; // rax
  unsigned __int8 v34; // r8
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r8
  __int64 v37; // rax
  _OWORD v38[4]; // [rsp+20h] [rbp-68h] BYREF

  v5 = 0LL;
  v7 = a3;
  memset(v38, 0, sizeof(v38));
  if ( (KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0 )
  {
    v10 = *(_DWORD *)(a4 + 4);
    if ( v10 == 5 || ((v10 - 2) & 0xFFFFFFFB) == 0 || !KiDisableMediumQosGrouping && v10 == 1 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
      {
        if ( KeHeteroSystemQos && (a3 & *(_QWORD *)(a1 + 328)) != 0 )
          v7 = a3 & *(_QWORD *)(a1 + 328);
        if ( (*(_BYTE *)(a1 + 184) & 2) != 0 )
        {
          RtlCopyVolatileMemory(v38, (const void *)(a1 + 640), 0x40uLL);
          v11 = 0;
          v12 = 0LL;
          v13 = 0;
          v14 = 0LL;
          do
          {
            if ( ((1LL << v13) & v7) != 0 )
            {
              v35 = *((_BYTE *)v38 + v14);
              if ( v35 == v11 )
              {
                v12 |= 1LL << v14;
              }
              else if ( v35 > v11 )
              {
                v11 = *((_BYTE *)v38 + v14);
                v12 = 1LL << v13;
              }
            }
            ++v13;
            ++v14;
          }
          while ( v13 < 0x40u );
          v7 = v12;
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 4) != 0 )
      {
        RtlCopyVolatileMemory(v38, (const void *)(a1 + 704), 0x40uLL);
        v15 = 0;
        v16 = 0LL;
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( ((1LL << v17) & v7) != 0 )
          {
            v36 = *((_BYTE *)v38 + v18);
            if ( v36 == v15 )
            {
              v16 |= 1LL << v18;
            }
            else if ( v36 > v15 )
            {
              v15 = *((_BYTE *)v38 + v18);
              v16 = 1LL << v17;
            }
          }
          ++v17;
          ++v18;
        }
        while ( v17 < 0x40u );
        v7 = v16;
      }
    }
  }
  v19 = v7 & *(_QWORD *)(a1 + 24);
  if ( !v19 )
    v19 = v7;
  if ( (*(_BYTE *)(a1 + 184) & 4) != 0 )
  {
    RtlCopyVolatileMemory(v38, (const void *)(a1 + 576), 0x40uLL);
    v20 = 0LL;
    v21 = -1;
    v22 = 0;
    v23 = 0LL;
    do
    {
      if ( ((1LL << v22) & v19) != 0 )
      {
        v24 = *((_BYTE *)v38 + v23);
        if ( v24 == v21 )
        {
          v20 |= 1LL << v23;
        }
        else if ( v24 < v21 )
        {
          v21 = *((_BYTE *)v38 + v23);
          v20 = 1LL << v22;
        }
      }
      ++v22;
      ++v23;
    }
    while ( v22 < 0x40u );
    v19 = v20;
  }
  v25 = 0;
  v26 = *a5 & v19;
  if ( !v26 )
  {
    v26 = a5[1] & v19;
    if ( !v26 )
      goto LABEL_29;
    v25 = 1;
  }
  v19 = v26;
LABEL_29:
  if ( KeHeteroSystemQos )
  {
    v37 = *(int *)(a4 + 4);
    if ( (*(_QWORD *)(a1 + 8 * v37 + 256) & v19) != 0 )
      v19 &= *(_QWORD *)(a1 + 8 * v37 + 256);
  }
  if ( v25 )
  {
    v27 = *(_DWORD *)(a4 + 12);
    v28 = *(unsigned __int8 *)(a4 + 16);
    if ( v27 == 3 || v27 == 4 )
      v29 = *(_QWORD *)(a1 + 208) + (v28 << 6);
    else
      v29 = *(_QWORD *)(a1 + 200) + (v28 << 6);
    v30 = 0;
    v31 = 0LL;
    for ( i = 0; i < 0x40u; ++i )
    {
      if ( ((1LL << i) & v19) != 0 )
      {
        v34 = *(_BYTE *)(v31 + v29);
        if ( v34 == v30 )
        {
          v5 |= 1LL << v31;
        }
        else if ( v34 > v30 )
        {
          v30 = *(_BYTE *)(v31 + v29);
          v5 = 1LL << i;
        }
      }
      ++v31;
    }
    v19 = v5;
  }
  result = a2[25] & v19;
  if ( !result )
  {
    result = a2[4564] & v19;
    if ( !result )
    {
      result = a2[4567] & v19;
      if ( !result )
      {
        if ( (a2[4566] & v19) != 0 )
          return a2[4566] & v19;
        return v19;
      }
    }
  }
  return result;
}
