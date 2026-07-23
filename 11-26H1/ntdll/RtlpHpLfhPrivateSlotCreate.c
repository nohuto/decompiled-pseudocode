/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x18010B444
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockExtension @ 0x180071B4C (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x180072140 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x18007225C (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 */

_BYTE *__fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  _BYTE *v6; // r14
  unsigned __int64 v7; // rbp
  _OWORD *v8; // rsi
  _OWORD *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm1
  _WORD *v12; // rcx
  __int64 v13; // rsi

  v3 = 0LL;
  v6 = RtlpHpLfhContextSlotAllocate(a1, a3);
  if ( !v6 )
    return 0LL;
  LOWORD(v7) = a2;
  v8 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v8 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8) + 1472 )
  {
    v9 = (_OWORD *)RtlpHpLfhContextMetadataAllocate((_RTL_SRWLOCK *)a1, 0);
    v3 = v9;
    if ( !v9 )
    {
      v13 = 0LL;
      RtlpHpLfhContextLockExtension((_RTL_SRWLOCK *)a1);
      *(_QWORD *)v6 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 152) = v6;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 128));
      return (_BYTE *)v13;
    }
    v10 = 2LL;
    do
    {
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v9[6] = v8[6];
      v9 += 8;
      v11 = v8[7];
      v8 += 8;
      *(v9 - 1) = v11;
      --v10;
    }
    while ( v10 );
    v8 = v3;
  }
  *((_WORD *)v8 + ((unsigned __int64)*a3 >> 1)) = (unsigned __int64)&v6[-a1] >> 6;
  if ( v3 )
  {
    v7 = ((unsigned __int64)v3 - a1) >> 6;
    LOWORD(a2) = v7;
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), a2);
  }
  *((_WORD *)v6 + 3) = WORD1(a2);
  *((_WORD *)v6 + 2) = v7;
  *((_DWORD *)v6 + 5) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a3 + 10);
  if ( *((_WORD *)a3 + 45) )
    v12 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v12 = a3 + 88;
  *v12 = (unsigned __int64)&v6[-a1] >> 6;
  *((_WORD *)v6 + 8) = 0;
  *((_WORD *)v6 + 9) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v12;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a3 + 10);
  return v6;
}
