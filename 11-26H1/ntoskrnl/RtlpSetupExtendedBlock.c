/*
 * XREFs of RtlpSetupExtendedBlock @ 0x14062045C
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x140492188 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // rbx
  char v8; // r14
  char v9; // cl
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v15; // [rsp+28h] [rbp-10h]

  v6 = a3 - 16;
  v8 = 0;
  v9 = *(_BYTE *)(a3 - 16 + 15);
  v10 = a3 + a5;
  if ( v9 == 4 )
  {
    if ( ((*(_BYTE *)(a1 + 116) | a2) & 1) == 0 )
    {
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    *(_WORD *)(v6 + 8) += a5;
    LOWORD(v11) = *(_WORD *)(v6 + 8);
    *(_BYTE *)(v6 + 14) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
  }
  else
  {
    if ( v9 == 5 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 12) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v9 & 0x40) != 0 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 16LL * (v9 & 0x3F) + 12);
    }
    else if ( (v9 & 0x3F) == 0x3F )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v12 = *(_DWORD *)(v6 + 8);
        LOWORD(v15) = v12;
        if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
          v15 = *(_DWORD *)(a1 + 136) ^ v12;
        v13 = v15;
      }
      else
      {
        v13 = *(_WORD *)(v6 + 8);
      }
      v11 = *(_QWORD *)(v6 + 16LL * v13);
    }
    else
    {
      LOWORD(v11) = v9 & 0x3F;
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(v6 + 15) = (a5 >> 4) | *(_BYTE *)(v6 + 15) & 0xC0 | 0x40;
  }
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = a5 + v11;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v8 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
