/*
 * XREFs of RtlStackDbContextSerialize @ 0x18015AEA0
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801223E0 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(unsigned __int64 *, __int64, __int64),
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // esi
  _QWORD **v8; // rbx
  unsigned __int64 v9; // r9
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  _QWORD **v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rdx
  unsigned __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v19; // [rsp+38h] [rbp-28h]
  _DWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), (__int64)a2);
  v19 = (volatile signed __int64 *)(a1 + 40);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 40), v6);
  v20[0] = *(_DWORD *)a1;
  v20[1] = *(_DWORD *)(a1 + 16);
  v20[2] = 524290;
  v7 = a2((unsigned __int64 *)v20, 12LL, a3);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD ***)(a1 + 8);
    v9 = 0xFF00000000000000uLL;
    if ( v8 && (v10 = *v8, ((unsigned __int8)*v8 & 1) == 0) )
    {
LABEL_9:
      v11 = v10;
      while ( v11 )
      {
        v17 = v11;
        v16 = (v11[2] & 0xFFFFFFFFFFFFFFLL | v16 & 0xFF00000000000000uLL) ^ (v11[2] ^ (v11[2] & 0xFFFFFFFFFFFFFFLL | v16 & 0xFF00000000000000uLL)) & 0xFF00000000000000uLL;
        v7 = a2(&v16, 8LL, a3);
        if ( v7 < 0 )
          goto LABEL_46;
        v7 = a2((unsigned __int64 *)&v17, 8LL, a3);
        if ( v7 < 0 )
          goto LABEL_46;
        v7 = a2(v17 + 3, 8LL * *((unsigned __int8 *)v17 + 23), a3);
        if ( v7 < 0 )
          goto LABEL_46;
        if ( !v10 || (v11 = (_QWORD *)*v10, v10 = v11, ((unsigned __int8)v11 & 1) != 0) )
        {
          for ( ++v8; ; ++v8 )
          {
            if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
            {
              v9 = 0xFF00000000000000uLL;
              goto LABEL_20;
            }
            v10 = *v8;
            if ( ((unsigned __int8)*v8 & 1) == 0 )
              break;
          }
          v11 = *v8;
        }
        v9 = 0xFF00000000000000uLL;
      }
    }
    else
    {
      for ( ++v8; (unsigned __int64)v8 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5); ++v8 )
      {
        v10 = *v8;
        if ( ((unsigned __int8)*v8 & 1) == 0 )
          goto LABEL_9;
      }
    }
LABEL_20:
    v12 = *(_QWORD ***)(a1 + 24);
    if ( v12 && (v13 = *v12, ((unsigned __int8)*v12 & 1) == 0) )
    {
LABEL_31:
      v14 = v13;
      while ( v14 )
      {
        v18 = v14;
        v16 = v14[2] & 0xFFFFFFFFFFFFFFLL | v16 & 0xFF00000000000000uLL;
        v16 ^= (v14[2] ^ v16) & 0xFF00000000000000uLL;
        v7 = a2(&v16, 8LL, a3);
        if ( v7 < 0 )
          goto LABEL_46;
        v7 = a2((unsigned __int64 *)&v18, 8LL, a3);
        if ( v7 < 0 )
          goto LABEL_46;
        v7 = a2(v18 + 3, (HIBYTE(v16) + 7) & 0xFFFFFFFFFFFFFFF8uLL, a3);
        if ( v7 < 0 )
          goto LABEL_46;
        if ( !v13 || (v14 = (_QWORD *)*v13, v13 = v14, ((unsigned __int8)v14 & 1) != 0) )
        {
          for ( ++v12;
                (unsigned __int64)v12 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
                ++v12 )
          {
            v13 = *v12;
            if ( ((unsigned __int8)*v12 & 1) == 0 )
            {
              v14 = *v12;
              goto LABEL_43;
            }
          }
          break;
        }
LABEL_43:
        v9 = 0xFF00000000000000uLL;
      }
    }
    else
    {
      for ( ++v12;
            (unsigned __int64)v12 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
            ++v12 )
      {
        v13 = *v12;
        if ( ((unsigned __int8)*v12 & 1) == 0 )
          goto LABEL_31;
      }
    }
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))a2)(0LL, 0LL, a3, v9);
  }
LABEL_46:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  RtlReleaseSRWLockExclusive(v19);
  return (unsigned int)v7;
}
