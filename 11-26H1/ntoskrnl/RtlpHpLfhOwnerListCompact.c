/*
 * XREFs of RtlpHpLfhOwnerListCompact @ 0x14034F430
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockShared @ 0x14034DEC0 (RtlpHpReleaseLockShared.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14034F790 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpHpLfhOwnerListCompact(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // r15
  _QWORD *v5; // r13
  unsigned __int8 v6; // al
  int v7; // ebp
  __int64 v8; // rsi
  char v9; // r12
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  _WORD *v13; // rax
  __int64 v14; // r14
  _WORD *i; // r14
  __int16 v16; // cx
  _WORD *v17; // rax
  char v18; // cl
  unsigned int v19; // edi
  unsigned int v20; // ebx

  v4 = (_QWORD *)*a3;
  v5 = a3;
  if ( (_QWORD *)*a3 != a3 )
  {
    while ( 1 )
    {
      v6 = *((_BYTE *)v4 + 39);
      if ( v6 != 1 )
      {
        v7 = 0;
        LODWORD(v8) = 1;
        v9 = -1;
        LOBYTE(v10) = *((_BYTE *)v4 + 39);
        if ( v6 > 1u )
          break;
      }
LABEL_15:
      v4 = (_QWORD *)*v4;
      if ( v4 == v5 )
        return;
    }
    while ( 1 )
    {
      v11 = (__int64)&v4[*((unsigned __int8 *)v4 + 24)];
      v12 = v11 + 2LL * (unsigned __int8)v10;
      v13 = (_WORD *)(v11 + 2LL * (unsigned int)v8);
      if ( *v13 )
      {
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_13;
        while ( *v13 )
        {
          if ( (unsigned __int64)++v13 >= v12 )
            goto LABEL_13;
        }
        v8 = ((__int64)v13 - v11) >> 1;
      }
      else
      {
        v16 = *(v13 - 1);
        v17 = v13 - 1;
        if ( !v16 )
        {
          while ( !*--v17 )
            ;
        }
        v13 = v17 + 1;
      }
      for ( i = (_WORD *)(v11 + 2 * ((unsigned int)v8 + 1LL)); (unsigned __int64)i < v12; ++i )
      {
        if ( *i )
          break;
      }
      v8 = ((__int64)v13 - v11) >> 1;
      v14 = i - v13;
      if ( (_DWORD)v8 == -1 )
      {
LABEL_13:
        v5 = a3;
        if ( v7 )
          RtlpHpReleaseLockExclusive((struct _KTHREAD *)(v4 + 7), *(unsigned __int8 *)(a1 + 73), v9);
        goto LABEL_15;
      }
      if ( (_DWORD)v14 )
      {
        if ( !v7 )
        {
          v7 = 2;
          v9 = RtlpHpAcquireLockExclusive((int *)v4 + 14, *(unsigned __int8 *)(a1 + 73), v11, a4);
          goto LABEL_12;
        }
        v18 = *((_BYTE *)v4 + 38);
        v19 = (_DWORD)v8 << 12 << v18;
        v20 = (_DWORD)v14 << 12 << v18;
        guard_dispatch_icall_no_overrides(*(_QWORD *)a1, (char *)v4 + v19, v20);
        RtlpHpLfhSubsegmentDecBlockCounts(a1, v4, v19, v20);
      }
      LODWORD(v8) = v14 + v8;
LABEL_12:
      v10 = *((unsigned __int8 *)v4 + 39);
      if ( (unsigned int)v8 >= v10 )
        goto LABEL_13;
    }
  }
}
