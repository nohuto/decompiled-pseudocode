/*
 * XREFs of IopReplaceSymlinkPath @ 0x140935534
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x1409353A0 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     FsRtlRemoveDotsFromPath @ 0x140935790 (FsRtlRemoveDotsFromPath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int NewLength,
        __int16 a6,
        __int16 a7)
{
  unsigned int v7; // r14d
  unsigned __int16 v9; // bx
  size_t v11; // r13
  WCHAR *v12; // r15
  wchar_t *v13; // rdi
  unsigned int v14; // esi
  __int16 v15; // r14
  __int64 v16; // rdx
  NTSTATUS result; // eax
  wchar_t *v18; // rcx
  wchar_t *v19; // rcx
  const void *v20; // rdx
  WCHAR *v21; // rdi
  __int16 v22; // ax
  _WORD *v23; // rdx
  unsigned __int16 v24; // dx
  __int16 v25; // r15
  __int16 v26; // cx
  unsigned __int16 v27; // r9
  __int64 v28; // r11
  wchar_t v29; // bx
  __int64 v30; // rcx
  __int64 v31; // rax
  _WORD *Src; // [rsp+60h] [rbp+8h]
  unsigned __int16 v33; // [rsp+68h] [rbp+10h]

  v7 = NewLength;
  v9 = a4[5];
  v11 = a4[3];
  v12 = (WCHAR *)&a1[NewLength];
  v33 = v9;
  v13 = (wchar_t *)&a1[a2];
  LOWORD(NewLength) = 0;
  LOWORD(v14) = 0;
  if ( a2 < v7 )
    return -1073741192;
  Src = (unsigned __int16 *)((char *)a4 + a4[4] + 20);
  if ( *Src != 92 )
  {
    v19 = (wchar_t *)&a1[a2];
    v20 = *(const void **)(a3 + 96);
    LOWORD(NewLength) = *(_WORD *)(a3 + 88) - v11;
    v14 = (unsigned __int16)NewLength;
    memmove(v19, v20, (unsigned __int16)NewLength);
    v21 = &v13[(unsigned __int64)v14 >> 1];
    if ( v21 == v12 )
      goto LABEL_21;
    v22 = v14;
    do
    {
      if ( *v21 == 92 )
        break;
      v22 -= 2;
      *v21-- = 0;
      LOWORD(NewLength) = v22;
      LOWORD(v14) = v22;
    }
    while ( v21 != v12 );
    if ( v21 >= v12 )
    {
LABEL_21:
      v13 = v21 + 1;
      goto LABEL_4;
    }
    return -1073741192;
  }
  if ( !wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
  {
    v24 = 0;
    v25 = **(_WORD **)(a3 + 96);
    v26 = (v25 != 59) + 3;
    v27 = *(_WORD *)(a3 + 88) >> 1;
    if ( v27 )
    {
      do
      {
        v28 = *(_QWORD *)(a3 + 96);
        v29 = *(_WORD *)(v28 + 2LL * v24);
        if ( v29 == 92 )
        {
          --v26;
          if ( v25 == 59 || v26 != 2 )
          {
            if ( !v26 )
              goto LABEL_38;
          }
          else if ( (unsigned __int16)(v24 + 1) < v27 && *(_WORD *)(v28 + 2LL * v24 + 2) != 59 )
          {
            goto LABEL_38;
          }
        }
        *v13 = v29;
        ++v24;
        ++v13;
        v27 = *(_WORD *)(a3 + 88) >> 1;
      }
      while ( v24 < v27 );
    }
    if ( !v26 )
    {
      do
      {
LABEL_38:
        if ( v24 >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
          break;
        v30 = v24++;
        *v13++ = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2 * v30);
      }
      while ( *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24) != 92 );
      v9 = v33;
      v31 = v7 + v24;
      v15 = 2 * v24 + a6;
      v12 = (WCHAR *)&a1[v31];
      goto LABEL_5;
    }
    return -1073741192;
  }
LABEL_4:
  v15 = a6;
LABEL_5:
  if ( v9 )
  {
    memmove(v13, Src, v9);
    LOWORD(v14) = v33 + v14;
    LOWORD(NewLength) = v14;
    v13 += (unsigned __int64)v9 >> 1;
  }
  if ( (_WORD)v11 )
  {
    v23 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v11);
    if ( *(v13 - 1) == 92 && *v23 == 92 )
    {
      *v13-- = 0;
      LOWORD(v14) = v14 - 2;
    }
    memmove(v13, v23, v11);
    LOWORD(NewLength) = v11 + v14;
    v13 += v11 >> 1;
  }
  *v13 = 0;
  v16 = -1LL;
  do
    ++v16;
  while ( v12[v16] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v16, (USHORT *)&NewLength);
  if ( result >= 0 )
  {
    v18 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v15 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v18 )
    {
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
