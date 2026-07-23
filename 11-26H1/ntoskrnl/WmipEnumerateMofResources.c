/*
 * XREFs of WmipEnumerateMofResources @ 0x140A0A008
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 */

__int64 __fastcall WmipEnumerateMofResources(int *a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // rdi
  int v6; // r10d
  __int64 v7; // r11
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r9
  int v12; // ebx
  unsigned __int64 v14; // rbp
  __int64 v15; // r14
  unsigned int v16; // r12d
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax

  v4 = a2;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD **)WmipMRHeadPtr;
  if ( *(_QWORD *)WmipMRHeadPtr == WmipMRHeadPtr )
    goto LABEL_8;
  do
  {
    ++v6;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(v8[5] + 2 * v9) );
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8[6] + 2 * v10) );
    v8 = (_QWORD *)*v8;
    v11 = (_QWORD *)WmipMRHeadPtr;
    v7 += 2 * (v9 + v10) + 4;
  }
  while ( v8 != (_QWORD *)WmipMRHeadPtr );
  if ( v6 )
  {
    v14 = v4;
    v15 = 12LL * (unsigned int)(v6 - 1) + 16;
    v12 = v7 + v15;
    if ( v4 < v7 + v15 )
    {
      *a1 = v12;
      v12 = 4;
    }
    else
    {
      *a1 = v6;
      v16 = 0;
      v17 = (_QWORD *)*v11;
      if ( (_QWORD *)*v11 != v11 )
      {
        do
        {
          v18 = v16++;
          v19 = 3 * v18;
          LODWORD(v18) = v17[2] & 1;
          a1[v19 + 1] = v15;
          a1[v19 + 3] = v18;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v15), v14 - v15, (NTSTRSAFE_PCWSTR)v17[5]);
          v20 = -1LL;
          do
            ++v20;
          while ( *(_WORD *)(v17[5] + 2 * v20) );
          v21 = v15 + 2 * v20 + 2;
          a1[v19 + 2] = v21;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v21), v14 - v21, (NTSTRSAFE_PCWSTR)v17[6]);
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)(v17[6] + 2 * v22) );
          v17 = (_QWORD *)*v17;
          v15 = v21 + 2 * v22 + 2;
        }
        while ( v17 != (_QWORD *)WmipMRHeadPtr );
      }
    }
  }
  else
  {
LABEL_8:
    *a1 = 0;
    v12 = 16;
  }
  *a3 = v12;
  KeReleaseMutex(&WmipSMMutex, 0);
  return 0LL;
}
