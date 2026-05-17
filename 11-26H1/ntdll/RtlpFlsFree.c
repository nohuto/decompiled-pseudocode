/*
 * XREFs of RtlpFlsFree @ 0x1800942B4
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x180092F08 (RtlpHpEnvTlsAlloc.c)
 *     RtlpHpLfhContextCleanup @ 0x180093938 (RtlpHpLfhContextCleanup.c)
 *     RtlFlsFree @ 0x1800942A0 (RtlFlsFree.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180094490 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFlsFree(volatile signed __int64 *a1, int a2)
{
  unsigned int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  volatile signed __int64 v7; // r8
  signed __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD **v11; // r12
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r14
  void (__fastcall *v21)(_QWORD); // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+28h] [rbp-1D0h]
  _QWORD v27[47]; // [rsp+38h] [rbp-1C0h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v3 = a2 + 16,
        v4 = 0,
        _BitScanReverse(&v5, a2 + 16),
        v6 = (a2 + 16) ^ (unsigned int)(1 << v5),
        (v7 = a1[v5 - 3]) != 0)
    && (v8 = v7 + 8 * ((unsigned int)v6 + 2 * v6 + 1)) != 0
    && (v9 = *(_QWORD *)(v8 + 8)) != 0 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v25 = v10;
    if ( v9 == -1 )
      v9 = 0LL;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v7 + 8 * ((unsigned int)v6 + 2 * v6 + 1)), v6);
    v11 = (_QWORD **)(a1 + 9);
    while ( 1 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockShared(a1);
      v13 = *v11;
      if ( *v11 != v11 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v12 >= 0x10 )
            goto LABEL_16;
          v14 = (_QWORD *)*v13;
          _BitScanReverse(&v15, v3);
          v16 = v3 ^ (1 << v15);
          v17 = v13[v15 - 2];
          v18 = v17 ? (__int64 *)(v17 + 8 * (v16 + 1LL)) : 0LL;
          if ( v9 )
            break;
          if ( v18 )
            goto LABEL_24;
LABEL_15:
          v13 = v14;
          if ( v14 == v11 )
            goto LABEL_16;
        }
        if ( !v18 )
          goto LABEL_15;
        v19 = *v18;
        if ( !*v18 )
          goto LABEL_15;
        v22 = 3 * v12;
        v12 = (unsigned int)(v12 + 1);
        v27[v22 - 1] = v9;
        v27[v22] = v10;
        v27[v22 + 1] = v19;
LABEL_24:
        *v18 = 0LL;
        goto LABEL_15;
      }
LABEL_16:
      RtlReleaseSRWLockShared(a1);
      if ( !(_DWORD)v12 )
        break;
      v20 = v27;
      do
      {
        v21 = (void (__fastcall *)(_QWORD))*(v20 - 1);
        if ( *v20 )
          ((void (__fastcall *)(_QWORD, _QWORD))v21)(*v20, v20[1]);
        else
          v21(v20[1]);
        v20 += 3;
        --v12;
      }
      while ( v12 );
      v10 = v25;
    }
    *(_QWORD *)(v8 + 8) = -2LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v8);
    RtlAcquireSRWLockExclusive(a1, v23);
    *(_QWORD *)(v8 + 8) = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(a1 + 1);
    RtlReleaseSRWLockExclusive(a1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
