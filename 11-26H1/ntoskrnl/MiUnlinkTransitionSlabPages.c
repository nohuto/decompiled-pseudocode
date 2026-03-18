/*
 * XREFs of MiUnlinkTransitionSlabPages @ 0x1402AA834
 * Callers:
 *     MiDemoteSlabEntry @ 0x1402AA3B4 (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x1407067E0 (MiDeleteSlabEntriesForIdentity.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 */

__int64 __fastcall MiUnlinkTransitionSlabPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // r15
  unsigned int v5; // r9d
  __int64 v6; // rdi
  int v7; // r10d
  unsigned __int64 v8; // r11
  unsigned int *v9; // r8
  unsigned int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // edx
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int64 *v18; // rdi
  unsigned __int64 *v19; // r14
  volatile signed __int32 *v20; // rbx
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]

  v22 = a2;
  v21 = a1;
  v2 = a2;
  v3 = 0;
  v4 = 0x3FFFFFFFFFLL;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    LODWORD(v21) = 0;
    if ( v5 <= v3 )
      return v4;
    v6 = *(_QWORD *)(v2 + 72);
    v7 = 0;
    v8 = v6 + 4 * ((unsigned __int64)(v5 - 1) >> 5);
    v9 = (unsigned int *)(v6 + 4 * ((unsigned __int64)v3 >> 5));
    v10 = *v9 & (-1 << (v3 & 0x1F));
    v11 = v9 + 1;
    while ( !v10 )
    {
      if ( (unsigned __int64)v11 > v8 )
        return v4;
      ++v9;
      ++v11;
      v10 = *v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v10);
    v13 = v12 + 32 * (((__int64)v9 - v6) >> 2);
    if ( v13 > v5 )
      return v4;
    v14 = ((1 << v12) - 1) | v10;
    while ( 1 )
    {
      v15 = ~v14;
      if ( v15 )
      {
        _BitScanForward64((unsigned __int64 *)&v16, v15);
        goto LABEL_13;
      }
      v7 += 32;
      if ( (unsigned __int64)(v9 + 1) > v8 )
        break;
      v14 = v9[1];
      ++v9;
    }
    LODWORD(v16) = 32;
LABEL_13:
    v3 = 32 * (((__int64)v9 - v6) >> 2) + v16;
    if ( v3 > v5 )
      v3 = v5;
    if ( v3 == v13 )
      return v4;
    v18 = (unsigned __int64 *)(48 * (*(_QWORD *)(v2 + 40) + v13) - 0x220000000000LL);
    v19 = &v18[6 * (v3 - v13)];
    if ( v18 < v19 )
    {
      v20 = (volatile signed __int32 *)(v18 + 3);
      do
      {
        LODWORD(v21) = 0;
        if ( v4 == 0x3FFFFFFFFFLL )
        {
          while ( _interlockedbittestandset64(v20, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(__int64 *)v20 < 0 );
          }
        }
        else
        {
          while ( _interlockedbittestandset64(v20, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(__int64 *)v20 < 0 );
          }
        }
        if ( (unsigned __int16)*((_DWORD *)v20 + 2) || (*((_BYTE *)v20 + 10) & 7u) > 4 )
        {
          _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( (MiUnlinkPageFromListEx((ULONG_PTR)v18) & 1) != 0 )
            *(_QWORD *)v20 |= 0x4000000000000000uLL;
          *v18 = v4 ^ (v4 ^ *v18) & 0xFFFFFF0000000000uLL;
          v4 = (__int64)(v20 + 0x87FFFFFFFFALL) / 48;
        }
        v18 += 6;
        v20 += 12;
      }
      while ( v18 < v19 );
      v2 = v22;
    }
  }
}
