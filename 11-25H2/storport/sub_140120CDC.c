/*
 * XREFs of sub_140120CDC @ 0x140120CDC
 * Callers:
 *     sub_1400F1060 @ 0x1400F1060 (sub_1400F1060.c)
 *     sub_1401186F0 @ 0x1401186F0 (sub_1401186F0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_140120950 @ 0x140120950 (sub_140120950.c)
 * Callees:
 *     sub_14008F0E0 @ 0x14008F0E0 (sub_14008F0E0.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_1401228F0 @ 0x1401228F0 (sub_1401228F0.c)
 */

__int64 __fastcall sub_140120CDC(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  char v5; // r12
  ULONG_PTR v6; // rbx
  signed __int64 *v8; // rsi
  KIRQL v9; // r14
  signed __int64 v10; // rbp
  __int64 v11; // r8
  signed __int32 v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rsi
  signed __int32 v16; // eax
  signed __int32 v17; // edx
  signed __int64 *v18; // r14
  PSLIST_ENTRY v19; // rax
  struct _SLIST_ENTRY *Next; // rcx
  KIRQL v21; // bp
  signed __int64 v22; // rsi
  __int64 v23; // r8
  signed __int32 v24; // r9d
  __int64 v25; // rdx
  KIRQL v26; // cl
  unsigned int v27; // esi
  unsigned int v28; // edx
  unsigned int v29; // esi
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // r8
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rdx
  signed __int32 v36[8]; // [rsp+0h] [rbp-78h] BYREF

  v3 = a1;
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 24);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 68), 1, 0) )
    return 3LL;
  v8 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(v6 + 40), 0LL);
  v9 = KfRaiseIrql(2u);
  if ( v8 )
  {
    while ( 2 )
    {
      v10 = *v8;
      do
      {
        v11 = *(unsigned int *)(*(_QWORD *)(v3 + 8 * v4 + 24) + 48LL);
        v12 = (unsigned int)(v11 + 1) < *(_DWORD *)(v3 + 4) ? v11 + 1 : 0;
        v13 = *(_QWORD *)(v3 + 8 * v4 + 24);
        if ( v12 == *(_DWORD *)(v13 + 52) )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v13, 2, 1);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), (signed __int64)v8, 0LL);
          KeLowerIrql(v9);
          goto LABEL_38;
        }
      }
      while ( (_DWORD)v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 48), v12, v11) );
      while ( _InterlockedCompareExchange64(
                (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v4 + 24) + 56LL) + 8 * v11),
                (signed __int64)(v8 - 16),
                0LL) )
        ;
      v8 = (signed __int64 *)v10;
      if ( sub_14008F0E0() )
      {
        _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v10, 0LL);
        v26 = v9;
LABEL_27:
        _InterlockedExchange((volatile __int32 *)(v6 + 68), 0);
        KeLowerIrql(v26);
        return 4LL;
      }
      if ( v10 )
        continue;
      break;
    }
  }
  KeLowerIrql(v9);
  v14 = *(_DWORD *)(v6 + 8);
  v15 = 16LL * v14;
  if ( ExQueryDepthSList((PSLIST_HEADER)(v15 + *(_QWORD *)(v6 + 32))) )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v6 + 4);
      if ( v16 == v14 )
      {
        v17 = (unsigned int)(v16 + 1) < *(_DWORD *)(v6 + 12) ? v16 + 1 : 0;
        if ( v17 == v14 )
          KeBugCheckEx(0x176u, 1uLL, v6, *(_QWORD *)(v6 + 24), 0LL);
        _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4), v17, v16);
      }
      _InterlockedOr(v36, 0);
      while ( *(_DWORD *)(v6 + 64) )
        ;
      _InterlockedOr(v36, 0);
      v18 = 0LL;
      v19 = ExpInterlockedFlushSList((PSLIST_HEADER)(v15 + *(_QWORD *)(v6 + 32)));
      if ( v19 )
      {
        do
        {
          Next = v19->Next;
          v19->Next = (struct _SLIST_ENTRY *)v18;
          v18 = (signed __int64 *)v19;
          v19 = Next;
        }
        while ( Next );
      }
      v21 = KfRaiseIrql(2u);
      if ( v18 )
      {
        while ( 2 )
        {
          v22 = *v18;
          do
          {
            v23 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v4 + 24) + 48LL);
            v24 = (unsigned int)(v23 + 1) < *(_DWORD *)(a1 + 4) ? v23 + 1 : 0;
            v25 = *(_QWORD *)(a1 + 8 * v4 + 24);
            if ( v24 == *(_DWORD *)(v25 + 52) )
            {
              _InterlockedCompareExchange((volatile signed __int32 *)v25, 2, 1);
              _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), (signed __int64)v18, 0LL);
              goto LABEL_30;
            }
          }
          while ( (_DWORD)v23 != _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 48), v24, v23) );
          while ( _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v4 + 24) + 56LL) + 8 * v23),
                    (signed __int64)(v18 - 16),
                    0LL) )
            ;
          v18 = (signed __int64 *)v22;
          if ( sub_14008F0E0() )
          {
            _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v22, 0LL);
            v26 = v21;
            goto LABEL_27;
          }
          if ( v22 )
            continue;
          break;
        }
      }
LABEL_30:
      KeLowerIrql(v21);
      *(_DWORD *)(v6 + 8) = v14 + 1 < *(_DWORD *)(v6 + 12) ? v14 + 1 : 0;
      if ( *(_QWORD *)(v6 + 40) )
        break;
      v14 = *(_DWORD *)(v6 + 8);
      v15 = 16LL * v14;
      if ( !ExQueryDepthSList((PSLIST_HEADER)(v15 + *(_QWORD *)(v6 + 32))) )
        goto LABEL_35;
    }
    v5 = 0;
  }
  else
  {
LABEL_35:
    v5 = 1;
  }
  v3 = a1;
LABEL_38:
  _InterlockedExchange((volatile __int32 *)(v6 + 68), 0);
  v27 = *(_DWORD *)(v6 + 48);
  v28 = *(_DWORD *)(v6 + 52);
  if ( v27 == v28 )
  {
    v29 = 0;
  }
  else if ( v27 <= v28 )
  {
    v30 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 20LL) )
      v31 = *(_QWORD *)(v30 + 1024);
    else
      v31 = *(_QWORD *)(v30 + 256);
    v29 = *(_DWORD *)(v31 + 4) - v28 + v27;
  }
  else
  {
    v29 = v27 - v28;
  }
  if ( v5 )
  {
    if ( *(_DWORD *)v6 == 2 )
    {
      if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)(v6 + 4)
        && !ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v6 + 32) + 16LL * *(unsigned int *)(v6 + 8)))
        && v29 <= *(_DWORD *)(*(_QWORD *)(v6 + 16) + 12LL) )
      {
        *(_BYTE *)(v6 + 72) = 1;
        _InterlockedOr(v36, 0);
        _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 2);
      }
      return 2LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    if ( a3 && v29 )
    {
      v32 = *(_BYTE *)(v3 + 20);
      v33 = *(_QWORD *)(v6 + 24);
      if ( !v32 )
        v33 = *(_QWORD *)(v33 + 16);
      if ( (*(_BYTE *)(v33 + 136) & 2) != 0 )
        v34 = 192 * v4;
      else
        v34 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v33 + 872) + 2 * v4) - 192;
      v35 = *(_QWORD *)(v33 + 728) + v34;
      if ( *(_WORD *)(v35 + 142) == *(_WORD *)(v35 + 140) )
      {
        if ( v32 )
          sub_1401228F0(v33, a2, 0, 0, 0);
        else
          sub_1401190B0(v33, v35, a2);
      }
    }
    return 1LL;
  }
}
