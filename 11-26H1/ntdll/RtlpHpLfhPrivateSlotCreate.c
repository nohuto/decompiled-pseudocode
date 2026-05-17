/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x180097438
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x180092EAC (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800932F8 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x18009345C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800973B4 (RtlpHpLfhContextLockExtension.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  _OWORD *v9; // rsi
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm1
  _WORD *v14; // rcx
  __int64 v15; // rsi

  v3 = 0LL;
  v7 = RtlpHpLfhContextSlotAllocate(a1, (__int64)a3);
  if ( !v7 )
    return 0LL;
  LOWORD(v8) = a2;
  v9 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v9 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8) + 1472 )
  {
    v10 = (_OWORD *)RtlpHpLfhContextMetadataAllocate(a1, 0LL);
    v3 = v10;
    if ( !v10 )
    {
      v15 = 0LL;
      RtlpHpLfhContextLockExtension(a1, v11);
      *(_QWORD *)v7 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 152) = v7;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
      return v15;
    }
    v12 = 2LL;
    v6 = 128LL;
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      v13 = v9[7];
      v9 += 8;
      *(v10 - 1) = v13;
      --v12;
    }
    while ( v12 );
    v9 = v3;
  }
  *((_WORD *)v9 + ((unsigned __int64)*a3 >> 1)) = (unsigned __int64)(v7 - a1) >> 6;
  if ( v3 )
  {
    v8 = ((unsigned __int64)v3 - a1) >> 6;
    LOWORD(a2) = v8;
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), a2);
  }
  *(_WORD *)(v7 + 6) = WORD1(a2);
  *(_WORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 20) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a3 + 10, v6);
  if ( *((_WORD *)a3 + 45) )
    v14 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v14 = a3 + 88;
  *v14 = (unsigned __int64)(v7 - a1) >> 6;
  *(_WORD *)(v7 + 16) = 0;
  *(_WORD *)(v7 + 18) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v14;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a3 + 10);
  return v7;
}
