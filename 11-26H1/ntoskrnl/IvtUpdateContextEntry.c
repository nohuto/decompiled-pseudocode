/*
 * XREFs of IvtUpdateContextEntry @ 0x1404F9A90
 * Callers:
 *     IvtUpdateTranslationStructures @ 0x14052B598 (IvtUpdateTranslationStructures.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404F9C14 (IvtGetBlockedDomain.c)
 *     IvtInvalidateContextEntry @ 0x1405A9A88 (IvtInvalidateContextEntry.c)
 */

__int64 __fastcall IvtUpdateContextEntry(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // r9
  unsigned int v7; // r10d
  __int64 v9; // rdx
  _QWORD *v10; // rax
  char v11; // bp
  int v12; // r15d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  int BlockedDomain; // eax
  int v17; // esi
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // r9d
  __int64 result; // rax
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v7 = *a2;
  v9 = 2 * (*a2 >> 8);
  if ( *(_BYTE *)(a1 + 320) )
    v10 = (_QWORD *)(v6 + 8 * (v9 + ((v7 & 0xF8) >= 0x80)));
  else
    v10 = (_QWORD *)(v6 + 16LL * (v7 >> 8));
  v11 = 0;
  v12 = 0x10000;
  v13 = *v10 + 16LL * (unsigned __int8)v7;
  if ( (*(_OWORD *)v13 & 1) != 0 && !a5 )
  {
    v11 = 1;
    v12 = (unsigned __int16)((unsigned int)*(_QWORD *)(v13 + 8) >> 8);
  }
  v14 = *(_DWORD *)(a3 + 4);
  v15 = 0LL;
  v25 = 0LL;
  if ( v14 == 1 )
  {
    BlockedDomain = IvtGetBlockedDomain(a1, a2, &v25);
    v15 = v25;
    v17 = BlockedDomain;
    v18 = 0LL;
  }
  else
  {
    v17 = *(_DWORD *)(a3 + 48);
    if ( v14 )
    {
      v15 = *(_QWORD *)(a3 + 40) >> 12;
      v18 = 0LL;
    }
    else
    {
      v18 = 2LL;
    }
  }
  v19 = ((unsigned __int64)(unsigned __int16)v17 << 8) | *(_DWORD *)(a1 + 248) & 7;
  v20 = (4 * (v18 | (v15 << 10))) | 1;
  v21 = 1 << a2[1];
  result = (unsigned int)(1 << (3 - *((_BYTE *)a2 + 4)));
  if ( v21 )
  {
    result *= 16LL;
    v23 = v21;
    do
    {
      *(_QWORD *)(v13 + 8) = v19;
      *(_QWORD *)v13 = v20;
      v13 += result;
      --v23;
    }
    while ( v23 );
  }
  if ( v11 )
  {
    IvtInvalidateContextEntry(a1, (_DWORD)a2, v12, v21, 1);
    return IvtInvalidateContextEntry(a1, (_DWORD)a2, v17, v24, 1);
  }
  return result;
}
