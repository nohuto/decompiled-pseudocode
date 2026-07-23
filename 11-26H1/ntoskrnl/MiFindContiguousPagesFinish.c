/*
 * XREFs of MiFindContiguousPagesFinish @ 0x1404F063C
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiSetPfnOwnedAndActive @ 0x14033D0DC (MiSetPfnOwnedAndActive.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MiConvertContiguousPages @ 0x140464F84 (MiConvertContiguousPages.c)
 */

unsigned __int64 __fastcall MiFindContiguousPagesFinish(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // rcx
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // edi
  unsigned __int64 result; // rax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  char v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  char v17; // r9
  int v18; // eax
  char v19; // bp
  unsigned __int16 v20; // di
  __int64 v21; // rsi
  unsigned int v22; // [rsp+70h] [rbp+18h]

  v3 = *a1;
  v5 = a1[30];
  v8 = *(_QWORD *)v3;
  v9 = *(_QWORD *)(v3 + 40);
  v10 = *(_DWORD *)(v3 + 60);
  if ( v5 )
    MiDereferencePageRuns(v5);
  MiDeleteUltraThreadContext((__int64)(a1 + 14));
  result = *((unsigned int *)a1 + 64);
  if ( a3 >= 0 )
  {
    if ( (result & 2) == 0 )
    {
      result = 0xFFFFDE0000000000uLL;
      v12 = *(_DWORD *)(v3 + 48);
      v13 = 48 * a2 - 0x220000000000LL;
      v14 = *((_BYTE *)a1 + 8);
      v22 = v12;
      if ( (v10 & 0x2000) == 0 )
      {
        v15 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
        v16 = (v9 + a2) & 0xFFFFFFFFFFFFFE00uLL;
        if ( v15 < v16 && (v10 >= 0 || (v10 & 0x1000) == 0) )
        {
          v17 = 7;
          if ( v14 != 2 )
            v17 = 3;
          MiUpdateLargePageBitMap(v8, v15, v16 - v15, v17);
          v12 = v22;
        }
        result = MiConvertContiguousPages(48 * a2 - 0x220000000000LL, v9, v12, v14);
        v12 = v22;
      }
      if ( (v10 & 0x40000000) == 0 )
      {
        v18 = *(_DWORD *)(v3 + 64);
        v19 = v18 | 4;
        v20 = ((v10 & 0x100000) != 0) + 1;
        v21 = v13 + 48 * v9;
        if ( v14 != 2 )
          v19 = v18;
        do
        {
          result = MiSetPfnOwnedAndActive(v13, v19, -8LL, v12, v20);
          v12 = v22;
          v13 += 48LL;
        }
        while ( v13 != v21 );
      }
    }
  }
  else if ( (result & 1) != 0 )
  {
    return MiReleaseNonPagedResources(v8, v9);
  }
  return result;
}
