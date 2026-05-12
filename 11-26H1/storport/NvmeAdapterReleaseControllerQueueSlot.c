/*
 * XREFs of NvmeAdapterReleaseControllerQueueSlot @ 0x1400ECFA4
 * Callers:
 *     NvmeAdapterCleanupControllerQueueRequest @ 0x1400E4FA8 (NvmeAdapterCleanupControllerQueueRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterReleaseControllerQueueSlot(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 result; // rax
  unsigned __int16 v7; // dx
  unsigned int v8; // r10d
  int v9; // eax
  __int16 v10; // dx
  unsigned __int16 v11; // dx
  __int64 v12; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v4 = 2LL * a2;
  v5 = *(unsigned __int16 *)(v2 + 16LL * a2 + 8);
  *(_QWORD *)(v2 + 8 * v4) = 0LL;
  result = *(_QWORD *)(a1 + 24);
  *(_WORD *)(result + 8 * v4 + 8) = -1;
  v7 = *(_WORD *)(a1 + 140);
  if ( a2 == v7 )
  {
    v8 = *(_DWORD *)(a1 + 124);
    while ( 1 )
    {
      result = v7;
      if ( v7 >= v8 && v7 > *(_WORD *)(a1 + 142) )
        break;
      result = *(unsigned __int16 *)(a1 + 142);
      if ( v7 == (_WORD)result )
      {
        *(_WORD *)(a1 + 140) = result;
        break;
      }
      result = *(_QWORD *)(a1 + 24);
      if ( *(_WORD *)(result + 16LL * v7 + 8) != 0xFFFF )
      {
        *(_WORD *)(a1 + 140) = v7;
        break;
      }
      v9 = (unsigned __int16)(v7 + 1);
      v7 = 0;
      if ( v9 != v8 )
        v7 = v9;
    }
  }
  else
  {
    v10 = *(_WORD *)(a1 + 142);
    if ( !v10 )
      v10 = *(_WORD *)(a1 + 124);
    v11 = v10 - 1;
    if ( a2 == v11 )
    {
      while ( *(_WORD *)(*(_QWORD *)(a1 + 24) + 16LL * v11 + 8) == 0xFFFF )
      {
        if ( v11 )
          --v11;
        else
          v11 = *(_WORD *)(a1 + 124) - 1;
      }
      result = v11;
      if ( v11 == *(_DWORD *)(a1 + 124) - 1 )
        *(_WORD *)(a1 + 142) = 0;
      else
        *(_WORD *)(a1 + 142) = v11 + 1;
    }
  }
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 124) )
  {
    v12 = v5 << 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + v12 + 60) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + (v5 << 7) + 60) & 0xFE;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + v12 + 24) = 0LL;
    *(_WORD *)(*(_QWORD *)(a1 + 32) + v12 + 56) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + v12 + 80) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + v12 + 32) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + v12 + 40) = 0LL;
    result = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(result + v12 + 48) = 0;
  }
  return result;
}
