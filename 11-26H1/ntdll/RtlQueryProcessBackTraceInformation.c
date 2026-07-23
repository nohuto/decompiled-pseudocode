/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x180076560
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(_QWORD *a1)
{
  PRTL_SRWLOCK v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  char *v5; // r12
  int v6; // r15d
  int Ptr_high; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  char *v10; // r14
  __int64 v11; // rcx
  int v12; // esi
  _QWORD *Value; // r13
  _WORD *v15; // rdx
  PVOID v17; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-58h]
  char *v19; // [rsp+48h] [rbp-50h]
  PRTL_SRWLOCK v20; // [rsp+50h] [rbp-48h]
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+10h] BYREF
  ULONG_PTR v22; // [rsp+B0h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp+20h] BYREF

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
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v17, 0LL, &v22, 0x1000u, 4u) >= 0 )
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
  *((_BYTE *)&v2[16].0 + 1) = 1;
  *(_QWORD *)v5 = v2[19].Value - v2[17].Value;
  *((_QWORD *)v5 + 1) = v2[23].Value - v2[17].Value;
  *((_DWORD *)v5 + 4) = v2[22].0;
  Ptr_high = HIDWORD(v2[22].Ptr);
  *((_DWORD *)v5 + 5) = Ptr_high;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v8 = a1[9] + ((272 * Ptr_high + 7) & 0xFFFFFFF8);
  v9 = a1[10];
  if ( v8 > v9 )
  {
    if ( v8 > a1[11] )
    {
      v10 = 0LL;
      goto LABEL_10;
    }
    BaseAddress = (char *)a1 + v9;
    RegionSize = v8 - v9;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      v10 = 0LL;
      goto LABEL_10;
    }
    a1[10] += RegionSize;
  }
  v10 = (char *)a1 + a1[9];
  a1[9] = v8;
LABEL_10:
  v19 = v10;
  if ( v10 )
  {
    v12 = HIDWORD(v2[22].Ptr);
    Value = (_QWORD *)v2[23].Value;
    v18 = Value;
    while ( v12-- )
    {
      v18 = --Value;
      v15 = (_WORD *)*Value;
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
  *((_BYTE *)&v2[16].0 + 1) = 0;
  if ( v6 >= 0 )
    a1[13] = v5;
  return (unsigned int)v6;
}
