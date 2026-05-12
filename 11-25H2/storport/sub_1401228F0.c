/*
 * XREFs of sub_1401228F0 @ 0x1401228F0
 * Callers:
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 *     sub_140120CDC @ 0x140120CDC (sub_140120CDC.c)
 *     sub_140121120 @ 0x140121120 (sub_140121120.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 * Callees:
 *     sub_14008F0E0 @ 0x14008F0E0 (sub_14008F0E0.c)
 *     sub_140122E00 @ 0x140122E00 (sub_140122E00.c)
 */

bool __fastcall sub_1401228F0(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  _DWORD *v5; // r13
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 i; // rbx
  unsigned int v11; // eax
  __int64 v12; // r14
  KIRQL v13; // bp
  __int64 v14; // r9
  signed __int32 v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebp
  int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // eax
  bool v26; // al
  int v29; // [rsp+98h] [rbp+10h]

  v5 = qword_140168E40;
  LODWORD(v7) = a2;
  v8 = a1;
  v29 = a2;
  v9 = 0LL;
  while ( 2 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(v8 + 1024) + 8LL * (unsigned int)v7 + 24);
          !*(_DWORD *)i && *(_DWORD *)(i + 48) == *(_DWORD *)(i + 52);
          i = *(_QWORD *)(*(_QWORD *)(v8 + 1024) + 8 * v7 + 24) )
    {
      v11 = v7 + 1;
      v7 = 0LL;
      if ( v11 < v5[2] )
        v7 = v11;
      if ( a2 == (_DWORD)v7 )
        return a4 == 0;
    }
    v12 = 0LL;
    v13 = KfRaiseIrql(2u);
    while ( 1 )
    {
      v14 = *(unsigned int *)(i + 52);
      if ( (_DWORD)v14 == *(_DWORD *)(i + 48) )
        break;
      v15 = 0;
      if ( (unsigned int)(v14 + 1) < *(_DWORD *)(*(_QWORD *)(i + 16) + 4LL) )
        v15 = v14 + 1;
      if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(i + 52), v15, v14) )
      {
        do
          v9 = _InterlockedExchange64((volatile __int64 *)(8 * v14 + *(_QWORD *)(i + 56)), v9);
        while ( !v9 );
        if ( !*(_DWORD *)(*(_QWORD *)(i + 16) + 16LL)
          && (*(_DWORD *)i == 2
           || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(i + 32) + 16LL * *(unsigned int *)(i + 8)))) )
        {
          if ( *(_DWORD *)(i + 48) == *(_DWORD *)(i + 52)
            || ((v16 = *(_DWORD *)(i + 48), v17 = *(_DWORD *)(i + 52), v16 != v17)
              ? (v16 <= v17
               ? ((v19 = *(_QWORD *)(i + 24), *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL))
                ? (v20 = *(_QWORD *)(v19 + 1024))
                : (v20 = *(_QWORD *)(v19 + 256)),
                  v18 = *(_DWORD *)(v20 + 4) - v17 + v16)
               : (v18 = v16 - v17))
              : (v18 = 0),
                v18 <= *(_DWORD *)(*(_QWORD *)(i + 16) + 8LL)) )
          {
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i + 16) + 16LL), 1, 0) )
            {
              v21 = *(_QWORD *)(i + 24);
              if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL) )
                IoQueueWorkItem(
                  *(PIO_WORKITEM *)(v21 + 1032),
                  (PIO_WORKITEM_ROUTINE)sub_1400F1060,
                  DelayedWorkQueue,
                  *(PVOID *)(i + 24));
              else
                KeSetEvent((PRKEVENT)(v21 + 472), 0, 0);
            }
          }
        }
        KeLowerIrql(v13);
        if ( (*(_BYTE *)(*(_QWORD *)(i + 24) + 136LL) & 2) != 0 )
        {
          v9 = 0LL;
        }
        else
        {
          if ( a4 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)v9 + 4256LL) & 1) != 0 )
            {
              if ( a5 )
                v12 = a4;
            }
            else if ( !a5 )
            {
              v12 = a4;
            }
          }
          v22 = *(_DWORD *)(*(_QWORD *)v9 + 4256LL) & 1;
          v23 = sub_140122E00(*(PVOID *)(i + 24), v12);
          if ( v23 == 259 )
          {
            v9 = 0LL;
            if ( v12 )
              a4 = 0LL;
LABEL_44:
            if ( !(_BYTE)v22 )
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(i + 24) + 960LL));
            if ( v23 != 259 )
              return a4 == 0;
            goto LABEL_59;
          }
          if ( v23 == -2147483631 )
          {
            v9 = 0LL;
            goto LABEL_44;
          }
          v9 = 0LL;
          if ( v23 != -2147483622 )
            goto LABEL_59;
        }
        goto LABEL_56;
      }
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)i, 0, 1) == 1 )
    {
      v24 = *(_QWORD *)(i + 24);
      if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL) == 1 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v24 + 956));
        KeLowerIrql(v13);
        goto LABEL_56;
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 16) + 952LL));
    }
    KeLowerIrql(v13);
LABEL_56:
    v25 = v7 + 1;
    LODWORD(v7) = 0;
    if ( v25 < v5[2] )
      LODWORD(v7) = v25;
    if ( v29 == (_DWORD)v7 )
      return a4 == 0;
LABEL_59:
    v26 = sub_14008F0E0();
    a2 = v29;
    v8 = a1;
    if ( !v26 )
      continue;
    return a4 == 0;
  }
}
