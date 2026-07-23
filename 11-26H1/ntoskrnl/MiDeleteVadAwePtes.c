/*
 * XREFs of MiDeleteVadAwePtes @ 0x14047137C
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDeleteLargeUserPde @ 0x1404711E0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 */

__int64 __fastcall MiDeleteVadAwePtes(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 AweViewPageSize; // rax
  int v8; // r11d
  __int64 PteShadow; // rbx
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  int v14; // r8d
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // r9
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rbp
  unsigned __int64 *v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+50h] [rbp-58h]
  int v30; // [rsp+B8h] [rbp+10h] BYREF
  int v31; // [rsp+C0h] [rbp+18h]
  __int64 v32; // [rsp+C8h] [rbp+20h]

  v31 = a3;
  v3 = *(_QWORD *)(a1 + 184);
  v28 = 0LL;
  v4 = a1;
  v27 = 0LL;
  v32 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 40LL);
  v6 = *(_QWORD *)(v32 + 48);
  AweViewPageSize = MiGetAweViewPageSize(v32);
  if ( !AweViewPageSize )
    AweViewPageSize = *(_QWORD *)(v6 + 16);
  PteShadow = *(_QWORD *)a2;
  v10 = 16LL;
  if ( AweViewPageSize != 16 )
    v10 = 1LL;
  v11 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (PteShadow & 1) != 0 )
  {
    v11 = 1LL;
  }
  else if ( (PteShadow & 0x800) == 0 && (PteShadow & 0x3E0) == 0x300 )
  {
    v12 = PteShadow;
    if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
      v12 = qword_140E2D8C8 & PteShadow;
    v13 = v12 >> 31;
    do
    {
      _InterlockedOr(v26, 0);
      if ( (unsigned int)(KiTbFlushTimeStamp - v13) > 2
        || (v13 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v13) >= 2 )
      {
        break;
      }
      if ( (KiTbFlushTimeStamp & 1) == 0 )
      {
        v11 = 1LL;
        break;
      }
      v30 = 0;
      _InterlockedOr(v26, 0);
      while ( _bittest(&KiTbFlushTimeStamp, 0) )
        KeYieldProcessorEx(&v30);
    }
    while ( (v13 & 1) != 0 );
    v4 = a1;
    v8 = v32;
  }
  v14 = 0;
  if ( !v31 )
  {
    v15 = *(_QWORD *)(v4 + 128);
    v16 = (_QWORD *)(a2 + 8 * v10);
    v17 = &v16[v10];
    if ( v15 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v15 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    while ( (unsigned __int64)(v17 - 1) <= v15 && *v16 == PteShadow )
    {
      v18 = v11 + 1;
      ++v14;
      v16 = v17;
      v17 += v10;
      if ( !v11 )
        v18 = 0LL;
      v11 = v18;
    }
  }
  v19 = v14 + 1;
  *(_DWORD *)(v4 + 12) = v19 * v10 - 1;
  v20 = (unsigned int)v10 * v11;
  MiWriteAwePtes(v8, 0, v19, 0, a2, 0, (__int64)&v27);
  v21 = (unsigned __int64 *)v27;
  if ( (_QWORD)v27 )
  {
    if ( (*(_DWORD *)(v6 + 8) & 4) != 0 )
    {
      v22 = *(_QWORD *)(v3 + 96);
      MiLockHugePfnAtDpc(v27);
      v23 = *v21 & 0xFFFFFF800001FFFFuLL;
      if ( v22 )
        v23 = ((v22 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3 << 17) ^ (*v21 ^ ((v22
                                                                                          - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3 << 17)) & 0xFFFFFF800001FFFFuLL;
      else
        *(_QWORD *)(v3 + 104) = v21;
      *v21 = v23;
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * (((((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    }
    else
    {
      v24 = *(_QWORD *)(v3 + 96);
      if ( v24 )
        **((_QWORD **)&v27 + 1) = (v24 >> 3) ^ (**((_QWORD **)&v27 + 1) ^ (v24 >> 3)) & 0xFFFFF00000000001uLL;
      else
        *(_QWORD *)(v3 + 104) = *((_QWORD *)&v27 + 1);
    }
    *(_QWORD *)(v3 + 96) = v21;
    if ( BYTE4(v28) )
      *(_BYTE *)(v3 + 116) = 1;
  }
  return v20;
}
