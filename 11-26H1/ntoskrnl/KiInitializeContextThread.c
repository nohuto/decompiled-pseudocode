/*
 * XREFs of KiInitializeContextThread @ 0x1403D7E1C
 * Callers:
 *     KiStartIdleThread @ 0x1405F9500 (KiStartIdleThread.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D7C80 (RtlpLocateExtendedOrSupervisorFeature.c)
 *     KeIsEnqueueStoreAndMovDir64BSupported @ 0x1403D8288 (KeIsEnqueueStoreAndMovDir64BSupported.c)
 *     KxContextToKframes @ 0x1403D82B0 (KxContextToKframes.c)
 *     RtlLocateExtendedFeature @ 0x1403D9FF0 (RtlLocateExtendedFeature.c)
 *     ExBuildPasidMsrForThread @ 0x1404FDEF0 (ExBuildPasidMsrForThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiInitializeContextThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *ExtendedFeature; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r15
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  char *v15; // rbx
  char *v16; // r11
  __int64 v17; // rax
  char *v18; // r13
  unsigned int *v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 result; // rax
  _QWORD *v24; // rcx
  unsigned int *v25; // r8
  __int64 v26; // r10
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r11
  char *v30; // [rsp+30h] [rbp-528h]
  _BYTE v31[48]; // [rsp+40h] [rbp-518h] BYREF
  int v32; // [rsp+70h] [rbp-4E8h]
  __int16 v33; // [rsp+78h] [rbp-4E0h]
  __int16 v34; // [rsp+82h] [rbp-4D6h]

  v2 = *(_QWORD *)(a1 + 40);
  ExtendedFeature = 0LL;
  v5 = (v2 - (unsigned int)KiXSaveAreaLength) & 0xFFFFFFFFFFFFFFC0uLL;
  v7 = v5;
  if ( (_DWORD)KiIptSaveAreaLength )
    *(_QWORD *)(a1 + 1112) = v5 + MEMORY[0xFFFFF78000000718];
  v8 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a1 + 1064) & 0x40000;
  if ( v8 )
    v5 = *(_QWORD *)(a1 + 96);
  v9 = (_QWORD *)((v7 - 80) & 0xFFFFFFFFFFFFFFC0uLL);
  memset_0(v9, 0, v2 - (_QWORD)v9);
  *v9 = v2;
  v9[1] = v2 - (unsigned int)KeKernelStackSize;
  *(_DWORD *)(v5 + 24) = 8064;
  v10 = *(_QWORD *)(a2 + 32);
  if ( v10 )
  {
    v11 = 9LL;
    v12 = v31;
    v13 = *(_OWORD **)(a2 + 32);
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v32 = v32 & 6 | 0x100001;
    v30 = (char *)v9 - (KiFredEnabled != 0 ? 416LL : 400LL);
    v15 = v30 - 320;
    v33 = 51;
    v34 = 43;
    memset_0(v30 - 320, 0, 0x140uLL);
    memset_0(v30, 0, 0x190uLL);
    v30[43] = 1;
    KxContextToKframes((_DWORD)v30, (_DWORD)v30 - 320, (unsigned int)v31, v32, 1);
    v16 = v30;
    *(_QWORD *)v15 = *(_QWORD *)(a2 + 24);
    *((_QWORD *)v15 + 1) = *(_QWORD *)(a2 + 16);
    v17 = *(_QWORD *)(a2 + 8);
    v18 = v30 - 384;
    *((_QWORD *)v15 + 2) = v17;
    *((_QWORD *)v15 + 39) = &KiStartUserThreadReturn;
    *((_QWORD *)v30 - 41) = &KiStartUserThread;
    *(_WORD *)v5 = 639;
    *((_DWORD *)v30 + 11) = 8064;
    if ( (KeFeatureBits & 0x800000) != 0 )
      *(_QWORD *)(v5 + 512) = 1LL;
    v19 = (unsigned int *)(a1 + 116);
    v20 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFDuLL | KeEnabledSupervisorXStateFeatures & 0x400 | 0x801;
    if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
      v20 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFDuLL | KeEnabledSupervisorXStateFeatures & 0x400 | 1;
    *(_QWORD *)(a1 + 592) = v20;
  }
  else
  {
    v19 = (unsigned int *)(a1 + 116);
    *(v9 - 6) = *(_QWORD *)(a2 + 24);
    *(v9 - 5) = *(_QWORD *)(a2 + 16);
    v16 = 0LL;
    *(v9 - 4) = *(_QWORD *)(a2 + 8);
    *(v9 - 7) = KxStartSystemThread;
    *(v9 - 1) = 0LL;
    v27 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL | 0x800;
    if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
      v27 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL;
    *(_QWORD *)(a1 + 592) = v27;
    v28 = *(_DWORD *)(a2 + 60);
    v18 = (char *)(v9 - 14);
    if ( (v28 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 562) = 0;
      goto LABEL_14;
    }
  }
  *(_BYTE *)(a1 + 562) = 1;
LABEL_14:
  v18[40] = 1;
  *((_QWORD *)v18 + 6) = v16 + 128;
  if ( MEMORY[0xFFFFF780000003D8] && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    *(_QWORD *)(v5 + 520) = 0x8000000000000003uLL;
  v21 = 0LL;
  v22 = ((unsigned __int64)*v19 >> 9) & 0x800;
  result = KeIsEnqueueStoreAndMovDir64BSupported();
  if ( (_BYTE)result )
  {
    if ( *v24 )
    {
      result = *v25;
      if ( (result & 0x400) != 0 )
      {
        result = ExBuildPasidMsrForThread(a1);
        v21 = result;
        if ( (int)result < 0 )
          v22 |= v29;
      }
    }
  }
  if ( v22 )
  {
    *(_QWORD *)(v5 + 512) |= v22;
    *(_QWORD *)(v5 + 520) |= v22;
    if ( (v22 & v26) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 48) & 0x100040) == 0x100040 )
        ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(v10 + 1232), 0xBu, 0LL);
      result = (__int64)RtlpLocateExtendedOrSupervisorFeature((_QWORD *)(v5 + 512), 0xBu, 0LL);
      *(_OWORD *)result = *ExtendedFeature;
    }
  }
  if ( (v22 & 0x400) != 0 )
  {
    result = (__int64)RtlpLocateExtendedOrSupervisorFeature((_QWORD *)(v5 + 512), 0xAu, 0LL);
    *(_QWORD *)result = v21;
  }
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 88) = v18;
  *(_QWORD *)(a1 + 96) = v5;
  return result;
}
