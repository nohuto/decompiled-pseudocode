/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800917B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  char *v5; // r12
  int v6; // r15d
  int v7; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  char *v10; // r14
  __int64 v11; // rcx
  int v12; // esi
  _QWORD *v13; // r13
  _WORD *v15; // rdx
  char *v17; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-58h]
  char *v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp+18h] BYREF
  char *v23; // [rsp+B8h] [rbp+20h] BYREF

  v2 = RtlpStackTraceDatabase;
  v20 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = a1[9] + 24LL;
  v4 = a1[10];
  if ( v3 <= v4 )
    goto LABEL_3;
  if ( v3 > a1[11] )
  {
    v6 = 0;
    v5 = 0LL;
  }
  else
  {
    v17 = (char *)a1 + v4;
    v22 = v3 - v4;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v22, 4096, 4) >= 0 )
    {
      a1[10] += v22;
LABEL_3:
      v5 = (char *)a1 + a1[9];
      a1[9] = v3;
      v6 = 0;
      goto LABEL_4;
    }
    v6 = 0;
    v5 = 0LL;
  }
LABEL_4:
  if ( !v5 )
    return 3221225495LL;
  *(_BYTE *)(v2 + 129) = 1;
  *(_QWORD *)v5 = *(_QWORD *)(v2 + 152) - *(_QWORD *)(v2 + 136);
  *((_QWORD *)v5 + 1) = *(_QWORD *)(v2 + 184) - *(_QWORD *)(v2 + 136);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(v2 + 176);
  v7 = *(_DWORD *)(v2 + 180);
  *((_DWORD *)v5 + 5) = v7;
  v23 = 0LL;
  v21 = 0LL;
  v8 = a1[9] + ((272 * v7 + 7) & 0xFFFFFFF8);
  v9 = a1[10];
  if ( v8 > v9 )
  {
    if ( v8 > a1[11] )
    {
      v10 = 0LL;
      goto LABEL_10;
    }
    v23 = (char *)a1 + v9;
    v21 = v8 - v9;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v23, 0LL, &v21, 4096, 4) < 0 )
    {
      v10 = 0LL;
      goto LABEL_10;
    }
    a1[10] += v21;
  }
  v10 = (char *)a1 + a1[9];
  a1[9] = v8;
LABEL_10:
  v19 = v10;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v2 + 180);
    v13 = *(_QWORD **)(v2 + 184);
    v18 = v13;
    while ( v12-- )
    {
      v18 = --v13;
      v15 = (_WORD *)*v13;
      *(_QWORD *)v10 = 0LL;
      *((_DWORD *)v10 + 2) = v15[4] & 0x7FF;
      *((_WORD *)v10 + 6) = v15[6];
      *((_WORD *)v10 + 7) = v15[7];
      memmove(v10 + 16, v15 + 8, 8LL * (unsigned __int16)v15[7]);
      v10 += 272;
      v19 = v10;
    }
  }
  else
  {
    v6 = -1073741801;
    v11 = a1[9];
    if ( v5 == (char *)a1 + v11 - 24 )
      a1[9] = v11 - 24;
  }
  *(_BYTE *)(v2 + 129) = 0;
  if ( v6 >= 0 )
    a1[13] = v5;
  return (unsigned int)v6;
}
