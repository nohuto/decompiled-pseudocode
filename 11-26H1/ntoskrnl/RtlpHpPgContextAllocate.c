/*
 * XREFs of RtlpHpPgContextAllocate @ 0x14063D010
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall RtlpHpPgContextAllocate(_QWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  bool v8; // cl
  unsigned __int64 Blink; // r9
  signed __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned int v14; // esi
  __int64 v15; // rax
  char *v16; // r13
  __int64 v17; // rbx
  char *v18; // rsi
  unsigned __int64 v19; // r15
  _BYTE *v20; // rax
  unsigned __int8 v21; // r12
  __int64 v22; // rcx
  size_t v23; // rsi
  void *v24; // r9
  _BYTE *v26; // [rsp+40h] [rbp-18h]
  bool v28; // [rsp+B1h] [rbp+59h]

  v4 = 0LL;
  v5 = a3;
  if ( (unsigned __int64)a3 <= a1[9] )
  {
    if ( (*((_BYTE *)a1 + 85) & 0x10) != 0 && a3 >= 0x1000 )
    {
      v8 = 1;
    }
    else
    {
      Blink = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
      do
      {
        v10 = Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25) ^ ((Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25)) >> 27);
        v12 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
                v10,
                Blink);
        v11 = Blink == v12;
        Blink = v12;
      }
      while ( !v11 );
      v8 = (unsigned __int8)((-3 * v10) & 7) < (unsigned __int8)(*((_BYTE *)a1 + 85) & 0xF);
    }
    v28 = v8;
    if ( a3 - a2 <= 0x7F )
    {
      v13 = a3 - (((_BYTE)a3 - 1) & 0xF) + 15;
      v14 = ((a3 - (((_BYTE)a3 - 1) & 0xF) + 4110) & 0xFFFFF000) + 0x2000;
      v15 = guard_dispatch_icall_no_overrides(*a1, v14);
      v16 = (char *)v15;
      if ( v15 )
      {
        v17 = v15 + 4096;
        v18 = (char *)(v15 + v14 - 4096);
        if ( v28 )
          v19 = v15 + 4096;
        else
          v19 = (unsigned __int64)&v18[-v13];
        v20 = (_BYTE *)(v5 + v19);
        v21 = *((_BYTE *)a1 + 84) ^ (v19 >> 12);
        v26 = v20;
        v22 = *a1;
        if ( *((_DWORD *)a1 + 20) )
        {
          if ( (int)guard_dispatch_icall_no_overrides(v22, v16) < 0 )
          {
LABEL_17:
            guard_dispatch_icall_no_overrides(*a1, v16);
            return v4;
          }
          memset_0(v16, v21, 0x1000uLL);
          memset_0(v18, v21, 0x1000uLL);
        }
        else
        {
          guard_dispatch_icall_no_overrides(v22, v16);
          guard_dispatch_icall_no_overrides(*a1, v18);
          if ( (int)guard_dispatch_icall_no_overrides(*a1, v17) < 0 )
            goto LABEL_17;
        }
        v23 = v18 - v26;
        v24 = v16 + 4096;
        if ( (a4 & 2) != 0 )
        {
          RtlHeapZero(v19, (a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          v24 = v16 + 4096;
        }
        if ( v19 != (_QWORD)(v16 + 4096) )
          memset_0(v24, v21, v19 - (_QWORD)(v16 + 4096));
        if ( v23 )
          memset_0(v26, v21, v23);
        guard_dispatch_icall_no_overrides(*a1, v16);
        return v19;
      }
    }
  }
  return v4;
}
