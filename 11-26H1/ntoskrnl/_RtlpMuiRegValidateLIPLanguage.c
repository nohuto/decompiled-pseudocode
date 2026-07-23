/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x1408B0E44
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1408AE95C (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  _WORD *v7; // rbx
  int i; // edi
  unsigned __int16 v9; // si
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r8
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // r14
  __int16 v19; // r8
  __int16 v20; // r9
  __int16 v21; // dx
  __int16 v24; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 28LL * a2;
  v5 = a1;
  v6 = 0;
  v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v4);
  for ( i = 0; i < 8; i += 2 )
  {
    v9 = v7[4];
    v10 = (v9 >> (2 * v6)) & 3;
    if ( !v10 )
      goto LABEL_28;
    v11 = (__int16)v7[v6 + 6];
    if ( v10 == 2 )
    {
      if ( (v11 & 0x8000u) != 0LL
        || (v12 = *(_QWORD *)(v5 + 24), (int)v11 >= *(unsigned __int16 *)(v12 + 6))
        || (_DWORD)v11 == a2 )
      {
        v7[4] = v9 & ~(3 << i);
        v7[v6 + 6] = 0;
        goto LABEL_28;
      }
      v13 = *(_QWORD *)(v12 + 16);
      v14 = 28 * v11;
      v15 = *(_WORD *)(v14 + v13);
      if ( (v15 & 4) != 0 )
      {
        *v7 |= 0x1000u;
        break;
      }
      if ( (v15 & 0x1820) == 0x820 )
      {
        ++v3;
        goto LABEL_28;
      }
      if ( *(_WORD *)(v14 + v13 + 4) )
      {
        v7[4] = v9 & ~(3 << i) | (1 << i);
        v16 = *(_WORD *)(v14 + v13 + 4);
      }
      else
      {
        v17 = v9 & ~(3 << i);
        if ( *(__int16 *)(v14 + v13 + 6) <= 0 )
        {
          v7[4] = v17;
          v16 = 0;
        }
        else
        {
          v7[4] = (3 << i) | v17;
          v16 = *(_WORD *)(v14 + v13 + 6);
        }
      }
      v7[v6 + 6] = v16;
    }
    else
    {
      v18 = *(_QWORD *)(v5 + 24);
      v24 = -1;
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v18, v10, v11, &v24) < 0
        || (v19 = v24, v24 < 0)
        || v24 >= (int)*(unsigned __int16 *)(v18 + 6)
        || v24 == a2 )
      {
        v7[4] = v9 & ~(3 << i);
      }
      else
      {
        v20 = *(_WORD *)(28LL * v24 + *(_QWORD *)(v18 + 16));
        v21 = v9 & ~(3 << i);
        if ( (v20 & 4) != 0 || (v20 & 0x1820) != 0x820 )
        {
          v7[4] = v21;
        }
        else
        {
          v7[4] = v21 | (2 << i);
          ++v3;
          v7[v6 + 6] = v19;
        }
      }
    }
    v5 = a1;
LABEL_28:
    ++v6;
  }
  if ( v3 >= 1 )
    return 0LL;
  *v7 |= 0x1000u;
  return 3221225473LL;
}
