/*
 * XREFs of MiZeroPageCalibrate @ 0x140715C7C
 * Callers:
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiIsCalibrationWorthwhile @ 0x1404C4720 (MiIsCalibrationWorthwhile.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140714170 (MiDeleteAcceleratorDescriptor.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140714E1C (MiAllocateZeroCalibrationBuffer.c)
 *     MiFreeZeroCalibrationBuffer @ 0x14071542C (MiFreeZeroCalibrationBuffer.c)
 *     MiMergeCalibrationResults @ 0x14071578C (MiMergeCalibrationResults.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroPageCalibrate(int *a1, int a2)
{
  unsigned int *v2; // rbp
  bool v5; // zf
  int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // r13
  unsigned int v16; // edi
  int IsCalibrationWorthwhile; // eax
  int v18; // esi
  int v19; // r12d
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 PoolMm; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rdi
  void *v27; // rcx
  unsigned int *v28; // rdx
  __int64 i; // rax
  unsigned int *v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // rdx
  __int64 v33; // rax
  unsigned int *v34; // rcx
  __int64 v35; // r8
  void *v36; // rcx
  PSLIST_ENTRY v37; // rax
  int v39; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned int *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = a2;
  memset_0((void *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x180uLL);
  v5 = a1[32] == 0;
  v6 = 1;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
  if ( v5 )
    return 1LL;
  v7 = *((_QWORD *)a1 + 17);
  v8 = (unsigned int)a1[33];
  v9 = *a1;
  *v2 = v8;
  v10 = *(_QWORD *)(v7 + 48);
  v11 = *(unsigned int *)(v7 + 56);
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v10;
  v12 = qword_140E2D838;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14C) = v11;
  v13 = *(_QWORD *)(384 * v11 + v12 + 376);
  v14 = *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x59);
  if ( *((_BYTE *)a1 + 39) )
    v14 = 1;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v13;
  *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x59) = v14;
  if ( !a2 )
  {
    v15 = *v2;
    v16 = 0;
    while ( 1 )
    {
      IsCalibrationWorthwhile = MiIsCalibrationWorthwhile(v13 + 56 * (3 * v9 + v16) + 72, v15, v11, 0);
      v13 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( IsCalibrationWorthwhile )
        break;
      if ( (int)++v16 >= 3 )
      {
        if ( v16 == 3 )
          return 1LL;
        break;
      }
    }
    v8 = v15;
  }
  if ( (((_BYTE)v2 + 0x80) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = a1;
  v18 = *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  v19 = 0;
  *(_OWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = 0LL;
  v20 = 0LL;
  do
  {
    v21 = v13 + 56 * (v20 + 2LL * (int)v9 + (int)v9) + 72;
    *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v21;
    if ( v18 || (unsigned int)MiIsCalibrationWorthwhile(v21, v8, v11, 0) )
    {
      *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = v19;
      if ( v6 )
      {
        PoolMm = ExAllocatePoolMm(64LL, 16LL * (unsigned int)v8, 1700424013, v11);
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = PoolMm;
        v6 = PoolMm != 0 ? v6 : 0;
      }
      v23 = MiPerProcessorZeroCalibrationBytes[v20];
      if ( v6
        && (v24 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            v25 = (unsigned int)v8,
            v26 = v23 * v8,
            *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = v26,
            MiAllocateZeroCalibrationBuffer((__int64)(v2 + 16), v24, v11, v26, v19),
            *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150)) )
      {
        v27 = *(void **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = v26;
        v8 = *v2;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v8;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0;
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v23;
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = v23;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
        memset_0(v27, 0, 16 * v25);
        v28 = v2 + 34;
        for ( i = 0LL; i < 2; ++i )
        {
          *((_BYTE *)v2 + i + 110) = 0;
          v30 = v28;
          v31 = 2LL;
          do
          {
            *v30 = 0;
            v30 += 2;
            --v31;
          }
          while ( v31 );
          ++v28;
        }
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = v8;
        do
        {
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = -1;
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = 0;
          *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x144) = 0;
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = 0;
          KeGenericCallDpcEx((__int64)MiZeroPageCalibrateDpc, (__int64)(v2 + 16));
        }
        while ( *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x144) );
        *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6D) = 1;
      }
      else
      {
        v32 = v2 + 34;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 1;
        v33 = 0LL;
        *(_WORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) = 1;
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 1LL;
        do
        {
          *((_BYTE *)v2 + v33 + 110) = 0;
          v34 = v32;
          v35 = 2LL;
          do
          {
            *v34 = 1;
            v34 += 2;
            --v35;
          }
          while ( v35 );
          ++v33;
          ++v32;
        }
        while ( v33 < 2 );
        v36 = *(void **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
        if ( v36 )
        {
          ExFreePoolWithTag(v36, 0);
          *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
        }
        v8 = *v2;
        v6 = 0;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
      }
      LODWORD(v9) = **(_DWORD **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      MiMergeCalibrationResults(
        (_QWORD *)v2 + 8,
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
        (__int64)(v2 + 26),
        v19,
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
      if ( v6 )
        MiFreeZeroCalibrationBuffer((_QWORD *)v2 + 8);
      v18 = *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    }
    v13 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    ++v19;
    ++v20;
  }
  while ( v19 < 3 );
  if ( FirstEntrySList((PSLIST_HEADER)v2 + 24) )
  {
    while ( 1 )
    {
      v37 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v2 + 24);
      if ( !v37 )
        break;
      MiDeleteAcceleratorDescriptor((__int64)&v37[2]);
    }
  }
  return *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
}
