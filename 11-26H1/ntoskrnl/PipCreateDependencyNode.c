/*
 * XREFs of PipCreateDependencyNode @ 0x140B48FD4
 * Callers:
 *     IoResolveDependency @ 0x1404EF2D0 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x1407A23F0 (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x1407A2CA0 (PipSetDependency.c)
 * Callees:
 *     PipAddBindingId @ 0x1407A2680 (PipAddBindingId.c)
 *     PipDeleteDependencyNode @ 0x140B33DCC (PipDeleteDependencyNode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PipCreateDependencyNode(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v4 = (_QWORD *)(Pool2 + 56);
    v4[1] = v4;
    *v4 = v4;
    v3[5] = v3 + 4;
    v3[4] = v3 + 4;
    v3[3] = v3 + 2;
    v3[2] = v3 + 2;
    v3[10] = v3 + 9;
    v3[9] = v3 + 9;
    v3[11] = 0LL;
    v3[6] = 0LL;
    v5 = (_QWORD *)qword_140F84F48;
    if ( *(__int64 **)qword_140F84F48 != &PiDependencyNodeListHead )
      __fastfail(3u);
    *v3 = &PiDependencyNodeListHead;
    v3[1] = v5;
    *v5 = v3;
    qword_140F84F48 = (__int64)v3;
    if ( *(_DWORD *)a1 == 1 )
    {
      if ( PipAddBindingId((__int64)v3, *(const UNICODE_STRING **)(a1 + 8)) < 0 )
      {
        PipDeleteDependencyNode(v3);
        return 0LL;
      }
    }
    else if ( !*(_DWORD *)a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      ++*((_DWORD *)v3 + 22);
      v3[6] = v6;
      *(_QWORD *)(*(_QWORD *)(v6 + 312) + 80LL) = v3;
    }
    ++*((_DWORD *)v3 + 22);
  }
  return v3;
}
