/*
 * XREFs of VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8
 * Callers:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpSplitMemoryRange @ 0x1404C2504 (VmpSplitMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14050AC9C (VmpRemoveMemoryRange.c)
 *     VmpCheckPinAndReference @ 0x1406C47E8 (VmpCheckPinAndReference.c)
 *     VmpCheckUnpinAndDereference @ 0x1406C48D0 (VmpCheckUnpinAndDereference.c)
 *     VmpInvalidateSlatBatched @ 0x1406C5010 (VmpInvalidateSlatBatched.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C57F0 (VmpUpdateCommitStateMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x1406C644C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpFindNextPinnedPageStateHelper(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  _QWORD *v6; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // r8d
  _QWORD *v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned __int8 v22; // r8
  bool v23; // zf
  _QWORD **v24; // rcx
  _QWORD *v25; // rax
  _QWORD *i; // rcx

  v6 = *(_QWORD **)(a1 + 72);
  if ( v6 && a2 >= v6[3] && a2 <= v6[4] )
    goto LABEL_36;
  v9 = a1 + 56;
  v10 = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && v10 )
    v10 ^= v9;
  v11 = *(_BYTE *)(v9 + 8) & 1;
  v12 = 0LL;
  while ( 1 )
  {
    if ( !v10 )
    {
LABEL_32:
      v6 = v12;
      if ( !v12 )
      {
        if ( a4 )
          return -1LL;
        return a2;
      }
      goto LABEL_36;
    }
    if ( a2 >= *(_QWORD *)(v10 + 24) )
      break;
    v13 = *(_QWORD *)v10;
    v12 = (_QWORD *)v10;
LABEL_12:
    if ( v11 && v13 )
      v10 ^= v13;
    else
      v10 = v13;
  }
  if ( a2 > *(_QWORD *)(v10 + 32) )
  {
    v13 = *(_QWORD *)(v10 + 8);
    goto LABEL_12;
  }
  v14 = *(_QWORD *)v10;
  v12 = (_QWORD *)v10;
  if ( v11 && v14 )
    v14 ^= v10;
  v6 = 0LL;
  if ( !v14 )
    goto LABEL_32;
  while ( 2 )
  {
    if ( a2 < *(_QWORD *)(v14 + 24) )
    {
LABEL_24:
      v15 = *(_QWORD *)v14;
    }
    else
    {
      if ( a2 <= *(_QWORD *)(v14 + 32) )
      {
        v6 = (_QWORD *)v14;
        goto LABEL_24;
      }
      v15 = *(_QWORD *)(v14 + 8);
    }
    if ( v11 && v15 )
      v14 ^= v15;
    else
      v14 = v15;
    if ( v14 )
      continue;
    break;
  }
  if ( !v6 )
    goto LABEL_32;
LABEL_36:
  v16 = a2;
  while ( 2 )
  {
    if ( !v6 )
    {
      if ( !a4 )
        return v16;
      return -1LL;
    }
    v17 = v6[3];
    if ( v17 > v16 )
    {
      if ( !a4 )
        return v16;
      if ( v17 > a3 )
        return -1LL;
    }
    if ( a2 <= v17 )
      v18 = 0LL;
    else
      v18 = (unsigned int)(a2 - *((_DWORD *)v6 + 6));
    v19 = v6[4];
    v20 = a3;
    if ( a3 >= v19 )
      v20 = v6[4];
    v21 = v20 - *((_DWORD *)v6 + 6);
    if ( (unsigned int)v18 > v21 )
    {
LABEL_60:
      if ( a3 <= v19 )
        return -1LL;
      v24 = (_QWORD **)v6[1];
      v16 = v19 + 1;
      v25 = v6;
      if ( v24 )
      {
        v6 = (_QWORD *)v6[1];
        for ( i = *v24; i; i = (_QWORD *)*i )
          v6 = i;
      }
      else
      {
        while ( 1 )
        {
          v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v6 || (_QWORD *)*v6 == v25 )
            break;
          v25 = v6;
        }
      }
      continue;
    }
    break;
  }
  while ( 2 )
  {
    v22 = *((_BYTE *)v6 + v18 + 40);
    if ( a4 )
    {
      if ( v22 )
      {
        if ( a4 == 1 )
          break;
        if ( a4 == 2 )
        {
          v23 = v22 == 1;
          goto LABEL_57;
        }
        if ( a4 != 3 )
        {
          v23 = v22 == 0xFF;
          goto LABEL_57;
        }
        if ( v22 > 1u )
          break;
      }
    }
    else
    {
      v23 = v22 == 0;
LABEL_57:
      if ( v23 )
        break;
    }
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 <= v21 )
      continue;
    break;
  }
  if ( (unsigned int)v18 > v21 )
    goto LABEL_60;
  a2 = v17 + (unsigned int)v18;
  *(_QWORD *)(a1 + 72) = v6;
  return a2;
}
