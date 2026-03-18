/*
 * XREFs of MiGetHighestPteConsumer @ 0x140524CA4
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x140524C34 (MiIssueNoPtesBugcheck.c)
 * Callees:
 *     MiImageContainsVa @ 0x1404BD1D8 (MiImageContainsVa.c)
 */

__int64 __fastcall MiGetHighestPteConsumer(unsigned __int64 *a1)
{
  char v1; // al
  unsigned int v3; // ecx
  void **v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rdi
  void **v9; // r14
  char *v10; // rbx
  __int64 v11; // r12
  char *i; // r8
  __int64 v13; // rbp
  int v14; // r11d
  __int64 v15; // rax

  v1 = dword_140FBE20C;
  *a1 = 0LL;
  if ( (v1 & 1) == 0 || byte_140E34B65 || !PsLoadedModuleList )
    return 0LL;
  v3 = 0;
  v4 = (void **)&unk_140E378B0;
  while ( *v4 == (char *)&unk_140E378B0 + 16 * v3 )
  {
    ++v3;
    v4 += 2;
    if ( v3 >= 0x10 )
    {
      if ( v3 == 16 )
        return 0LL;
      break;
    }
  }
  v5 = (__int64)*(&PsLoadedModuleList + 1);
  v6 = 0LL;
  v7 = 0LL;
  while ( (PVOID *)v5 != &PsLoadedModuleList )
  {
    v8 = 0LL;
    v9 = (void **)&unk_140E378B0;
    v10 = (char *)&unk_140E378B0;
    v11 = 16LL;
    do
    {
      for ( i = (char *)*v9; i != v10; i = *(char **)i )
      {
        if ( (*((_DWORD *)i + 16) & 2) == 0 )
        {
          v13 = *((_QWORD *)i + 3);
          if ( MiImageContainsVa(v5, *((_QWORD *)i + 10)) || MiImageContainsVa(v5, *((_QWORD *)i + 11)) )
          {
            v8 += v13;
            *((_DWORD *)i + 16) = v14 | 2;
          }
        }
      }
      v10 += 16;
      v9 += 2;
      --v11;
    }
    while ( v11 );
    v15 = v5;
    v5 = *(_QWORD *)(v5 + 8);
    if ( v8 <= v6 )
    {
      v15 = v7;
      v8 = v6;
    }
    v7 = v15;
    v6 = v8;
  }
  *a1 = v6;
  return v7;
}
