/*
 * XREFs of ApiSetResolveToHost @ 0x1400084BC
 * Callers:
 *     SmpProcessModuleImports @ 0x140008050 (SmpProcessModuleImports.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x140007AA0 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x140009580 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpResolveHost @ 0x14001955C (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v7; // rbx
  char v9; // di
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned int v12; // r8d
  _WORD *v13; // rax
  unsigned __int16 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx

  v7 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4, a3, (__int64)a4, a5);
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 && (*(_BYTE *)(v7 + 30) & 4) == 0 )
      return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4, a3, (__int64)a4, a5);
  }
  v9 = 0;
  *(_OWORD *)a5 = 0LL;
  if ( *a2 >= 8u )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v12 = *a2;
      v13 = (_WORD *)((char *)v10 + *a2);
      do
      {
        if ( v12 <= 1 )
          break;
        v12 -= 2;
        --v13;
      }
      while ( *v13 != 45 );
      v14 = (unsigned __int16)v12 >> 1;
      if ( v14 )
      {
        v15 = ApiSetpSearchForApiSet((_DWORD *)v7, *((const WCHAR **)a2 + 1), v14);
        if ( v15 )
        {
          if ( a3 && *(_DWORD *)(v15 + 20) > 1u )
          {
            v16 = ApiSetpSearchForApiSetHost(v15, *(_QWORD *)(a3 + 8), *(_WORD *)a3 >> 1, v7);
LABEL_20:
            v9 = 1;
            *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v16 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + 16);
            *(_WORD *)a5 = *(_WORD *)(v16 + 16);
            goto LABEL_21;
          }
          if ( *(_DWORD *)(v15 + 20) )
          {
            v16 = v7 + *(unsigned int *)(v15 + 16);
            goto LABEL_20;
          }
        }
      }
    }
  }
LABEL_21:
  *a4 = v9;
  return 0LL;
}
