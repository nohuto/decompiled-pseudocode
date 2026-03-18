/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1402338C8
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1402337F4 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1401D8C20 (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1402C315C (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402C32E4 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1402C3608 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 */

unsigned __int64 __fastcall Edgy::_GetArcData(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v6; // rdi
  unsigned int *v7; // r14
  int v8; // ebp
  int v9; // r13d
  unsigned int v10; // ebx
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  int v13; // eax
  __int64 v14; // rax
  BOOL v15; // r12d
  void *v16; // rdx
  int PointerDeviceType; // ebx
  unsigned int DisambiguationArcData; // r15d
  int IsLegacyDevice; // eax
  const struct tagPOINTER_INFO **v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const struct Edgy::tagARC_DATA *v25; // r8
  __int64 v26; // rax
  int v27; // r11d
  int v28; // r8d
  int v29; // edx
  int v30; // r10d
  int v31; // r9d
  int v32; // eax
  int v33; // eax
  int v34; // r13d
  __int64 Instance; // rbx
  unsigned int v36; // eax
  __int64 Inertia; // rbx
  float v38; // xmm1_4
  float v39; // xmm1_4
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v50; // [rsp+30h] [rbp-88h]
  __int128 v51; // [rsp+38h] [rbp-80h]
  char v52[104]; // [rsp+50h] [rbp-68h] BYREF
  int v53; // [rsp+C0h] [rbp+8h]
  unsigned int v54; // [rsp+C8h] [rbp+10h]
  int v55; // [rsp+D0h] [rbp+18h]
  int v56; // [rsp+D8h] [rbp+20h]

  v3 = *(_DWORD *)(a3 + 48);
  *(_OWORD *)a1 = 0LL;
  v54 = 0;
  v6 = a1;
  v55 = 0;
  v7 = 0LL;
  v8 = 1;
  v9 = 0;
  v10 = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = a3;
  if ( v3 )
  {
    do
    {
      UserSessionState = W32GetUserSessionState(a1, 0LL);
      PointerInfo = CTouchProcessor::GetPointerInfo(
                      *(CTouchProcessor **)(UserSessionState + 3256),
                      (const struct CPointerInputFrame *)a3,
                      v10);
      a1 = (unsigned __int64)PointerInfo;
      if ( PointerInfo )
      {
        ++v54;
        v13 = *((_DWORD *)PointerInfo + 3);
        if ( (v13 & 4) != 0 )
        {
          ++v9;
          if ( (v13 & 0x2000) != 0 )
          {
            v7 = (unsigned int *)a1;
            *(_QWORD *)(v6 + 40) = *(_QWORD *)(a1 + 56);
            *(_DWORD *)(v6 + 48) = *(_DWORD *)(a1 + 64);
          }
        }
        if ( *(_DWORD *)a1 != 2 && *(_DWORD *)a1 != 3 )
          v8 = 0;
        v14 = *(_QWORD *)(a2 + 176);
        if ( v14 && *(_QWORD *)(a1 + 16) != v14 )
          v8 = 0;
      }
      ++v10;
    }
    while ( v10 < v3 );
    v55 = v9;
  }
  v15 = 0;
  v53 = 0;
  v56 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v8 && v7 && v9 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v7 + 2));
    a1 = (unsigned int)(PointerDeviceType - 1);
    if ( (a1 & 0xFFFFFFFD) != 0 )
    {
      v8 = 0;
      DisambiguationArcData = 0;
      goto LABEL_37;
    }
    IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v7 + 2), v16);
    v20 = (const struct tagPOINTER_INFO **)Edgy::_HitTestEdgyRegion(
                                             v52,
                                             a2,
                                             *((_QWORD *)v7 + 2),
                                             *((_QWORD *)v7 + 7),
                                             PointerDeviceType,
                                             IsLegacyDevice);
    a1 = (unsigned __int64)*v20;
    v51 = *(_OWORD *)v20;
    if ( *v20 )
    {
      *(_DWORD *)(v6 + 24) = (unsigned int)v20[2];
      *(_QWORD *)(v6 + 16) = a1;
      v21 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v6 + 32) = *((_QWORD *)&v51 + 1);
      v56 = *(_DWORD *)(*((_QWORD *)&v51 + 1) + 4LL);
      v53 = 1;
      v22 = ValidateHwnd(v21);
      v15 = 1;
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 40);
        if ( *(char *)(v23 + 19) >= 0 && *(char *)(v23 + 20) >= 0 )
          v15 = 0;
      }
    }
    else
    {
      v53 = 0;
    }
    DisambiguationArcData = 0;
  }
  else
  {
    DisambiguationArcData = 0;
    if ( !v8 )
      goto LABEL_37;
  }
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    a1 = *(_QWORD *)(a2 + 184);
    if ( a1
      && (v24 = ValidateHwnd(*(_QWORD *)(a1 + 8))) != 0
      && (v26 = *(_QWORD *)(v24 + 40), *(char *)(v26 + 19) >= 0)
      && *(char *)(v26 + 20) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)v6, v25);
    }
    else
    {
      v15 = 1;
    }
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(a2 + 216);
  }
LABEL_37:
  v27 = *(_DWORD *)(a2 + 16);
  v50 = 0;
  if ( v27 )
    goto LABEL_48;
  a1 = (unsigned int)(*(_DWORD *)(v6 + 48) - *(_DWORD *)(a2 + 248));
  if ( (unsigned int)a1 >= *(_DWORD *)(a2 + 252) || !v7 || *(_QWORD *)(a2 + 240) != *((_QWORD *)v7 + 2) )
    goto LABEL_48;
  v28 = *(_DWORD *)(a2 + 256);
  v29 = *(_DWORD *)(v6 + 40);
  a1 = (unsigned int)(v28 - v29);
  v30 = *(_DWORD *)(a2 + 260);
  v31 = *(_DWORD *)(v6 + 44);
  v32 = v29 - v28;
  if ( v29 <= v28 )
    v32 = v28 - v29;
  if ( v32 >= *(_DWORD *)(a2 + 264) )
    goto LABEL_48;
  a1 = (unsigned int)(v30 - v31);
  v33 = v31 - v30;
  if ( v31 <= v30 )
    v33 = v30 - v31;
  if ( v33 < *(_DWORD *)(a2 + 268) )
  {
    v50 = 1;
    v34 = 0;
  }
  else
  {
LABEL_48:
    v34 = 0;
    if ( v27 )
      goto LABEL_63;
  }
  if ( v53 && (*v7 == 2 || *v7 == 3) )
  {
    Instance = CInertiaManager::GetInstance(a1, 0LL);
    v36 = CInertiaManager::InertiaSourceFromPointerType(*v7);
    Inertia = CInertiaManager::QueryInertia(Instance, *((_QWORD *)v7 + 6), v36);
    if ( Inertia )
    {
      if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(Inertia + 176)) < *(_QWORD *)(a2 + 280) )
      {
        if ( (v38 = *(float *)(Inertia + 16), v38 > 0.0) && !*(_DWORD *)(v6 + 24)
          || v38 < 0.0 && *(_DWORD *)(v6 + 24) == 2
          || (v39 = *(float *)(Inertia + 20), v39 > 0.0) && *(_DWORD *)(v6 + 24) == 1
          || v39 < 0.0 && *(_DWORD *)(v6 + 24) == 3 )
        {
          v34 = 1;
        }
      }
    }
  }
LABEL_63:
  v40 = (v55 == 0) | 2;
  if ( !v7 )
    v40 = v55 == 0;
  v41 = v40 | 4;
  if ( v54 <= 1 )
    v41 = v40;
  v42 = v41 | 8;
  if ( !v8 )
    v42 = v41;
  v43 = v42 | 0x10;
  if ( !v53 )
    v43 = v42;
  v44 = v43 | 0x80;
  if ( !v56 )
    v44 = v43;
  v45 = v44 | 0x1000;
  if ( !v15 )
    v45 = v44;
  v46 = DisambiguationArcData | v45;
  v47 = v46 | 0x40;
  if ( !v50 )
    v47 = v46;
  v48 = v47 | 0x20;
  if ( !v34 )
    v48 = v47;
  *(_DWORD *)(v6 + 8) = v48;
  return v6;
}
