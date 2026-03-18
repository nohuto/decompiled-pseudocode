/*
 * XREFs of RtlCreateAtomTableEx @ 0x1404D3CC0
 * Callers:
 *     RtlCreateAtomTable @ 0x140B224F0 (RtlCreateAtomTable.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x140972A18 (RtlpInitializeHandleTableForAtomTable.c)
 *     RtlpFreeAtom @ 0x1409E0B64 (RtlpFreeAtom.c)
 *     RtlpAllocateAtom @ 0x140AA3130 (RtlpAllocateAtom.c)
 *     RtlpInitializeLockAtomTable @ 0x140B3983C (RtlpInitializeLockAtomTable.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v6; // ebp
  unsigned __int64 v7; // rax
  size_t v8; // rsi
  _DWORD *Atom; // rax
  _DWORD *v10; // rbx

  v3 = 0;
  if ( *a3 )
    return v3;
  v6 = 37;
  if ( a1 > 1 )
    v6 = a1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  if ( is_mul_ok(0x30uLL, (unsigned int)(v6 - 1)) )
  {
    v8 = v7 + 40;
    if ( v7 + 40 >= v7 )
    {
      Atom = (_DWORD *)RtlpAllocateAtom(v7 + 40, 1416459329LL);
      v10 = Atom;
      if ( Atom )
      {
        memset_0(Atom, 0, v8);
        v10[7] = v6;
        if ( (unsigned __int8)RtlpInitializeHandleTableForAtomTable(v10) )
        {
          RtlpInitializeLockAtomTable(v10);
          *v10 = 1836020801;
          v10[1] = 1;
          v10[6] = a2;
          *a3 = v10;
        }
        else
        {
          v3 = -1073741801;
          RtlpFreeAtom(v10);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return v3;
    }
  }
  return 3221225621LL;
}
