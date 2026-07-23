/*
 * XREFs of RtlpFlsFree @ 0x180073484
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x180072460 (RtlpHpEnvTlsAlloc.c)
 *     RtlpHpLfhContextCleanup @ 0x180072B10 (RtlpHpLfhContextCleanup.c)
 *     RtlFlsFree @ 0x180073470 (RtlFlsFree.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180073660 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFlsFree(PRTL_SRWLOCK SRWLock, int a2)
{
  unsigned int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  _RTL_SRWLOCK *v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 Value; // r14
  PRTL_SRWLOCK v11; // r12
  __int64 v12; // rdi
  _RTL_SRWLOCK **v13; // rdx
  _RTL_SRWLOCK *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  _RTL_SRWLOCK *v17; // rcx
  _RTL_SRWLOCK *v18; // rdx
  unsigned __int64 v19; // r8
  _QWORD *v20; // r14
  void (__fastcall *v21)(_QWORD); // rax
  __int64 v22; // rcx
  unsigned __int64 v24; // [rsp+28h] [rbp-1D0h]
  _QWORD v26[47]; // [rsp+38h] [rbp-1C0h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v3 = a2 + 16,
        v4 = 0,
        _BitScanReverse(&v5, a2 + 16),
        v6 = (a2 + 16) ^ (unsigned int)(1 << v5),
        (v7 = SRWLock[v5 - 3].Value) != 0)
    && (v8 = (_RTL_SRWLOCK *)(v7 + 8 * ((unsigned int)v6 + 2 * v6 + 1))) != 0LL
    && (v9 = v8[1].Value) != 0 )
  {
    Value = v8[2].Value;
    v24 = Value;
    if ( v9 == -1LL )
      v9 = 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 8 * ((unsigned int)v6 + 2 * v6 + 1)));
    v11 = SRWLock + 9;
    while ( 1 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockShared(SRWLock);
      v13 = (_RTL_SRWLOCK **)v11->Value;
      if ( (PRTL_SRWLOCK)v11->Value != v11 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v12 >= 0x10 )
            goto LABEL_16;
          v14 = *v13;
          _BitScanReverse(&v15, v3);
          v16 = v3 ^ (1 << v15);
          v17 = v13[v15 - 2];
          v18 = v17 ? &v17[v16 + 1] : 0LL;
          if ( v9 )
            break;
          if ( v18 )
            goto LABEL_24;
LABEL_15:
          v13 = (_RTL_SRWLOCK **)v14;
          if ( v14 == v11 )
            goto LABEL_16;
        }
        if ( !v18 )
          goto LABEL_15;
        v19 = v18->Value;
        if ( !v18->Value )
          goto LABEL_15;
        v22 = 3 * v12;
        v12 = (unsigned int)(v12 + 1);
        v26[v22 - 1] = v9;
        v26[v22] = Value;
        v26[v22 + 1] = v19;
LABEL_24:
        v18->Value = 0LL;
        goto LABEL_15;
      }
LABEL_16:
      RtlReleaseSRWLockShared(SRWLock);
      if ( !(_DWORD)v12 )
        break;
      v20 = v26;
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
      Value = v24;
    }
    v8[1].Value = -2LL;
    RtlReleaseSRWLockExclusive(v8);
    RtlAcquireSRWLockExclusive(SRWLock);
    v8[1].Value = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&SRWLock[1]);
    RtlReleaseSRWLockExclusive(SRWLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
