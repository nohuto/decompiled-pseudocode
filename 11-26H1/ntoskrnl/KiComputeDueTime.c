/*
 * XREFs of KiComputeDueTime @ 0x1403B7DD0
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v5; // di
  __int64 v6; // rbx
  __int64 v8; // rbp
  unsigned __int8 v9; // di
  __int16 v10; // r8
  char v11; // cl
  __int16 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-28h]

  v17 = *a1;
  v5 = a3;
  BYTE1(v17) = a3;
  v6 = a2;
  if ( a2 < 0
    || (v5 = a3 | 1,
        BYTE1(v17) = a3 | 1,
        v6 = MEMORY[0xFFFFF78000000014] - a2,
        (((unsigned __int64)(MEMORY[0xFFFFF78000000014] - a2) >> 32) & 0x80000000) != 0LL) )
  {
    v8 = 0LL;
    v9 = v5 >> 2;
    if ( v9 )
    {
      if ( (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline(a1, a2, a3, a4) )
      {
        v10 = 8;
        v11 = (v9 >> 3) + 2;
        if ( v9 < 8u )
          v10 = 0;
        v12 = v9 & 7 | v10;
        if ( v9 < 8u )
          v11 = (v9 >> 3) + 3;
        v13 = 10000 * ((unsigned __int16)(v12 << v11) >> 3);
      }
      else
      {
        v13 = v9 << 18;
      }
      v8 = v13;
    }
    v14 = MEMORY[0xFFFFF78000000008] - v6;
    *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - v6;
    HIBYTE(v17) |= 0x40u;
    v15 = (unsigned __int8)((unsigned __int64)(v8 + v14) >> 18);
    BYTE2(v17) = (unsigned __int64)(v8 + v14) >> 18;
    *a1 = v17;
    result = 1LL;
    *a4 = v15;
  }
  else
  {
    *a1 = v17;
    result = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
  return result;
}
