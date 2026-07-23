/*
 * XREFs of PfTTraceListTrim @ 0x1407C9C58
 * Callers:
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTTraceListTrim(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbx
  _DWORD *v7; // rbx
  __int64 v8; // r10
  __int64 result; // rax
  unsigned int *v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r9
  _QWORD *v13; // r8
  __int64 v14; // rax
  int v15; // edx

  v5 = 708LL;
  if ( a2 != 1 )
    v5 = 704LL;
  v7 = (_DWORD *)(a1 + v5);
  v8 = 608LL;
  if ( a2 != 1 )
    v8 = 600LL;
  result = 568LL;
  v10 = (unsigned int *)(a1 + v8);
  v11 = 584LL;
  if ( a2 != 1 )
    v11 = 568LL;
  v12 = (_QWORD *)(a1 + v11);
  while ( *v10 > a3 )
  {
    v13 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 == v12 )
      break;
    if ( (_QWORD *)v13[1] != v12
      || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13)
      || (*v12 = v14,
          *(_QWORD *)(v14 + 8) = v12,
          v15 = *(_DWORD *)((char *)v13 + (*((_DWORD *)v13 + 7) != 0 ? 0xC : 0) + 36),
          --*v10,
          *v7 += v15,
          result = *(_QWORD *)(a4 + 8),
          *(_QWORD *)result != a4) )
    {
      __fastfail(3u);
    }
    *v13 = a4;
    v13[1] = result;
    *(_QWORD *)result = v13;
    *(_QWORD *)(a4 + 8) = v13;
  }
  return result;
}
