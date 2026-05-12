/*
 * XREFs of RaidUnitSetInitialQueueDepth @ 0x14002DCE8
 * Callers:
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 * Callees:
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1400796C0 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitSetInitialQueueDepth(__int64 a1)
{
  unsigned int *v1; // r9
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int v5; // r10d

  v1 = *(unsigned int **)(a1 + 24);
  result = *v1;
  if ( (_DWORD)result == 1314275652 )
  {
    result = (__int64)(v1 + 44);
  }
  else
  {
    if ( (_DWORD)result != 1094997074 )
      return result;
    result = (__int64)(v1 + 96);
  }
  if ( result )
  {
    v3 = *(_DWORD *)(result + 212);
    v4 = *(_DWORD *)(result + 208);
    v5 = *(_DWORD *)(a1 + 724);
    if ( v3 && v3 <= v4 )
    {
      *(_DWORD *)(a1 + 724) = v3;
    }
    else
    {
      result = v5;
      if ( v3 != v5 )
        return result;
    }
    *(_DWORD *)(a1 + 928) = v4;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      return McTemplateK0zquuuqqqt_EtwWriteTransfer(
               a1,
               v3,
               v4,
               *((_QWORD *)v1 + 6),
               v1[14],
               *(_BYTE *)(a1 + 104),
               *(_BYTE *)(a1 + 105),
               *(_BYTE *)(a1 + 106),
               v5,
               v3,
               v4,
               0);
  }
  return result;
}
