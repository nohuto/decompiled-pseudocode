/*
 * XREFs of IvtUpdateScalableModeContextEntry @ 0x1404F9C68
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404F9990 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtConfigureAts @ 0x1405A8660 (IvtConfigureAts.c)
 *     IvtSetDevicePasidTable @ 0x1405A9FD0 (IvtSetDevicePasidTable.c)
 * Callees:
 *     IvtBuildScalableModeContextEntry @ 0x14052F914 (IvtBuildScalableModeContextEntry.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x1405A9B18 (IvtInvalidateScalableModeContextEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IvtUpdateScalableModeContextEntry(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbx
  unsigned int v11; // r9d
  int v13; // r11d
  int v14; // ebp
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  unsigned int v17; // edi
  char v18; // r15
  int v19; // ecx
  __int64 v20; // r9
  volatile signed __int64 *v21; // rdi
  volatile signed __int64 v22; // rax
  char v23; // si
  __int64 v24; // r9
  __int128 v25; // rax
  __int64 v26; // r8
  __int128 v27; // rt0
  unsigned __int8 v28; // tt

  v9 = *(_QWORD *)(a1 + 32);
  v11 = *a2;
  v13 = a3;
  v14 = a1;
  v15 = 2 * (*a2 >> 8);
  if ( *(_BYTE *)(a1 + 320) )
    v16 = (_QWORD *)(v9 + 8 * (v15 + ((v11 & 0xF8) >= 0x80)));
  else
    v16 = (_QWORD *)(v9 + 16LL * (v11 >> 8));
  v17 = v11;
  v18 = 0;
  LOBYTE(a3) = a4 == 1;
  v19 = (unsigned int)(a5 - 1) <= 1;
  v20 = v11 & 7;
  v21 = (volatile signed __int64 *)(*v16 + 32 * (v20 | (8LL * ((v17 >> 3) & 0xF))));
  v22 = *v21;
  if ( (*v21 & 1) == 0 || a8 )
  {
    v23 = 0;
  }
  else
  {
    v23 = 1;
    if ( !a4 )
      LOBYTE(a3) = (v22 & 4) != 0;
    v19 = (unsigned __int8)v19;
    if ( !a5 )
      v19 = (*v21 & 8) != 0;
    if ( (_BYTE)a3 != ((v22 & 4) != 0) || (v22 & 4) != 0 )
      v18 = 1;
  }
  LOBYTE(v20) = v19;
  IvtBuildScalableModeContextEntry(v19, v13, a3, v20);
  DWORD2(v25) = 1 << a2[1];
  *(_QWORD *)&v25 = (unsigned int)(1 << (3 - *((_BYTE *)a2 + 4)));
  if ( DWORD2(v25) )
  {
    v26 = 32LL * (unsigned int)v25;
    v24 = DWORD2(v25);
    do
    {
      v25 = *(_OWORD *)v21;
      do
      {
        v27 = v25;
        v28 = _InterlockedCompareExchange128(v21, 0LL, 0LL, (signed __int64 *)&v27);
        v25 = v27;
      }
      while ( !v28 );
      v21 = (volatile signed __int64 *)((char *)v21 + v26);
      --v24;
    }
    while ( v24 );
  }
  if ( v23 )
    *(_QWORD *)&v25 = IvtInvalidateScalableModeContextEntry(v14, (_DWORD)a2, a9, v24, v18);
  return v25;
}
