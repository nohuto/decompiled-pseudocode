/*
 * XREFs of FopReadMappingTable @ 0x140D1A17C
 * Callers:
 *     FopInitializeFonts @ 0x140D19EB8 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FopFreeMappingTable @ 0x140C57C94 (FopFreeMappingTable.c)
 *     FopReadCmapTable @ 0x140D1A010 (FopReadCmapTable.c)
 */

__int64 __fastcall FopReadMappingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v6; // eax
  __int64 v7; // rbp
  int BytesAtOffset; // ebx
  __int64 v9; // rax
  unsigned int i; // ecx
  int v11; // ecx
  int v12; // r15d
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  __int64 Memory; // rax
  __int64 v16; // rdi
  _WORD *v17; // rax
  _WORD *v18; // rsi
  unsigned int v19; // r14d
  _WORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h] BYREF
  int v26; // [rsp+30h] [rbp-48h]
  __int16 v27; // [rsp+34h] [rbp-44h]

  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v24 = 0LL;
  v6 = FopReadCmapTable(a1, a2, &v24);
  v7 = v24;
  BytesAtOffset = v6;
  if ( v6 >= 0 )
  {
    v9 = v24 + 4;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(v24 + 2) )
        goto LABEL_21;
      if ( *(_WORD *)v9 == 3 && *(_WORD *)(v9 + 2) == 1 )
        break;
      v9 += 8LL;
    }
    v11 = *(_DWORD *)(v9 + 4);
    if ( v11 )
    {
      v12 = a2 + v11;
      BytesAtOffset = FioFwReadBytesAtOffset(a1, a2 + v11, 0xEu, &v25);
      if ( BytesAtOffset < 0 )
        goto LABEL_22;
      if ( __ROR2__(v25, 8) != 4 )
      {
        BytesAtOffset = -1073741701;
        goto LABEL_22;
      }
      v13 = __ROR2__(WORD1(v25), 8);
      v14 = __ROR2__(HIWORD(v25), 8);
      Memory = BgpFwAllocateMemory(0x38uLL);
      v16 = Memory;
      if ( !Memory )
      {
        BytesAtOffset = -1073741801;
        goto LABEL_22;
      }
      *(_OWORD *)Memory = 0LL;
      *(_OWORD *)(Memory + 16) = 0LL;
      *(_OWORD *)(Memory + 32) = 0LL;
      *(_QWORD *)(Memory + 48) = 0LL;
      *(_DWORD *)Memory = v14 >> 1;
      v17 = (_WORD *)BgpFwAllocateMemory((unsigned int)v13 - 14);
      v18 = v17;
      if ( !v17 )
      {
        BytesAtOffset = -1073741801;
LABEL_16:
        FopFreeMappingTable(v16);
        goto LABEL_22;
      }
      v19 = ((unsigned int)v13 - 14) >> 1;
      *(_QWORD *)(v16 + 8) = v17;
      BytesAtOffset = FioFwReadBytesAtOffset(a1, v12 + 14, 2 * v19, v17);
      if ( BytesAtOffset < 0 )
        goto LABEL_16;
      if ( v19 )
      {
        v20 = v18;
        v21 = v19;
        do
        {
          *v20 = __ROR2__(*v20, 8);
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      v22 = *(_DWORD *)v16;
      *(_QWORD *)(v16 + 24) = v18;
      *(_QWORD *)(v16 + 16) = (char *)v18 + (unsigned int)(2 * v22 + 2);
      *(_QWORD *)(v16 + 32) = (char *)v18 + (unsigned int)(4 * v22 + 2);
      *(_QWORD *)(v16 + 40) = (char *)v18 + (unsigned int)(2 * v22 + 2 * (2 * v22 + 1));
      *(_QWORD *)(v16 + 48) = (char *)v18 + (unsigned int)(8 * v22 + 2);
      BytesAtOffset = 0;
      *a3 = v16;
    }
    else
    {
LABEL_21:
      BytesAtOffset = -1073741275;
    }
  }
LABEL_22:
  if ( v7 )
    BgpFwFreeMemory(v7);
  return (unsigned int)BytesAtOffset;
}
