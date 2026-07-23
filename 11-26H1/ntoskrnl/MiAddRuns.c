/*
 * XREFs of MiAddRuns @ 0x14086DE30
 * Callers:
 *     <none>
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiAddRun @ 0x14086DD00 (MiAddRun.c)
 */

__int64 __fastcall MiAddRuns(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rdi
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+60h] [rbp+18h]

  v13 = a3;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2 & 0x3FFFFF;
  v5 = *(unsigned __int16 *)(a1 + 32);
  v6 = 0LL;
  v8 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
  while ( v6 < a3 )
  {
    v9 = *v8;
    if ( (_WORD)v5 != 1025 && ((v9 >> 4) & 0x7FF) != v5
      || (v9 & 7) == 0
      || *(int *)(v3 + 32) >= 0
      && (unsigned int)MiPageToNode((unsigned __int64)(v4 & 0x3FFFFF) << 18) != *(_DWORD *)(v3 + 32) )
    {
      goto LABEL_22;
    }
    v10 = 0;
    switch ( v9 & 7 )
    {
      case 1uLL:
        v10 = (*(_BYTE *)(v3 + 4) & 2) != 0;
        break;
      case 2uLL:
        v11 = *(_DWORD *)(v3 + 4) >> 2;
        goto LABEL_16;
      case 3uLL:
        goto LABEL_13;
      case 4uLL:
        v11 = *(_DWORD *)(v3 + 4) >> 4;
        goto LABEL_16;
      case 5uLL:
LABEL_13:
        v11 = *(_DWORD *)(v3 + 4) >> 3;
LABEL_16:
        v10 = v11 & 1;
        break;
    }
    if ( (v9 & 8) != 0 && (*(_DWORD *)(v3 + 4) & 0x20) != 0 || v10 )
    {
      result = MiAddRun((__int64 *)a1, v4);
      if ( (int)result < 0 )
        return result;
    }
LABEL_22:
    a3 = v13;
    ++v6;
    ++v8;
    LODWORD(v4) = (v4 + 1) ^ ((v4 + 1) ^ v4) & 0xFFC00000;
  }
  return 0LL;
}
