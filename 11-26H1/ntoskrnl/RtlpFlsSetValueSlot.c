/*
 * XREFs of RtlpFlsSetValueSlot @ 0x140A9E6A4
 * Callers:
 *     RtlpFlsSetValue @ 0x140A9E618 (RtlpFlsSetValue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x14048E7F0 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 */

__int64 __fastcall RtlpFlsSetValueSlot(__int64 a1, __int64 a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 *v10; // rbx
  int v11; // ecx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES **v13; // rsi
  __int64 result; // rax
  int v15; // ecx
  __int64 v16; // r8
  unsigned __int64 *v17; // rdi
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // r14
  unsigned __int64 **v21; // rcx
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // r14
  unsigned __int64 v25; // rcx
  struct _KLOCK_ENTRIES *v26; // rax
  _BYTE v27[24]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  _BitScanReverse(&v4, a3);
  *(_QWORD *)&v27[16] = &v27[8];
  v8 = a3 ^ (1 << v4);
  *(_QWORD *)&v27[8] = &v27[8];
  v9 = *((_QWORD *)&PspTlsContext.Header.WaitListHead + v4 - 4);
  if ( v9 )
    v10 = (unsigned __int64 *)(v9 + 8 * ((unsigned int)v8 + 4 * v8 + 1));
  else
    v10 = 0LL;
  _BitScanReverse((unsigned int *)&v11, a3);
  v12 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v11 - 4));
  if ( v12 )
    v13 = (struct _KLOCK_ENTRIES **)(v12 + 8 * ((a3 ^ (1 << v11)) + 2LL * (a3 ^ (1 << v11)) + 1));
  else
    v13 = 0LL;
  if ( !v13 )
  {
    *(_QWORD *)v27 = a4;
    *(_OWORD *)&v27[8] = 0LL;
    v28 = *(_OWORD *)v27;
    v29 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v27[8], *(__m128d *)&v27[8]);
    result = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,4,4>::SetValue(a2, a3, (__int64)&v28);
    if ( (int)result < 0 )
      return result;
    _BitScanReverse((unsigned int *)&v15, a3);
    v16 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v15 - 4));
    if ( v16 )
      v13 = (struct _KLOCK_ENTRIES **)(v16 + 8 * ((a3 ^ (1 << v15)) + 2LL * (a3 ^ (1 << v15)) + 1));
    else
      v13 = 0LL;
    v13[2] = (struct _KLOCK_ENTRIES *)(v13 + 1);
    v13[1] = (struct _KLOCK_ENTRIES *)(v13 + 1);
  }
  v17 = (unsigned __int64 *)(v13 + 1);
  if ( (unsigned __int64 *)*v17 == v17 )
  {
    if ( a4 )
    {
      v18 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
      v20 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v18, (__int64)v10);
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v20, v19);
        else
          *((_BYTE *)v20 + 10) = 1;
      }
      v21 = (unsigned __int64 **)v10[4];
      if ( *v21 != v10 + 3 )
        goto LABEL_18;
      *v17 = (unsigned __int64)(v10 + 3);
      v13[2] = (struct _KLOCK_ENTRIES *)v21;
      *v21 = v17;
      v10[4] = (unsigned __int64)v17;
LABEL_21:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((unsigned __int64)v10);
    }
  }
  else if ( !a4 )
  {
    v22 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
    v24 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v22, (__int64)v10);
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v23);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    *v13 = 0LL;
    v25 = *v17;
    v26 = v13[2];
    if ( *(unsigned __int64 **)(*v17 + 8) != v17 || (unsigned __int64 *)v26->Thread != v17 )
LABEL_18:
      __fastfail(3u);
    v26->Thread = (_KTHREAD *)v25;
    *(_QWORD *)(v25 + 8) = v26;
    v13[2] = (struct _KLOCK_ENTRIES *)(v13 + 1);
    *v17 = (unsigned __int64)v17;
    goto LABEL_21;
  }
  result = 0LL;
  *v13 = a4;
  *(_DWORD *)(a2 + 32) |= 1u;
  return result;
}
