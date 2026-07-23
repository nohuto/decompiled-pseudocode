/*
 * XREFs of MiLogSlabEntriesDemote @ 0x140502720
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A6920 (MiFreeUnusedSlabPages.c)
 *     MiDemoteSlabEntries @ 0x140500334 (MiDemoteSlabEntries.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiLogSlabEntriesDemote(unsigned __int16 **a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int16 **v5; // rbx
  unsigned __int16 *CurrentIrql; // rdi
  unsigned __int16 *v7; // r8
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int8 v12; // r9
  unsigned __int8 *v13; // rdx
  unsigned __int16 *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // edi
  _QWORD *v18; // r12
  unsigned int i; // r14d
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 *v22; // rax
  unsigned int v23; // ecx
  unsigned __int16 *v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-6Dh] BYREF
  __int64 v30; // [rsp+48h] [rbp-69h] BYREF
  __int64 v31; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int16 *v32; // [rsp+58h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+68h] [rbp-49h] BYREF
  __int64 *v34; // [rsp+88h] [rbp-29h]
  __int64 v35; // [rsp+90h] [rbp-21h]
  unsigned int *v36; // [rsp+98h] [rbp-19h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  int *v38; // [rsp+A8h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp-1h]
  __int64 *v40; // [rsp+B8h] [rbp+7h]
  __int64 v41; // [rsp+C0h] [rbp+Fh]
  __int64 *v42; // [rsp+C8h] [rbp+17h]
  __int64 v43; // [rsp+D0h] [rbp+1Fh]
  __int64 *v44; // [rsp+D8h] [rbp+27h]
  __int64 v45; // [rsp+E0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v28 = a2;
  v4 = 0LL;
  v5 = a1;
  if ( !stru_140E366D8.FirstArgument )
    return result;
  CurrentIrql = (unsigned __int16 *)KeGetCurrentIrql();
  v32 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(a1) = (_BYTE)CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v4);
  }
  v7 = v5[11];
  if ( !v7 )
  {
    v17 = v28;
    v18 = v5 + 1;
    for ( i = 0; i < 9; ++i )
    {
      if ( *v18
        && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000400LL) )
      {
        v30 = v21;
        v34 = &v30;
        v35 = 8LL;
        v36 = &v27;
        v22 = *v5;
        v27 = i;
        v37 = 4LL;
        v23 = *v22;
        v38 = (int *)&v26;
        v40 = (__int64 *)&v29;
        v42 = &v31;
        v26 = v23;
        v39 = 4LL;
        v29 = v17;
        v41 = 4LL;
        v31 = 0x1000000LL;
        v43 = 8LL;
        tlgWriteAgg(v20, (unsigned __int8 *)&unk_14005A740, v20, 7u, &v33);
      }
      ++v18;
    }
    LOBYTE(CurrentIrql) = (_BYTE)v32;
    if ( *(_DWORD *)stru_140E366D8.FirstArgument <= 5u
      || !tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000400LL) )
    {
      goto LABEL_21;
    }
    v12 = 6;
    v13 = (unsigned __int8 *)&byte_14005A5C7;
    v32 = v5[10];
    v34 = (__int64 *)&v32;
    v24 = *v5;
    v35 = 8LL;
    v25 = *v24;
    v36 = &v27;
    v38 = (int *)&v26;
    v40 = &v30;
    v27 = v25;
    v16 = v8;
    v37 = 4LL;
    v26 = v28;
    v39 = 4LL;
    v41 = 8LL;
    goto LABEL_20;
  }
  if ( v5[*((unsigned int *)v7 + 32) + 1]
    && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000400LL) )
  {
    v28 = v9;
    v34 = &v31;
    v12 = 8;
    v31 = v11;
    v36 = &v28;
    v13 = (unsigned __int8 *)byte_14005A6AB;
    v35 = 8LL;
    v37 = 4LL;
    v29 = *(_DWORD *)(v8 + 132);
    v38 = (int *)&v29;
    v14 = *v5;
    v39 = 4LL;
    v15 = *v14;
    v40 = (__int64 *)&v26;
    v42 = (__int64 *)&v27;
    v44 = &v30;
    v26 = v15;
    v16 = v10;
    v41 = 4LL;
    v27 = a2;
    v43 = 4LL;
    v45 = 8LL;
LABEL_20:
    v30 = 0x1000000LL;
    tlgWriteAgg(v16, v13, v8, v12, &v33);
  }
LABEL_21:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
