/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1404D88AC
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1404D8890 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1404D8A40 (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x1404D8AFC (RtlpHpMetadataCommit.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  struct _KTHREAD *v2; // rsi
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  char v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  __int128 v16; // xmm0
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v2 = (struct _KTHREAD *)((char *)a1 + 232);
  v20 = 0LL;
  v21 = 0LL;
  RtlpHpAcquireReleaseLockExclusive((struct _KTHREAD *)((char *)a1 + 232));
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)a1 + 30);
      v8 = v7 + a2;
      if ( v7 + a2 < v7 )
        return 0LL;
      if ( v8 > *((_QWORD *)a1 + 31) )
        break;
      if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 30, v8, v7) )
        return v7;
    }
    v10 = RtlpHpAcquireLockExclusive(&v2->Header.LockNV, *(_DWORD *)a1 & 1, v5, v6);
    v11 = *((_QWORD *)a1 + 30);
    v12 = v11 + a2;
    if ( v11 + a2 < v11 || v12 > *((_QWORD *)a1 + 32) )
      break;
    v13 = *((_QWORD *)a1 + 31);
    if ( v12 > v13 )
    {
      v14 = v12 - v13;
      v21 = *((_QWORD *)a1 + 31);
      v15 = *((_WORD *)a1 + 15);
      v16 = *a1;
      v20 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v19 = v16;
      if ( (v15 & 1) != 0 )
        v17 = RtlpHpMetadataCommit((_DWORD)a1, v21, v20, (unsigned int)&v19, 1);
      else
        v17 = RtlpHpAllocVA(&v21, (__int64 *)&v20, 0LL, (struct _KLOCK_ENTRIES *)0x1000, 4u, &v19);
      if ( v17 < 0 )
        break;
      v18 = v20;
      *((_QWORD *)a1 + 31) += v20;
      _InterlockedAdd64((volatile signed __int64 *)a1 + 17, v18 >> 12);
    }
    RtlpHpReleaseLockExclusive(v2, *(_DWORD *)a1 & 1, v10);
  }
  v7 = 0LL;
  RtlpHpReleaseLockExclusive(v2, *(_DWORD *)a1 & 1, v10);
  return v7;
}
