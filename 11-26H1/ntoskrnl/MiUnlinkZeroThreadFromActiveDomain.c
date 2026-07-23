/*
 * XREFs of MiUnlinkZeroThreadFromActiveDomain @ 0x1402F5D74
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     MiRemoveThreadFromEngineLists @ 0x140502E5C (MiRemoveThreadFromEngineLists.c)
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUnlinkZeroThreadFromActiveDomain(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r11
  unsigned int v9; // r9d
  __int64 v10; // r8

  v2 = (_QWORD *)(a1 + 176);
  if ( *v2 )
  {
    v3 = *(unsigned int *)(a1 + 88);
    if ( (_DWORD)v3 != -1 )
    {
      v4 = *(_QWORD *)(a1 + 80);
      v5 = *(_QWORD *)(v4 + 88) + 48 * v3;
      --*(_DWORD *)(v5 + 32);
      v6 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *v2 = 0LL;
      if ( *(_DWORD *)v4 )
      {
        v8 = *(_QWORD *)(a1 + 80);
        v9 = 0;
        v10 = *(_QWORD *)(v5 + 8);
        while ( v9 < *(_DWORD *)(v8 + 16) )
        {
          if ( *(_WORD *)(v10 + 8) == *(_WORD *)(a1 + 104)
            && (!*(_BYTE *)(v8 + 39) || *(_QWORD *)(*(_QWORD *)v5 + 16LL * v9)) )
          {
            *(_QWORD *)v10 |= *(_QWORD *)(a1 + 96);
            break;
          }
          ++v9;
          v10 += 16LL;
        }
      }
      *(_QWORD *)(a1 + 96) = 0LL;
      *(_DWORD *)(a1 + 88) = -1;
    }
  }
}
