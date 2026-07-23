/*
 * XREFs of RtlpFlsAlloc @ 0x14080F36C
 * Callers:
 *     PspTlsAlloc @ 0x140802B18 (PspTlsAlloc.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x140627718 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z @ 0x1406277F0 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4, unsigned int *a5)
{
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // esi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rax

  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PspTlsContext, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&PspTlsContext.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PspTlsContext, v6, (__int64)&PspTlsContext);
  v10 = 0;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v11 = 8LL;
  while ( 1 )
  {
    v12 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotAllocate((__int64)&PspTlsContext.Header.WaitListHead);
    if ( v12 == -1 )
    {
      v10 = -1073741801;
      goto LABEL_27;
    }
    v13 = v12 - 16;
    if ( v12 != 16 )
      break;
    _BitScanReverse((unsigned int *)&v14, 0x10u);
    v15 = *((_QWORD *)&PspTlsContext.Header.WaitListHead.Flink + (unsigned int)(v14 - 4));
    if ( v15 )
      v16 = v15 + 8 * (((1 << v14) ^ 0x10u) + 4LL * ((1 << v14) ^ 0x10u) + 2);
    else
      v16 = 8LL;
    *(_QWORD *)v16 = -1LL;
  }
  if ( v13 >= 0xF0 )
  {
    v10 = -1073741801;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotFree((__int64)&PspTlsContext.Header.WaitListHead, v12);
LABEL_27:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PspTlsContext);
    return v10;
  }
  _BitScanReverse(&v17, v12);
  v18 = v12 ^ (1 << v17);
  v19 = *((_QWORD *)&PspTlsContext.Header.WaitListHead + v17 - 4);
  if ( v19 )
  {
    v20 = v19 + 8 * (v18 + 4 * v18 + 3);
    v11 = v19 + 8 * (v18 + 4 * v18 + 2);
  }
  else
  {
    v20 = 16LL;
  }
  if ( !a3 )
    a3 = -1LL;
  *(_QWORD *)v11 = a3;
  *(_QWORD *)v20 = 0LL;
  if ( v13 > LODWORD(PspTlsContext.InitialStack) )
    LODWORD(PspTlsContext.InitialStack) = v13;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PspTlsContext);
  *a5 = v13;
  return v10;
}
