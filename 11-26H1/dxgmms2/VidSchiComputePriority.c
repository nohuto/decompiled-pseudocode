/*
 * XREFs of VidSchiComputePriority @ 0x14011A3B4
 * Callers:
 *     VidSchSetPriorityContext @ 0x14011A270 (VidSchSetPriorityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputePriority(__int64 a1, int a2, int a3, char a4, int a5, _DWORD *a6)
{
  __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // rbp
  unsigned int v10; // eax
  int v11; // r14d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // rax

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v7 + 2824) & 4) != 0 )
  {
    *a6 = KeQueryPriorityThread(KeGetCurrentThread());
    return 0LL;
  }
  v8 = 7;
  if ( a2 <= 7 )
  {
    v8 = a2;
    if ( a2 < -7 )
      v8 = -7;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 48LL);
  v10 = dword_1400651DC[15 * *(int *)(v9 + 24) + v8];
  *a6 = v10;
  if ( v10 < 0x1E
    || a3
    || *(_BYTE *)(v9 + 2633)
    || (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 408LL) & 2) != 0
    || SeSinglePrivilegeCheck((LUID)14LL, 1) )
  {
    v11 = a4 & 1;
    if ( (v11 || !a5) && (*(_DWORD *)(v7 + 2824) & 0x200) != 0 && *a6 < 0x10u )
      *a6 = 16;
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8LL * *(unsigned int *)(v7 + 4));
    if ( *(_BYTE *)(v12 + 5) )
    {
      v13 = *(_DWORD *)(v7 + 216);
    }
    else
    {
      if ( !*(_BYTE *)(v12 + 4) )
      {
        if ( !*(_BYTE *)(v7 + 7079) )
        {
LABEL_10:
          if ( !*(_BYTE *)(v7 + 7085) )
            return 0LL;
LABEL_33:
          if ( v8 == -7 )
            *a6 = 0;
          return 0LL;
        }
        if ( !*(_BYTE *)(v9 + 2632) )
        {
          v15 = *(_QWORD *)(v9 + 8);
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 408) & 2) == 0 && !v11 && a5 )
              *a6 = 8;
          }
        }
LABEL_9:
        if ( *(_BYTE *)(v7 + 7079) )
          goto LABEL_33;
        goto LABEL_10;
      }
      v13 = *(_DWORD *)(v7 + 220);
    }
    *a6 = v13;
    goto LABEL_9;
  }
  return 3221225506LL;
}
