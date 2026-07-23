/*
 * XREFs of MiInitializeNumaGraph @ 0x140CF7504
 * Callers:
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiInitializeNumaGraph(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rdx
  unsigned int i; // ebx
  unsigned int v4; // esi
  unsigned int v5; // r9d
  unsigned int v6; // edi
  unsigned int *v7; // r15
  _QWORD *v8; // r14
  unsigned int j; // eax
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  size_t v13; // rdx
  int *p_Base; // r11
  int v15; // r10d
  int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned int k; // ecx
  __int64 v20; // r8
  unsigned int v21; // eax
  char v22; // dl
  int Base; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v24[127]; // [rsp+28h] [rbp-420h] BYREF

  result = *(_QWORD *)(a1 + 240);
  v2 = *(unsigned int **)(result + 296);
  if ( v2 )
  {
    v4 = *v2;
    v5 = (unsigned __int16)KeNumberNodes;
    v6 = (unsigned __int16)KeNumberNodes;
    if ( *v2 <= (unsigned __int16)KeNumberNodes )
      v6 = *v2;
    result = v4 + 1;
    v7 = &v2[result];
    if ( v6 <= 0x40 )
    {
      i = 0;
      if ( !v6 )
        goto LABEL_22;
    }
    else
    {
      v6 = 64;
    }
    v8 = v24;
    for ( i = 0; i < v6; ++i )
    {
      for ( j = 0; j < v4; v24[v11] = v10 )
      {
        if ( j >= 0x40 )
          break;
        v10 = *((_WORD *)v7 + i * v4 + j);
        if ( !v10 )
          v10 = 1;
        v11 = 2LL * j;
        LODWORD(v24[v11]) = j++;
      }
      if ( j < v5 )
      {
        v12 = &v24[2 * j];
        do
        {
          if ( j >= 0x40 )
            break;
          *((_DWORD *)v12 - 2) = j++;
          *v12 = -1LL;
          v12 += 2;
        }
        while ( j < v5 );
      }
      v13 = (unsigned __int16)KeNumberNodes;
      *v8 = 0LL;
      qsort(&Base, v13, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiNodeCostSort);
      v5 = (unsigned __int16)KeNumberNodes;
      result = 0LL;
      if ( KeNumberNodes )
      {
        p_Base = &Base;
        v15 = i * (unsigned __int16)KeNumberNodes;
        do
        {
          v16 = *p_Base;
          v17 = (unsigned int)(v15 + result);
          p_Base += 4;
          result = (unsigned int)(result + 1);
          *(_DWORD *)(qword_140E2D810 + 4 * v17) = v16;
        }
        while ( (unsigned int)result < v5 );
      }
      v8 += 2;
    }
  }
  else
  {
    i = 0;
  }
LABEL_22:
  v18 = (unsigned __int16)KeNumberNodes;
  while ( i < v18 )
  {
    for ( k = i; k < v18 + i; *(_DWORD *)(qword_140E2D810 + 4 * v20) = v22 & 0x3F )
    {
      v20 = i * (v18 - 1) + k;
      v21 = k++;
      v22 = v21 % v18;
      result = qword_140E2D810;
    }
    ++i;
  }
  return result;
}
