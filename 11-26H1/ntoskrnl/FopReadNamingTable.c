/*
 * XREFs of FopReadNamingTable @ 0x140D1A380
 * Callers:
 *     FopValidateFontNameTable @ 0x140D1A52C (FopValidateFontNameTable.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int BytesAtOffset; // ebx
  unsigned int v6; // edx
  unsigned __int16 v7; // si
  __int16 v8; // bp
  __int64 Memory; // rdi
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  __int64 v13; // rsi
  __int64 v14; // r12
  __int128 v17; // [rsp+28h] [rbp-60h] BYREF
  __int16 v18; // [rsp+38h] [rbp-50h]

  v18 = 0;
  v17 = 0LL;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 6u, &v17);
  if ( BytesAtOffset >= 0 )
  {
    v6 = 18;
    LOWORD(v17) = __ROR2__(v17, 8);
    v7 = __ROR2__(WORD1(v17), 8);
    v8 = __ROR2__(WORD2(v17), 8);
    WORD1(v17) = v7;
    if ( v7 )
    {
      if ( 12 * (unsigned int)v7 + 18 < 0x12 )
        return (unsigned int)-1073741675;
      v6 = 12 * v7 + 18;
      BytesAtOffset = 0;
    }
    Memory = BgpFwAllocateMemory(v6);
    if ( Memory )
    {
      v10 = a2 + 6;
      *(_DWORD *)Memory = v17;
      *(_WORD *)(Memory + 4) = v8;
      v11 = 0;
      v12 = v7;
      while ( 1 )
      {
        if ( v11 >= v12 )
        {
          *a3 = Memory;
          return (unsigned int)BytesAtOffset;
        }
        v13 = 3LL * v11;
        v14 = Memory + 12LL * v11;
        BytesAtOffset = FioFwReadBytesAtOffset(a1, v10, 0xCu, (void *)(v14 + 6));
        if ( BytesAtOffset < 0 )
          break;
        ++v11;
        *(_WORD *)(v14 + 6) = __ROR2__(*(_WORD *)(v14 + 6), 8);
        BytesAtOffset = 0;
        *(_WORD *)(Memory + 4 * v13 + 8) = __ROR2__(*(_WORD *)(Memory + 4 * v13 + 8), 8);
        *(_WORD *)(Memory + 4 * v13 + 10) = __ROR2__(*(_WORD *)(Memory + 4 * v13 + 10), 8);
        *(_WORD *)(Memory + 4 * v13 + 12) = __ROR2__(*(_WORD *)(Memory + 4 * v13 + 12), 8);
        *(_WORD *)(Memory + 4 * v13 + 14) = __ROR2__(*(_WORD *)(Memory + 4 * v13 + 14), 8);
        *(_WORD *)(Memory + 4 * v13 + 16) = __ROR2__(*(_WORD *)(Memory + 4 * v13 + 16), 8);
        v10 += 12;
      }
      BgpFwFreeMemory(Memory);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)BytesAtOffset;
}
