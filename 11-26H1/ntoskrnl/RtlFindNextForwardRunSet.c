/*
 * XREFs of RtlFindNextForwardRunSet @ 0x140468010
 * Callers:
 *     HvpResetPageProtection @ 0x1408B8AE4 (HvpResetPageProtection.c)
 *     RtlpFcDrainDelayedUsageReportBuffer @ 0x140ABFC3C (RtlpFcDrainDelayedUsageReportBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunSet(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  __int64 v7; // rsi
  unsigned int v8; // r10d
  unsigned int *v9; // rdx
  unsigned __int64 v10; // rdi
  _DWORD *v11; // rax
  unsigned int i; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  unsigned int v18; // edx

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  if ( *a1 > a2 )
  {
    v7 = *((_QWORD *)a1 + 1);
    v8 = 0;
    v9 = (unsigned int *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
    v10 = v7 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v11 = v9 + 1;
    for ( i = *v9 & (-1 << (v5 & 0x1F)); !i; i = *v9 )
    {
      if ( (unsigned __int64)v11 > v10 )
        goto LABEL_17;
      ++v9;
      ++v11;
    }
    _BitScanForward64((unsigned __int64 *)&v13, i);
    v5 = v13 + 32 * (((__int64)v9 - v7) >> 2);
    if ( v5 > v3 )
    {
LABEL_17:
      v5 = v3;
      goto LABEL_15;
    }
    v14 = ((1 << v13) - 1) | i;
    LODWORD(v15) = 32;
    while ( 1 )
    {
      v16 = ~v14;
      if ( v16 )
        break;
      v8 += 32;
      if ( (unsigned __int64)(v9 + 1) > v10 )
        goto LABEL_12;
      v14 = v9[1];
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v15, v16);
LABEL_12:
    v17 = v3;
    v18 = v15 + 32 * (((__int64)v9 - v7) >> 2);
    if ( v18 <= v3 )
      v17 = v18;
    v8 = v17 - v5;
LABEL_15:
    v4 = v8;
  }
  *a3 = v5;
  return v4;
}
