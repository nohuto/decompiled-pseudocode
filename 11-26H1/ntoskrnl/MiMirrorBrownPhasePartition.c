/*
 * XREFs of MiMirrorBrownPhasePartition @ 0x14044341C
 * Callers:
 *     MiMirrorBrownPhase @ 0x140C13640 (MiMirrorBrownPhase.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     MiEmptyAllWorkingSets @ 0x1406FC690 (MiEmptyAllWorkingSets.c)
 *     MiWalkPagesOnLists @ 0x140C0B898 (MiWalkPagesOnLists.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiMirrorBrownPhasePartition(__int64 *a1, __int64 a2)
{
  int v4; // ebp
  int i; // esi
  int j; // edi
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-10h]

  v4 = (a1[1] & 0xA) == 0;
  for ( i = 0; ; ++i )
  {
    for ( j = 0; j < 2; ++j )
      MiActOnMirrorBitmap((unsigned int)j, 0LL, 2LL);
    if ( i == v4 )
    {
      v8 = *((_DWORD *)a1 + 16);
      if ( (v8 & 1) == 0 )
      {
        *((_DWORD *)a1 + 16) = v8 | 1;
        _InterlockedIncrement(&dword_140E36158);
      }
    }
    v9 = *((_DWORD *)a1 + 2);
    if ( (v9 & 0x400) != 0 || (v9 & 4) != 0 )
    {
      v10 = *((_DWORD *)a1 + 3);
    }
    else
    {
      if ( (v9 & 0x10) == 0 )
        MiEmptyAllWorkingSets(a2);
      v10 = 0;
    }
    MiWalkPagesOnLists((_DWORD)a1, a2, *((_DWORD *)a1 + 4), v7, v10);
    v12 = *a1;
    v13 = *((_DWORD *)a1 + 2);
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    result = MiWalkAllBitmapRanges(&stru_140E2ED08.WaitBlockFill11[48], MiWriteBrownPages, &v12);
    if ( (int)result < 0 || (a1[8] & 1) != 0 || v15 < 0x400 )
      break;
  }
  return result;
}
