/*
 * XREFs of FopReadCmapTable @ 0x140D1A010
 * Callers:
 *     FopReadMappingTable @ 0x140D1A17C (FopReadMappingTable.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadCmapTable(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int BytesAtOffset; // ebx
  unsigned __int16 v6; // si
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  _DWORD *Memory; // rdi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  __int64 v13; // rsi
  _DWORD *v14; // r15
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  int v18; // [rsp+30h] [rbp-48h]

  v17 = 0LL;
  v18 = 0;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 4u, &v17);
  if ( BytesAtOffset >= 0 )
  {
    v6 = __ROR2__(WORD1(v17), 8);
    LOWORD(v17) = __ROR2__(v17, 8);
    WORD1(v17) = v6;
    if ( (_WORD)v17 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v7 = 12LL;
      if ( v6 )
      {
        v8 = 8 * v6 + 4;
        if ( v8 < 0xC )
          return (unsigned int)-1073741675;
        v7 = v8;
        BytesAtOffset = 0;
      }
      Memory = (_DWORD *)BgpFwAllocateMemory(v7);
      if ( Memory )
      {
        v10 = 0;
        *Memory = v17;
        v11 = a2 + 4;
        v12 = v6;
        while ( v10 < v12 )
        {
          v13 = v10;
          v14 = &Memory[2 * v10];
          BytesAtOffset = FioFwReadBytesAtOffset(a1, v11, 8u, v14 + 1);
          if ( BytesAtOffset < 0 )
            goto LABEL_15;
          ++v10;
          *((_WORD *)v14 + 2) = __ROR2__(*((_WORD *)v14 + 2), 8);
          BytesAtOffset = 0;
          HIWORD(Memory[2 * v13 + 1]) = __ROR2__(HIWORD(Memory[2 * v13 + 1]), 8);
          v11 += 8;
          Memory[2 * v13 + 2] = _byteswap_ulong(Memory[2 * v13 + 2]);
        }
        *a3 = Memory;
        if ( BytesAtOffset >= 0 )
          return (unsigned int)BytesAtOffset;
LABEL_15:
        BgpFwFreeMemory((__int64)Memory);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)BytesAtOffset;
}
