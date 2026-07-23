/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x18014EA6C
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x18014E6A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1800DECF8 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  _WORD *v7; // rbx
  int i; // edi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r8
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  __int64 v17; // r14
  __int16 v18; // r8
  __int16 v19; // r9
  __int16 v20; // dx
  __int16 v21; // dx
  __int16 v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 28LL * a2;
  v5 = a1;
  v6 = 0;
  v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v4);
  for ( i = 0; i < 8; i += 2 )
  {
    v9 = (v7[4] >> (2 * v6)) & 3;
    if ( !v9 )
      goto LABEL_29;
    v10 = (__int16)v7[v6 + 6];
    if ( v9 == 2 )
    {
      if ( (v10 & 0x8000u) != 0LL
        || (v11 = *(_QWORD *)(v5 + 24), (int)v10 >= *(unsigned __int16 *)(v11 + 6))
        || (_DWORD)v10 == a2 )
      {
        v7[4] &= ~(3 << i);
        v7[v6 + 6] = 0;
        goto LABEL_29;
      }
      v12 = *(_QWORD *)(v11 + 16);
      v13 = 28 * v10;
      v14 = *(_WORD *)(v13 + v12);
      if ( (v14 & 4) != 0 )
      {
        *v7 |= 0x1000u;
        break;
      }
      if ( (v14 & 0x1820) == 0x820 )
      {
        ++v3;
        goto LABEL_29;
      }
      if ( *(_WORD *)(v13 + v12 + 4) )
      {
        v7[4] = v7[4] & ~(3 << i) | (1 << i);
        v15 = *(_WORD *)(v13 + v12 + 4);
      }
      else
      {
        v16 = v7[4] & ~(3 << i);
        if ( *(__int16 *)(v13 + v12 + 6) <= 0 )
        {
          v7[4] = v16;
          v15 = 0;
        }
        else
        {
          v7[4] = (3 << i) | v16;
          v15 = *(_WORD *)(v13 + v12 + 6);
        }
      }
      v7[v6 + 6] = v15;
    }
    else
    {
      v17 = *(_QWORD *)(v5 + 24);
      v24 = -1;
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v17, v9, v10, &v24) < 0
        || (v18 = v24, v24 < 0)
        || v24 >= (int)*(unsigned __int16 *)(v17 + 6)
        || v24 == a2 )
      {
        v7[4] &= ~(3 << i);
      }
      else
      {
        v19 = *(_WORD *)(28LL * v24 + *(_QWORD *)(v17 + 16));
        v20 = ~(3 << i);
        if ( (v19 & 4) != 0 )
        {
          v7[4] &= v20;
        }
        else
        {
          v21 = v7[4] & v20;
          if ( (v19 & 0x1820) == 0x820 )
          {
            v7[4] = v21 | (2 << i);
            ++v3;
            v7[v6 + 6] = v18;
          }
          else
          {
            v7[4] = v21;
          }
        }
      }
    }
    v5 = a1;
LABEL_29:
    ++v6;
  }
  if ( v3 >= 1 )
    return 0LL;
  *v7 |= 0x1000u;
  return 3221225473LL;
}
