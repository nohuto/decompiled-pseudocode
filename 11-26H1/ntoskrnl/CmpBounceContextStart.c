/*
 * XREFs of CmpBounceContextStart @ 0x1409407E0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CmpBounceContextStart(__int64 a1, unsigned __int64 a2, size_t a3, int a4, char a5)
{
  char v5; // al
  unsigned __int64 v7; // rdi
  __int64 v9; // r8
  PVOID v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // eax
  char i; // cl
  __int64 TransientPoolWithQuota; // rax
  char v16; // [rsp+30h] [rbp-98h] BYREF
  __int64 v17; // [rsp+38h] [rbp-90h] BYREF
  __int64 v18; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-58h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  char *v22; // [rsp+80h] [rbp-48h]
  __int64 v23; // [rsp+88h] [rbp-40h]
  __int64 *v24; // [rsp+90h] [rbp-38h]
  __int64 v25; // [rsp+98h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 16);
  v9 = (unsigned __int8)a4;
  *(_QWORD *)a1 = a2;
  v7 = a2;
  LOBYTE(v9) = v5 ^ (v5 ^ (2 * a4)) & 2;
  *(_BYTE *)(a1 + 16) = v9;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !CmpFreezeListLock.CycleTime || !a4 && !MmIsUserAddress(a2) )
    goto LABEL_7;
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
  {
    v17 = 1LL;
    v20 = &v17;
    v12 = a3;
    v16 = a5;
    v22 = &v16;
    v21 = 8LL;
    v23 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v13 = a3;
      for ( i = -1; v13; v13 >>= 1 )
        ++i;
      v12 = 1 << (i + 1);
    }
    v18 = v12;
    v25 = 8LL;
    v24 = &v18;
    tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140056E56, v9, 5u, &v19);
  }
  if ( a3 <= 0x40 )
  {
    v7 = a1 + 17;
    memset_0((void *)(a1 + 17), 0, a3);
LABEL_7:
    *(_QWORD *)(a1 + 8) = v7;
    return 0LL;
  }
  if ( a3 <= 0x1000 )
  {
    v11 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
    v7 = (unsigned __int64)v11;
    if ( v11 )
    {
      memset_0(v11, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_7;
    }
  }
  TransientPoolWithQuota = CmpAllocateTransientPoolWithQuota();
  if ( TransientPoolWithQuota )
  {
    *(_QWORD *)(a1 + 8) = TransientPoolWithQuota;
    return 0LL;
  }
  return 3221225626LL;
}
