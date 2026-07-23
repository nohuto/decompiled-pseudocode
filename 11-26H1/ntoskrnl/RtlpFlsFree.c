/*
 * XREFs of RtlpFlsFree @ 0x14080F514
 * Callers:
 *     PsTlsFree @ 0x140802AE0 (PsTlsFree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z @ 0x1406277F0 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFlsFree(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbp
  _QWORD **v15; // r12
  _QWORD *v16; // rdx
  unsigned int v17; // r8d
  _QWORD *v18; // r10
  __int64 *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 *v25; // r14
  __int64 v26; // rbp
  __int64 v27; // rdx
  struct _KLOCK_ENTRIES *v28; // r9
  AutoBoost *v29; // rax
  void *v30; // rdx
  signed __int8 v31; // cf
  AutoBoost *v32; // rbp
  unsigned __int64 v34; // [rsp+20h] [rbp-1C8h]
  _QWORD v36[47]; // [rsp+38h] [rbp-1B0h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xEE
    && (v4 = a2 + 16,
        v5 = 0,
        _BitScanReverse(&v6, a2 + 16),
        v7 = (a2 + 16) ^ (unsigned int)(1 << v6),
        (v8 = *((_QWORD *)&PspTlsContext.Header.WaitListHead + v6 - 4)) != 0)
    && (v9 = (unsigned __int64 *)(v8 + 8 * ((unsigned int)v7 + 4 * v7 + 1))) != 0LL
    && (v10 = v9[1]) != 0 )
  {
    v11 = v9[2];
    v34 = v11;
    if ( v10 == -1LL )
      v10 = 0LL;
    v12 = (AutoBoost *)KeAbPreAcquire(v8 + 8 * ((unsigned int)v7 + 4 * v7 + 1), 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v12, (__int64)v9);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = (_QWORD **)(v9 + 3);
LABEL_14:
    v16 = *v15;
    v17 = 0;
    if ( *v15 != v15 )
    {
      while ( 1 )
      {
        if ( v17 >= 0x10 )
        {
LABEL_25:
          if ( v17 )
          {
            v25 = v36;
            v26 = v17;
            do
            {
              v27 = v25[1];
              if ( *v25 )
                guard_dispatch_icall_no_overrides(*v25, v27);
              else
                guard_dispatch_icall_no_overrides(v25[1], v27);
              v25 += 3;
              --v26;
            }
            while ( v26 );
            v11 = v34;
            goto LABEL_14;
          }
          break;
        }
        v18 = (_QWORD *)*v16;
        v19 = v16 - 1;
        if ( v10 )
        {
          if ( v16 != (_QWORD *)8 )
          {
            v20 = *v19;
            if ( *v19 )
            {
              v21 = v17++;
              v22 = 3 * v21;
              v23 = (_QWORD *)*v16;
              v36[v22 - 1] = v10;
              v36[v22] = v11;
              v36[v22 + 1] = v20;
LABEL_21:
              *v19 = 0LL;
              v24 = (_QWORD *)v16[1];
              if ( (_QWORD *)v23[1] != v16 || (_QWORD *)*v24 != v16 )
                __fastfail(3u);
              *v24 = v23;
              v23[1] = v24;
              v16[1] = v16;
              *v16 = v16;
            }
          }
        }
        else
        {
          v23 = (_QWORD *)*v16;
          if ( v16 != (_QWORD *)8 )
            goto LABEL_21;
        }
        v16 = v18;
        if ( v18 == v15 )
          goto LABEL_25;
      }
    }
    v9[1] = -2LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((unsigned __int64)v9);
    v29 = (AutoBoost *)KeAbPreAcquire((__int64)&PspTlsContext, 0LL, 0LL, v28);
    v31 = _interlockedbittestandset64(&PspTlsContext.Header.Lock, 0LL);
    v32 = v29;
    if ( v31 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PspTlsContext, v29, (__int64)&PspTlsContext);
    if ( v32 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v32, v30);
      else
        *((_BYTE *)v32 + 10) = 1;
    }
    v9[1] = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotFree((__int64)&PspTlsContext.Header.WaitListHead, v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PspTlsContext);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
