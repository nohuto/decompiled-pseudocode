/*
 * XREFs of RtlpConstructImportRelocationFixup @ 0x14047AB94
 * Callers:
 *     RtlApplyImportRelocationToPage @ 0x14047AAAC (RtlApplyImportRelocationToPage.c)
 *     RtlApplyImportRelocationToImage @ 0x1407253B4 (RtlApplyImportRelocationToImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpConstructImportRelocationFixup(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v11; // rax
  int v12; // ebp
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned int v19; // ecx
  int v20; // r8d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  v11 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v11 = 0x9090909090909090uLL;
  v12 = a5;
  *(_QWORD *)(a7 + 2) = v11;
  *(_DWORD *)(a7 + 10) = v11;
  if ( !a5 )
    goto LABEL_4;
  if ( (a6 & 1) != 0 )
  {
    v15 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v16 = *(_QWORD *)(a2 + 16);
      if ( v16 )
      {
        v17 = *(int *)(v16 + 4 * ((unsigned __int64)(unsigned int)v15 >> 13));
      }
      else
      {
        v30 = *(_QWORD *)(a2 + 24);
        if ( !v30 )
          goto LABEL_30;
        v32 = *(_QWORD *)(v30 + 8 * (v15 >> 13));
        v17 = v32 - *(_QWORD *)(a2 + 32);
        if ( *(_QWORD *)(a2 + 40) )
        {
          if ( !(unsigned int)guard_dispatch_icall_no_overrides(v32, v15) )
            goto LABEL_30;
        }
      }
      if ( v17 )
      {
        v18 = v17 - (unsigned int)(a1 + 12);
        if ( v18 <= 0x7FFFFFFF && v18 >= (__int64)0xFFFFFFFF80000000uLL )
          goto LABEL_16;
      }
    }
LABEL_30:
    v12 = 0;
  }
LABEL_16:
  if ( v12 )
  {
    *(_DWORD *)a7 = -1957953529;
    *(_BYTE *)(a7 + 4) = 21;
    v19 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v20 = *(_DWORD *)(a2 + 4);
      if ( v20 )
      {
        *(_WORD *)a7 = 127;
        v21 = 8 * ((unsigned __int64)v19 >> 13) - (unsigned int)(a1 + 7);
        *(_WORD *)(a7 + 5) = v21 + v20;
        *(_BYTE *)(a7 + 8) = (unsigned int)(v21 + v20) >> 24;
        *(_BYTE *)(a7 + 7) = (unsigned int)(v21 + v20) >> 16;
      }
    }
    v22 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v23 = *(_QWORD *)(a2 + 16);
      if ( v23 )
      {
        v24 = *(int *)(v23 + 4 * ((unsigned __int64)(unsigned int)v22 >> 13));
        goto LABEL_23;
      }
      v31 = *(_QWORD *)(a2 + 24);
      if ( v31 )
      {
        v33 = *(_QWORD *)(v31 + 8 * (v22 >> 13));
        v24 = v33 - *(_QWORD *)(a2 + 32);
        if ( !*(_QWORD *)(a2 + 40) || (unsigned int)guard_dispatch_icall_no_overrides(v33, v31) )
        {
LABEL_23:
          if ( v24 )
          {
            v25 = a1 + 12;
            v26 = v24 - (unsigned int)(a1 + 12);
            if ( v26 <= 0x7FFFFFFF && v26 >= (__int64)0xFFFFFFFF80000000uLL )
              goto LABEL_26;
          }
        }
      }
    }
    v25 = a1 + 12;
    LODWORD(v24) = *(_DWORD *)(a2 + 48) + *(_DWORD *)(a3 + 72);
LABEL_26:
    v27 = v24 - v25;
    *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
    *(_BYTE *)(a7 + 11) = BYTE1(v27);
    *(_BYTE *)(a7 + 12) = BYTE2(v27);
    result = 3968LL;
    *(_BYTE *)(a7 + 10) = v27;
    *(_WORD *)a7 |= 0xF80u;
    *(_BYTE *)(a7 + 13) = HIBYTE(v27);
    return result;
  }
LABEL_4:
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)(a7 + 2) = -29876;
    *(_BYTE *)(a7 + 4) = 21;
    *(_WORD *)(a7 + 9) = -179;
    *(_BYTE *)(a7 + 11) = (*a4 & 0x1000) != 0 ? -46 : -30;
  }
  else
  {
    *(_WORD *)(a7 + 2) = -184;
    if ( (*a4 & 0x1000) != 0 )
    {
      *(_BYTE *)(a7 + 4) = 21;
      *(_DWORD *)(a7 + 9) = 4464399;
      *(_BYTE *)(a7 + 13) = 0;
    }
    else
    {
      *(_BYTE *)(a7 + 4) = 37;
    }
  }
  *(_WORD *)a7 = 3975;
  v13 = *a4;
  result = *a4 & 0xFFFFE000;
  if ( (_DWORD)result != -8192 )
  {
    v28 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v28 )
    {
      *(_WORD *)a7 = 4095;
      v29 = 8 * (v13 >> 13) - (unsigned int)(a1 + 7);
      *(_WORD *)(a7 + 5) = v29 + v28;
      result = (v29 + v28) >> 16;
      *(_BYTE *)(a7 + 8) = (unsigned int)(v29 + v28) >> 24;
      *(_BYTE *)(a7 + 7) = (unsigned int)(v29 + v28) >> 16;
    }
  }
  return result;
}
