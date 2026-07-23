/*
 * XREFs of RtlDestroyAtomTable @ 0x1409B8CD0
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14061C6CC (RtlDereferenceAtomTable.c)
 * Callees:
 *     RtlpFreeAtom @ 0x1409B8DD4 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x1409FCDE0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1409FCE80 (RtlpUnlockAtomTable.c)
 *     ExDestroyHandleTable @ 0x1409FEA2C (ExDestroyHandleTable.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // ebp
  _QWORD **i; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  _QWORD **v6; // r14
  _QWORD *v7; // rcx
  _QWORD *v9; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 32); v2 < *((_DWORD *)AtomTableHandle + 7); ++v2 )
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
            if ( (_QWORD **)v7[1] != v6 || (v9 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
              __fastfail(3u);
            *v6 = v9;
            v9[1] = v6;
            RtlpFreeAtom(v7);
          }
          RtlpFreeAtom(v4);
          v4 = v5;
        }
        while ( v5 );
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlpUnlockAtomTable(AtomTableHandle);
    ExDestroyHandleTable(*((PVOID *)AtomTableHandle + 2));
    *(_OWORD *)AtomTableHandle = 0LL;
    *((_OWORD *)AtomTableHandle + 1) = 0LL;
    *((_QWORD *)AtomTableHandle + 4) = 0LL;
    RtlpFreeAtom(AtomTableHandle);
    return 0;
  }
  return -1073741811;
}
