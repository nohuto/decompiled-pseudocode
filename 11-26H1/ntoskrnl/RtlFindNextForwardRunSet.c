/*
 * XREFs of RtlFindNextForwardRunSet @ 0x140462B30
 * Callers:
 *     HvpResetPageProtection @ 0x1408BF0B4 (HvpResetPageProtection.c)
 *     RtlpFcDrainDelayedUsageReportBuffer @ 0x140AC1CDC (RtlpFcDrainDelayedUsageReportBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunSet(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  __int64 v7; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 v9; // rbx
  _DWORD *v10; // rax
  unsigned int i; // r8d
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int v17; // edx

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  if ( *a1 > a2 )
  {
    v7 = *((_QWORD *)a1 + 1);
    v8 = (unsigned int *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
    v9 = v7 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v10 = v8 + 1;
    for ( i = *v8 & (-1 << (v5 & 0x1F)); !i; i = *v8 )
    {
      if ( (unsigned __int64)v10 > v9 )
        goto LABEL_17;
      ++v8;
      ++v10;
    }
    _BitScanForward64((unsigned __int64 *)&v12, i);
    v5 = v12 + 32 * (((__int64)v8 - v7) >> 2);
    if ( v5 > v3 )
    {
LABEL_17:
      v5 = v3;
      goto LABEL_15;
    }
    v13 = ((1 << v12) - 1) | i;
    while ( 1 )
    {
      v14 = ~v13;
      if ( v14 )
      {
        _BitScanForward64((unsigned __int64 *)&v15, v14);
        goto LABEL_12;
      }
      if ( (unsigned __int64)(v8 + 1) > v9 )
        break;
      v13 = v8[1];
      ++v8;
    }
    LODWORD(v15) = 32;
LABEL_12:
    v16 = v3;
    v17 = v15 + 32 * (((__int64)v8 - v7) >> 2);
    if ( v17 <= v3 )
      v16 = v17;
    v4 = v16 - v5;
  }
LABEL_15:
  *a3 = v5;
  return v4;
}
