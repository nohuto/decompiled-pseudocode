/*
 * XREFs of PnpLookupArbitersNewResources @ 0x140B57BC4
 * Callers:
 *     IopRetestConfiguration @ 0x1407A58A0 (IopRetestConfiguration.c)
 *     IopTestConfiguration @ 0x1407A5BC4 (IopTestConfiguration.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpLookupArbitersNewResources(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // r10d
  int v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // al
  __int64 Pool2; // rdx
  __int64 v18; // rax
  char v19; // cl

  v6 = 0;
  v8 = 0;
  if ( !a2 )
    return 3221225473LL;
  while ( *(_QWORD *)(((unsigned __int64)v8 << 6) + a1) != *(_QWORD *)(a3 + 32) )
  {
    if ( ++v8 >= a2 )
      return 3221225473LL;
  }
  _mm_lfence();
  v10 = 0;
  v11 = *(__int64 **)(*(_QWORD *)(((unsigned __int64)v8 << 6) + a1 + 32) + 16LL);
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 20);
  if ( v13 )
  {
    v14 = v12 + 24;
    v15 = v13;
    do
    {
      v16 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14 + 32LL) + 136LL);
      if ( v16 == a4 || v16 == 7 && a4 == 3 )
        ++v10;
      v14 += 8LL;
      --v15;
    }
    while ( v15 );
    if ( v10 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return 3221225626LL;
      *a6 = v10;
      *a5 = Pool2;
      if ( *(_DWORD *)(v12 + 20) )
      {
        do
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v12 + 8LL * v6 + 24) + 32LL);
          v19 = *(_BYTE *)(v18 + 136);
          if ( v19 == a4 || v19 == 7 && a4 == 3 )
          {
            *(_OWORD *)Pool2 = *(_OWORD *)(v18 + 136);
            *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(v18 + 152);
            Pool2 += 20LL;
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(v12 + 20) );
      }
    }
  }
  return 0LL;
}
