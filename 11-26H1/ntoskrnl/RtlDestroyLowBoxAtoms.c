/*
 * XREFs of RtlDestroyLowBoxAtoms @ 0x1404A519C
 * Callers:
 *     ExRemoveLowBoxAtomReferences @ 0x1404A5184 (ExRemoveLowBoxAtomReferences.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x1404A5274 (RtlpDereferenceAtom.c)
 *     RtlpFreeAtom @ 0x1409E0B64 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x140A416F0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x140A41790 (RtlpUnlockAtomTable.c)
 */

__int64 __fastcall RtlDestroyLowBoxAtoms(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD **i; // r14
  _QWORD *v7; // rsi
  _QWORD *v8; // r12
  __int64 *j; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rdx

  result = RtlpLockAtomTable();
  if ( (_BYTE)result )
  {
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
    {
      v7 = *i++;
      if ( v7 )
      {
        do
        {
          v8 = (_QWORD *)*v7;
          for ( j = (__int64 *)v7[2]; ; j = (__int64 *)*j )
          {
            v10 = j;
            if ( j == v7 + 2 )
              break;
            v11 = j;
            if ( *((_DWORD *)j + 4) == a2 )
            {
              v12 = (__int64 *)*j;
              j = (__int64 *)j[1];
              if ( *(__int64 **)(*v10 + 8) != v11 || (__int64 *)*j != v11 )
                __fastfail(3u);
              *j = (__int64)v12;
              v12[1] = (__int64)j;
              RtlpFreeAtom(v11);
              if ( (unsigned __int8)RtlpDereferenceAtom(v7, v7 + 2, a1) )
                break;
            }
          }
          v7 = v8;
        }
        while ( v8 );
      }
    }
    return RtlpUnlockAtomTable(a1);
  }
  return result;
}
