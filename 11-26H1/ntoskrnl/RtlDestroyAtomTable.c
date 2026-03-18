/*
 * XREFs of RtlDestroyAtomTable @ 0x1409E0A60
 * Callers:
 *     RtlDereferenceAtomTable @ 0x140619670 (RtlDereferenceAtomTable.c)
 * Callees:
 *     ExDestroyHandleTable @ 0x140959168 (ExDestroyHandleTable.c)
 *     RtlpFreeAtom @ 0x1409E0B64 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x140A416F0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x140A41790 (RtlpUnlockAtomTable.c)
 */

__int64 __fastcall RtlDestroyAtomTable(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD **i; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  _QWORD **v6; // r14
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  _QWORD *v12; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) != 1 )
    return 0LL;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v2 = 0;
    for ( i = (_QWORD **)(a1 + 32); v2 < *(_DWORD *)(a1 + 28); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      if ( v4 )
      {
        do
        {
          v5 = (_QWORD *)*v4;
          v6 = (_QWORD **)(v4 + 2);
          *v4 = 0LL;
          while ( 1 )
          {
            v7 = *v6;
            if ( *v6 == v6 )
              break;
            if ( (_QWORD **)v7[1] != v6 || (v12 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
              __fastfail(3u);
            *v6 = v12;
            v12[1] = v6;
            RtlpFreeAtom(v7);
          }
          RtlpFreeAtom(v4);
          v4 = v5;
        }
        while ( v5 );
      }
    }
    *(_DWORD *)a1 = 0;
    RtlpUnlockAtomTable(a1);
    ExDestroyHandleTable(*(_QWORD **)(a1 + 16), v8, v9, v10);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    RtlpFreeAtom(a1);
    return 0LL;
  }
  return 3221225485LL;
}
