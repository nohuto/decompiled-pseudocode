/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180083A64
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x180033C30 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLCM@@YAJKKPEAK@Z @ 0x1800AE590 (-ULongLCM@@YAJKKPEAK@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x180162148 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v11; // rsi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rax
  __int64 v18; // rdx
  unsigned int v20; // edi
  __int64 i; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  bool v25; // cc
  unsigned int v26; // r15d
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int *v29; // r12
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  unsigned int v35; // [rsp+70h] [rbp+50h] BYREF

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v13 = a3;
  v14 = 5000LL;
  v15 = 1;
  v35 = a3;
  v16 = *v11;
  if ( v16 > 0x1388 )
    v14 = (unsigned int)v16;
  if ( (int)ULongLCM(a3, v11[1] + 1, &v35) < 0 )
  {
    v18 = 171LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
      (const char *)0x88890008LL);
    return 2290679816LL;
  }
  v20 = v35 / v13;
  if ( a9 )
    *a9 = v20;
  for ( i = 0LL; (unsigned int)i < v11[3]; i = (unsigned int)(i + 1) )
  {
    v22 = *(_QWORD *)&v11[6 * i + 4] - *(_QWORD *)&a4->Data1;
    if ( !v22 )
      v22 = *(_QWORD *)&v11[6 * i + 6] - *(_QWORD *)a4->Data4;
    if ( !v22 )
    {
      v23 = v11[6 * i + 9];
      if ( v14 > v23 )
        v23 = v14;
      v14 = v23;
      if ( v11[6 * i + 8] )
        v15 = v11[6 * i + 8];
      break;
    }
  }
  v35 = 0;
  if ( HnsToBlocksRU(v14, a2, v13, &v35) < 0 )
  {
    v18 = 194LL;
    goto LABEL_5;
  }
  v24 = v35;
  v25 = v15 <= v35;
  v35 = 0;
  if ( !v25 )
    v24 = v15;
  v26 = v24 - 1 - (v24 - 1) % v20 + v20;
  v27 = a5;
  *a10 = v26;
  if ( HnsToBlocksRU(v27, a2, v13, &v35) < 0 )
  {
    v18 = 200LL;
    goto LABEL_5;
  }
  v28 = v26;
  v29 = a8;
  if ( v35 > v26 )
    v28 = v35;
  v30 = v28 - 1 - (v28 - 1) % v20 + v20;
  *a8 = v30;
  if ( *(_BYTE *)a1 )
  {
    v31 = v11[2];
    v32 = -1;
    if ( v31 )
      v32 = v20 * (v31 / (v20 * v13));
    v35 = 0;
    if ( HnsToBlocksRU(0x1E8480uLL, a2, v13, &v35) < 0 )
    {
      v18 = 217LL;
      goto LABEL_5;
    }
    if ( v35 > v26 )
      v26 = v35;
    v30 = *v29;
    if ( v32 >= v26 - 1 - (v26 - 1) % v20 + v20 )
      v32 = v26 - 1 - (v26 - 1) % v20 + v20;
    if ( v32 > v30 )
      v30 = v32;
  }
  *a11 = v30;
  return 0LL;
}
