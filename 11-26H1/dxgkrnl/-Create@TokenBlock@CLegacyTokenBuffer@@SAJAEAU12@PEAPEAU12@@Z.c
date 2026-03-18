/*
 * XREFs of ?Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z @ 0x14003B2E4
 * Callers:
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x14003B290 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyTokenBuffer::TokenBlock::Create(
        struct CLegacyTokenBuffer::TokenBlock *a1,
        struct CLegacyTokenBuffer::TokenBlock **a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax
  struct CLegacyTokenBuffer::TokenBlock **v6; // rcx

  *a2 = 0LL;
  v4 = -1073741801;
  Pool2 = ExAllocatePool2(256LL, 2072LL, 1651789140LL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 2068) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    v6 = (struct CLegacyTokenBuffer::TokenBlock **)*((_QWORD *)a1 + 1);
    if ( *v6 != a1 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = a1;
    v4 = 0;
    *(_QWORD *)(Pool2 + 8) = v6;
    *v6 = (struct CLegacyTokenBuffer::TokenBlock *)Pool2;
    *((_QWORD *)a1 + 1) = Pool2;
    *a2 = (struct CLegacyTokenBuffer::TokenBlock *)Pool2;
  }
  return v4;
}
