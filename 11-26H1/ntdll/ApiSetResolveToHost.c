/*
 * XREFs of ApiSetResolveToHost @ 0x1800E5874
 * Callers:
 *     ApiSetQueryApiSetPresence @ 0x180079A10 (ApiSetQueryApiSetPresence.c)
 *     ApiSetResolveToHost2 @ 0x18013B31C (ApiSetResolveToHost2.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x180031690 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 *     ApiSetpSearchForApiSetHost @ 0x18007B250 (ApiSetpSearchForApiSetHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(_DWORD *a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v7; // rbx
  char v8; // di
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int v12; // r8d
  _WORD *v13; // rax
  unsigned __int16 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx

  v7 = (__int64)a1;
  if ( *(_BYTE *)a1 != 7 )
  {
    if ( *a1 != 6 || a1[4] <= 8u || (a1 += 7, *(_BYTE *)a1 != 7) || (*(_BYTE *)(v7 + 30) & 4) != 0 )
    {
      v8 = 0;
      *(_OWORD *)a5 = 0LL;
      if ( *a2 < 8u )
        goto LABEL_6;
      v9 = (_QWORD *)*((_QWORD *)a2 + 1);
      v10 = *v9 & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v10 != 0x2D004900500041LL && v10 != 0x2D005400580045LL )
        goto LABEL_6;
      v12 = *a2;
      v13 = (_WORD *)((char *)v9 + *a2);
      do
      {
        if ( v12 <= 1 )
          break;
        --v13;
        v12 -= 2;
      }
      while ( *v13 != 45 );
      v14 = (unsigned __int16)v12 >> 1;
      if ( !v14 )
        goto LABEL_6;
      v15 = ApiSetpSearchForApiSet((_DWORD *)v7, *((unsigned __int16 **)a2 + 1), v14);
      if ( !v15 )
        goto LABEL_6;
      if ( a3 && *(_DWORD *)(v15 + 20) > 1u )
      {
        v16 = ApiSetpSearchForApiSetHost(v15, *(unsigned __int16 **)(a3 + 8), *(_WORD *)a3 >> 1, v7);
      }
      else
      {
        if ( !*(_DWORD *)(v15 + 20) )
          goto LABEL_6;
        v16 = v7 + *(unsigned int *)(v15 + 16);
      }
      v8 = 1;
      *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v16 + 12);
      *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + 16);
      *(_WORD *)a5 = *(_WORD *)(v16 + 16);
LABEL_6:
      *a4 = v8;
      return 0LL;
    }
  }
  return ApiSetpResolveHost((__int64)a1, *((_QWORD *)a2 + 1), *a2 >> 1, 1, a3, a4, a5);
}
