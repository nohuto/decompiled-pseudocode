/*
 * XREFs of MiUnlinkTransitionSlabPages @ 0x1402A9C34
 * Callers:
 *     MiDemoteSlabEntry @ 0x1402A97C4 (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14070B4B0 (MiDeleteSlabEntriesForIdentity.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 */

__int64 __fastcall MiUnlinkTransitionSlabPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // r15
  unsigned int v5; // r9d
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  unsigned int *v8; // r8
  unsigned int v9; // edx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r11d
  int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned __int64 *v17; // rdi
  unsigned __int64 *v18; // r14
  volatile signed __int32 *v19; // rbx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h]

  v21 = a2;
  v20 = a1;
  v2 = a2;
  v3 = 0;
  v4 = 0x3FFFFFFFFFLL;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    LODWORD(v20) = 0;
    if ( v5 <= v3 )
      return v4;
    v6 = *(_QWORD *)(v2 + 72);
    v7 = v6 + 4 * ((unsigned __int64)(v5 - 1) >> 5);
    v8 = (unsigned int *)(v6 + 4 * ((unsigned __int64)v3 >> 5));
    v9 = *v8 & (-1 << (v3 & 0x1F));
    v10 = v8 + 1;
    while ( !v9 )
    {
      if ( (unsigned __int64)v10 > v7 )
        return v4;
      ++v8;
      ++v10;
      v9 = *v8;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v9);
    v12 = v11 + 32 * (((__int64)v8 - v6) >> 2);
    if ( v12 > v5 )
      return v4;
    v13 = ((1 << v11) - 1) | v9;
    while ( 1 )
    {
      v14 = ~v13;
      if ( v14 )
      {
        _BitScanForward64((unsigned __int64 *)&v15, v14);
        goto LABEL_13;
      }
      if ( (unsigned __int64)(v8 + 1) > v7 )
        break;
      v13 = v8[1];
      ++v8;
    }
    LODWORD(v15) = 32;
LABEL_13:
    v3 = 32 * (((__int64)v8 - v6) >> 2) + v15;
    if ( v3 > v5 )
      v3 = v5;
    if ( v3 == v12 )
      return v4;
    v17 = (unsigned __int64 *)(48 * (*(_QWORD *)(v2 + 40) + v12) - 0x220000000000LL);
    v18 = &v17[6 * (v3 - v12)];
    if ( v17 < v18 )
    {
      v19 = (volatile signed __int32 *)(v17 + 3);
      do
      {
        LODWORD(v20) = 0;
        if ( v4 == 0x3FFFFFFFFFLL )
        {
          while ( _interlockedbittestandset64(v19, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v20);
            while ( *(__int64 *)v19 < 0 );
          }
        }
        else
        {
          while ( _interlockedbittestandset64(v19, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v20);
            while ( *(__int64 *)v19 < 0 );
          }
        }
        if ( (unsigned __int16)*((_DWORD *)v19 + 2) || (*((_BYTE *)v19 + 10) & 7u) > 4 )
        {
          _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( (MiUnlinkPageFromListEx((ULONG_PTR)v17) & 1) != 0 )
            *(_QWORD *)v19 |= 0x4000000000000000uLL;
          *v17 = v4 ^ (v4 ^ *v17) & 0xFFFFFF0000000000uLL;
          v4 = (__int64)(v19 + 0x87FFFFFFFFALL) / 48;
        }
        v17 += 6;
        v19 += 12;
      }
      while ( v17 < v18 );
      v2 = v21;
    }
  }
}
