/*
 * XREFs of PipAddRequestToEdge @ 0x1407A2704
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405DB580 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateNewDependencyEdge @ 0x1405DB61C (PipCreateNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x1407A2AD8 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     PipMergeDependencyTypes @ 0x1405DB730 (PipMergeDependencyTypes.c)
 *     PipFreeBindingRequestEntry @ 0x1407A2A0C (PipFreeBindingRequestEntry.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PipAddRequestToEdge(__int64 a1, PCUNICODE_STRING *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  _QWORD *v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v8; // r12
  _QWORD *v9; // rcx
  int v10; // edx
  __int64 Pool2; // rax
  int v12; // eax
  UNICODE_STRING *v13; // rax
  _QWORD *v14; // rax

  v2 = (_QWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  if ( v4 == (_QWORD *)(a1 + 56) )
  {
LABEL_12:
    Pool2 = ExAllocatePool2(0x100uLL);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = *((_DWORD *)a2 + 4);
      v12 = *(_DWORD *)a2;
      *((_DWORD *)v3 + 4) = *(_DWORD *)a2;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v13 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
          v3[3] = v13;
          if ( RtlDuplicateUnicodeString(0, a2[1], v13) < 0 )
          {
            PipFreeBindingRequestEntry(v3);
            return 0LL;
          }
        }
      }
      else
      {
        v3[3] = a2[1];
      }
      v14 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v14 != v2 )
        __fastfail(3u);
      *v3 = v2;
      v3[1] = v14;
      *v14 = v3;
      v2[1] = v3;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = (unsigned __int64)v4;
      if ( v5 )
        break;
      v9 = v4;
      v4 = (_QWORD *)*v4;
      v10 = *((_DWORD *)v9 + 4);
      if ( v10 == *(_DWORD *)a2 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
            v5 = v8 & -(__int64)(RtlEqualUnicodeString((PCUNICODE_STRING)v9[3], a2[1], 0) != 0);
        }
        else if ( (PCUNICODE_STRING)v9[3] == a2[1] )
        {
          v5 = (__int64)v9;
        }
      }
      if ( v4 == v2 )
      {
        if ( !v5 )
          goto LABEL_12;
        break;
      }
    }
    *(_DWORD *)(v5 + 32) |= *((_DWORD *)a2 + 4);
  }
  if ( !v5 )
    v5 = (__int64)v3;
  if ( v5 )
    PipMergeDependencyTypes(a1, *((_DWORD *)a2 + 4));
  return v5;
}
