/*
 * XREFs of MiDbgFindFirstPatch @ 0x140702C30
 * Callers:
 *     MiApplyDebuggerPatches @ 0x14038E5A8 (MiApplyDebuggerPatches.c)
 *     MiDeleteDebuggerPatches @ 0x1404E0030 (MiDeleteDebuggerPatches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDbgFindFirstPatch(unsigned __int64 a1, int a2, int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r11d
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v14; // rax

  v4 = dword_140E34920;
  v7 = (unsigned int)(a2 << 12) >> 2;
  v8 = 0LL;
  while ( (unsigned int)v8 < v4 )
  {
    v9 = ((unsigned int)v8 + v4) >> 1;
    v10 = ((unsigned int)v8 + v4) >> 1;
    v11 = *((_QWORD *)&MiState + v9 + 3651);
    if ( *(_QWORD *)v11 >= a1 )
    {
      if ( *(_QWORD *)v11 > a1 )
        goto LABEL_9;
      v12 = *(_DWORD *)(v11 + 8) >> 2;
      if ( v12 >= v7 )
      {
        if ( v12 <= v7 )
        {
          *a4 = v10;
          return 1LL;
        }
LABEL_9:
        v4 = ((unsigned int)v8 + v4) >> 1;
      }
      else
      {
        v8 = v10 + 1;
      }
    }
    else
    {
      v8 = (unsigned int)(v9 + 1);
    }
  }
  if ( (unsigned int)v8 < dword_140E34920 )
  {
    _mm_lfence();
    v14 = *((_QWORD *)&MiState + v8 + 3651);
    if ( *(_QWORD *)v14 == a1 && (!a3 || *(_DWORD *)(v14 + 8) >> 12 == a2) )
    {
      *a4 = v8;
      return 1LL;
    }
  }
  return 0LL;
}
