/*
 * XREFs of ExBurnMemory @ 0x140CB037C
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExBurnMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  unsigned __int64 v6; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v2 = a1 + 32;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 24);
    if ( v5 == 2 || v5 == 5 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      if ( v6 )
        break;
    }
LABEL_7:
    v4 = *(_QWORD *)(v4 + 8);
    if ( v4 == v2 )
      return a2 - v3;
  }
  if ( v6 <= v3 )
  {
    *(_DWORD *)(v4 + 24) = 6;
    v3 -= v6;
    if ( !v3 )
      return a2 - v3;
    goto LABEL_7;
  }
  *(_QWORD *)(v4 + 40) = v6 - v3;
  v8 = *(_QWORD *)(v4 + 32) - v3;
  qword_140FBDA88 = v3;
  dword_140FBDA78 = 6;
  qword_140FBDA80 = v6 + v8;
  v9 = *(_QWORD *)v4;
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  BurnMemoryDescriptor = *(_QWORD *)v4;
  qword_140FBDA68 = v4;
  *(_QWORD *)(v9 + 8) = &BurnMemoryDescriptor;
  *(_QWORD *)v4 = &BurnMemoryDescriptor;
  v3 = 0LL;
  return a2 - v3;
}
