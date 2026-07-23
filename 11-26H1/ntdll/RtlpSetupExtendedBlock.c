/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1800C7A00
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        unsigned __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  unsigned __int64 v6; // rdi
  char v8; // cl
  char v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int16 v12; // cx
  __int64 v14; // rax

  v6 = a3 - 16;
  v8 = *(_BYTE *)(a3 - 16 + 15);
  v9 = 0;
  v10 = a3 + a5;
  if ( v8 != 4 )
  {
    if ( v8 == 5 )
    {
      LOWORD(v11) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v6 + 12);
    }
    else if ( (v8 & 0x40) != 0 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 16LL * (*(_BYTE *)(a3 - 16 + 15) & 0x3F) + 12);
    }
    else if ( (v8 & 0x3F) == 0x3F )
    {
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          LODWORD(v14) = *(_DWORD *)(v6 + 8);
          if ( ((unsigned int)v14 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v11 = *(_QWORD *)(v6 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v14));
            goto LABEL_6;
          }
        }
        else
        {
          LOWORD(v14) = *(_WORD *)(v6 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
          v14 = 0LL;
        else
          v14 = *(_QWORD *)(v6
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12));
        LOWORD(v14) = *(_WORD *)(v14 + 36);
      }
      v11 = *(_QWORD *)(v6 + 16LL * (unsigned __int16)v14);
    }
    else
    {
      LOWORD(v11) = v8 & 0x3F;
    }
LABEL_6:
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(v6 + 15) &= 0xC0u;
    *(_BYTE *)(v6 + 15) |= (unsigned __int8)(a5 >> 4) | 0x40;
    *(_BYTE *)(v10 - 1) = 5;
    *(_WORD *)(v10 - 4) = v11 + a5;
    *(_DWORD *)(v10 - 8) = a6;
    return v10;
  }
  if ( ((*(_BYTE *)(a1 + 116) | a2) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v9 = 1;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( HIBYTE(*(_DWORD *)(v6 + 8)) != ((unsigned __int8)*(_DWORD *)(v6 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v6 + 8)) ^ HIWORD(*(_DWORD *)(v6 + 8)))) )
      RtlpAnalyzeHeapFailure(a1, v6);
  }
  v12 = *(_WORD *)(v6 + 8) + a5;
  *(_WORD *)(v6 + 8) = v12;
  *(_BYTE *)(v6 + 14) = a5 >> 4;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = v12 ^ *(_BYTE *)(v6 + 10) ^ HIBYTE(v12);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  *(_BYTE *)(v10 - 2) = a5 >> 4;
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = a5 + v12;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v9 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v10;
}
