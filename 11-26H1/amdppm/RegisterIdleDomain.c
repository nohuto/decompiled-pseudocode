/*
 * XREFs of RegisterIdleDomain @ 0x140034FB0
 * Callers:
 *     RegisterKernelIdleDomains @ 0x140042518 (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

char __fastcall RegisterIdleDomain(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  char v3; // si
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx

  v2 = *(_QWORD *)(a1 + 536);
  v3 = 0;
  v5 = 3LL * a2;
  if ( *(_DWORD *)(v2 + 24LL * a2 + 24) >= **(_DWORD **)(a1 + 728) )
    return v3;
  v6 = qword_140015648;
  v7 = v2 + 24LL * a2;
  if ( (__int64 *)qword_140015648 == &qword_140015648 )
    goto LABEL_6;
  do
  {
    v8 = v6;
    if ( *(_DWORD *)(v6 + 36) == *(_DWORD *)(v7 + 12) )
      break;
    v6 = *(_QWORD *)v6;
    v8 = 0LL;
  }
  while ( (__int64 *)v6 != &qword_140015648 );
  if ( !v8 )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(64LL, 312LL, 1919119952LL);
    v8 = Pool2;
    if ( !Pool2 )
      return v3;
    v10 = (_QWORD *)(Pool2 + 16);
    v10[1] = v10;
    *v10 = v10;
    v11 = (__int64 *)qword_140015650;
    if ( *(__int64 **)qword_140015650 != &qword_140015648 )
LABEL_15:
      __fastfail(3u);
    *(_QWORD *)v8 = &qword_140015648;
    *(_QWORD *)(v8 + 8) = v11;
    *v11 = v8;
    qword_140015650 = v8;
    KeInitializeAffinityEx2(v8 + 48, 32LL);
    *(_DWORD *)(v8 + 36) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v2 + 8 * v5 + 16);
    *(_DWORD *)(v8 + 44) = *(_DWORD *)(v2 + 8 * v5 + 20);
  }
  v12 = *(_QWORD *)(a1 + 728);
  v13 = 32LL * *(unsigned int *)(v2 + 8 * v5 + 24);
  v14 = (_QWORD *)(v13 + v12 + 24);
  *(_QWORD *)(v13 + v12 + 16) = v8;
  v15 = *(_QWORD **)(v8 + 24);
  if ( *v15 != v8 + 16 )
    goto LABEL_15;
  v14[1] = v15;
  *v14 = v8 + 16;
  *v15 = v14;
  *(_QWORD *)(v8 + 24) = v14;
  if ( !(unsigned int)KeCheckProcessorAffinityEx(v8 + 48) )
  {
    KeAddProcessorAffinityEx(v8 + 48, *(unsigned int *)(a1 + 56));
    ++*(_DWORD *)(v8 + 32);
  }
  if ( *(_DWORD *)(v8 + 32) == *(_DWORD *)(v8 + 44) )
    return 1;
  return v3;
}
