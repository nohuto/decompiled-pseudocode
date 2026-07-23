/*
 * XREFs of RtlStackDbContextSerialize @ 0x18015AD70
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x180122180 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(unsigned __int64 *, __int64, __int64),
        __int64 a3)
{
  int v6; // esi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  unsigned __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-30h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-28h]
  _DWORD v17[4]; // [rsp+40h] [rbp-20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  SRWLock = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v17[0] = *(_DWORD *)a1;
  v17[1] = *(_DWORD *)(a1 + 16);
  v17[2] = 524290;
  v6 = a2((unsigned __int64 *)v17, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = 0xFF00000000000000uLL;
    if ( v7 && (v9 = (_QWORD *)*v7, (*v7 & 1) == 0) )
    {
LABEL_22:
      while ( v9 )
      {
        v14 = v9;
        v13 = (v9[2] & 0xFFFFFFFFFFFFFFLL | v13 & 0xFF00000000000000uLL) ^ (v9[2] ^ (v9[2] & 0xFFFFFFFFFFFFFFLL | v13 & 0xFF00000000000000uLL)) & 0xFF00000000000000uLL;
        v6 = a2(&v13, 8LL, a3);
        if ( v6 < 0 )
          goto LABEL_40;
        v6 = a2((unsigned __int64 *)&v14, 8LL, a3);
        if ( v6 < 0 )
          goto LABEL_40;
        v6 = a2(v14 + 3, 8LL * *((unsigned __int8 *)v14 + 23), a3);
        if ( v6 < 0 )
          goto LABEL_40;
        v9 = (_QWORD *)*v9;
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          for ( ++v7;
                (unsigned __int64)v7 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
                ++v7 )
          {
            v9 = (_QWORD *)*v7;
            if ( (*v7 & 1) == 0 )
              goto LABEL_21;
          }
          v8 = 0xFF00000000000000uLL;
          break;
        }
LABEL_21:
        v8 = 0xFF00000000000000uLL;
      }
    }
    else
    {
      for ( ++v7; (unsigned __int64)v7 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5); ++v7 )
      {
        v9 = (_QWORD *)*v7;
        if ( (*v7 & 1) == 0 )
          goto LABEL_22;
      }
    }
    v10 = *(_QWORD **)(a1 + 24);
    if ( v10 && (v11 = (_QWORD *)*v10, (*v10 & 1) == 0) )
    {
LABEL_38:
      while ( v11 )
      {
        v15 = v11;
        v13 = v11[2] & 0xFFFFFFFFFFFFFFLL | v13 & 0xFF00000000000000uLL;
        v13 ^= (v11[2] ^ v13) & 0xFF00000000000000uLL;
        v6 = a2(&v13, 8LL, a3);
        if ( v6 < 0 )
          goto LABEL_40;
        v6 = a2((unsigned __int64 *)&v15, 8LL, a3);
        if ( v6 < 0 )
          goto LABEL_40;
        v6 = a2(v15 + 3, (HIBYTE(v13) + 7) & 0xFFFFFFFFFFFFFFF8uLL, a3);
        if ( v6 < 0 )
          goto LABEL_40;
        v11 = (_QWORD *)*v11;
        if ( ((unsigned __int8)v11 & 1) != 0 )
        {
          for ( ++v10;
                (unsigned __int64)v10 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
                ++v10 )
          {
            v11 = (_QWORD *)*v10;
            if ( (*v10 & 1) == 0 )
              goto LABEL_37;
          }
          break;
        }
LABEL_37:
        v8 = 0xFF00000000000000uLL;
      }
    }
    else
    {
      for ( ++v10;
            (unsigned __int64)v10 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
            ++v10 )
      {
        v11 = (_QWORD *)*v10;
        if ( (*v10 & 1) == 0 )
          goto LABEL_38;
      }
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))a2)(0LL, 0LL, a3, v8);
  }
LABEL_40:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}
