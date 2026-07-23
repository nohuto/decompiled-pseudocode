/*
 * XREFs of MiIoPfnTreeExclusionCompatible @ 0x1406F8E8C
 * Callers:
 *     MiCreateIoPageExclusion @ 0x1406F8618 (MiCreateIoPageExclusion.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCachedIoPfnRange @ 0x140526AFC (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiIoPfnTreeExclusionCompatible(int a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // r8
  int v5; // esi
  unsigned __int64 *v6; // r9
  _BYTE *v7; // r14
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbp
  int v10; // r10d
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  _WORD *v18; // r12
  int v19; // r8d
  int v20; // r15d
  _BYTE *v21; // rdx
  int v22; // r13d
  int v23; // eax
  unsigned __int64 v24; // r8
  _QWORD **v25; // rcx
  _QWORD *v26; // rax
  _QWORD *i; // rcx
  int v28; // [rsp+20h] [rbp-128h]
  int v29; // [rsp+24h] [rbp-124h]
  int v30; // [rsp+28h] [rbp-120h]
  unsigned __int64 *v31; // [rsp+30h] [rbp-118h]
  _BYTE v33[48]; // [rsp+50h] [rbp-F8h] BYREF
  char v34; // [rsp+80h] [rbp-C8h] BYREF

  v2 = a2;
  v3 = a1;
  memset_0(v33, 0, 0xB0uLL);
  v4 = *(_QWORD *)(v2 + 24);
  v5 = 0;
  v30 = 0;
  v6 = 0LL;
  v31 = 0LL;
  v28 = 0;
  v7 = 0LL;
  v8 = (_QWORD *)*((_QWORD *)&MiState + 8 * v3 + 4888);
  v9 = v4 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1);
  v10 = 0;
  if ( !v8 )
    return 0LL;
  v12 = 0LL;
  do
  {
    v13 = v8[3];
    if ( *(_QWORD *)(v2 + 32) >= v13 )
    {
      if ( v4 >= v13 + 512 )
      {
        v8 = (_QWORD *)v8[1];
        continue;
      }
      v12 = v8;
    }
    v8 = (_QWORD *)*v8;
  }
  while ( v8 );
  while ( v12 )
  {
    v14 = v12[3];
    v15 = *(_QWORD *)(v2 + 32);
    if ( v15 < v14 )
      break;
    v16 = v9 - v14;
    if ( v9 < v14 )
      v16 = 0LL;
    v17 = v15 + 1 > v14 + 512 ? 512LL : v15 - v14 + 1;
    v29 = 0;
    v18 = (_WORD *)v12 + v16 + 88;
    v19 = 0;
    v9 = v16 + v14;
    v20 = 0;
    while ( 1 )
    {
      v21 = v7;
      if ( v16 >= v17 )
        break;
      if ( *v18 )
      {
        v5 = -1073741800;
        v30 = -1073741800;
        goto LABEL_34;
      }
      v22 = (*((_DWORD *)v12
             + ((unsigned __int64)(2
                                 * (((unsigned int)v9 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878 - 12))
                                                       - 1))
                                  - *((_DWORD *)v12 + 6))) >> 5)
             + 11) >> (2 * ((v9 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *((_BYTE *)v12 + 24)))) & 3;
      if ( v22 != 3 )
      {
        if ( !v19 )
        {
          MiFlushEntireTbDueToAttributeChange();
          v6 = v31;
          v21 = v7;
          v10 = v28;
          v29 = 1;
        }
        if ( v22 == 1 && !v20 )
        {
          _InterlockedAdd(&dword_140E3607C, 1u);
          if ( !v7 )
          {
            v7 = v33;
            v6 = (unsigned __int64 *)&v34;
          }
          *v6 = v9;
          v31 = v6 + 1;
          v10 = v21 != 0LL ? v10 + 1 : 1;
          v28 = v10;
          if ( v10 == 16 )
          {
            v23 = MiFlushCachedIoPfnRange((__int64)v7, 16, 3);
            v28 = 0;
            v7 = 0LL;
            v10 = 0;
            if ( v23 )
              v20 = 1;
          }
        }
        v6 = v31;
        v24 = (unsigned __int64)(2
                               * (((unsigned int)v9 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1))
                                - *((_DWORD *)v12 + 6))) >> 5;
        *((_DWORD *)v12 + v24 + 11) = (3 << (2
                                           * ((v9 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1))
                                            - *((_BYTE *)v12 + 24)))) | *((_DWORD *)v12 + v24 + 11) & ~(3 << (2 * ((v9 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *((_BYTE *)v12 + 24))));
        v19 = v29;
      }
      ++v16;
      ++v18;
      ++v9;
    }
    v5 = v30;
LABEL_34:
    if ( v7 )
    {
      MiFlushCachedIoPfnRange((__int64)v7, ((char *)v6 - v7 - 48) >> 3, 3);
      v6 = v31;
      v10 = v28;
    }
    if ( v5 < 0 )
      break;
    v25 = (_QWORD **)v12[1];
    v26 = v12;
    if ( v25 )
    {
      v12 = (_QWORD *)v12[1];
      for ( i = *v25; i; i = (_QWORD *)*i )
        v12 = i;
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v12 || (_QWORD *)*v12 == v26 )
          break;
        v26 = v12;
      }
    }
    v2 = a2;
  }
  return (unsigned int)v5;
}
