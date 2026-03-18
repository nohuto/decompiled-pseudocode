/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     HMValidateSharedHandleNoRip @ 0x140082658 (HMValidateSharedHandleNoRip.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140085740 (RIMGetVirtualDesktopPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1401C192C (rimUpdatePointerDeviceOrientation.c)
 *     RIMGetMonitorPhysicalSize @ 0x140205BA0 (RIMGetMonitorPhysicalSize.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x140211F70 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int128 v6; // xmm0
  __int128 v8; // xmm1
  struct _LUID *v10; // rbx
  INT v11; // r14d
  INT v12; // ebp
  INT v13; // eax
  INT v14; // ebx
  INT v15; // r15d
  INT v16; // edi
  INT v17; // esi
  INT v18; // ebx
  _OWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rax
  _OWORD *v23; // rax
  char *v24; // r8
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  PERESOURCE *v28; // [rsp+28h] [rbp-40h]
  _BYTE v29[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)a4;
  v5 = *(_QWORD **)a3;
  v6 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  v8 = *(_OWORD *)((char *)a2 + 140);
  v27 = 0LL;
  *((_OWORD *)a2 + 12) = v6;
  *((_OWORD *)a2 + 13) = v8;
  *((_OWORD *)a2 + 11) = v8;
  *((_OWORD *)a2 + 10) = *(_OWORD *)v4;
  *(_QWORD *)((char *)a2 + 228) = *v5;
  v28 = (PERESOURCE *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 18688);
  ExEnterCriticalRegionAndAcquireResourceShared(*v28);
  v10 = (struct _LUID *)((char *)a2 + 240);
  if ( *((_DWORD *)a2 + 59) && InputConfig::GetInputSpace(*v10, (struct CLockedInputSpace *)&v27) )
  {
    *(struct _LUID *)((char *)a2 + 228) = *v10;
    if ( *((_DWORD *)a2 + 62) )
      v19 = (_OWORD *)((char *)a2 + 252);
    else
      v19 = (_OWORD *)(v27 + 24);
    *((_OWORD *)a2 + 10) = *v19;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0LL;
    *v10 = 0LL;
    *((_DWORD *)a2 + 62) = 0;
  }
  if ( (*((_DWORD *)a2 + 92) & 8) != 0 && *((_DWORD *)a2 + 91) == 1 )
  {
    v20 = *((_QWORD *)a2 + 20);
    v21 = HIDWORD(*((_QWORD *)a2 + 21)) - HIDWORD(v20);
    *((_DWORD *)a2 + 50) = *((_QWORD *)a2 + 21) - v20;
    *((_DWORD *)a2 + 51) = v21;
    if ( *((_DWORD *)a1 + 332) )
    {
      v22 = HMValidateSharedHandleNoRip(*((_QWORD *)a1 + 167));
      v23 = (_OWORD *)RIMGetMonitorPhysicalSize(v29, v22);
    }
    else
    {
      v23 = (_OWORD *)RIMGetVirtualDesktopPhysicalSize(v29);
    }
    v24 = (char *)a2 + 30;
    v25 = 6LL;
    *((_OWORD *)a2 + 11) = *v23;
    do
    {
      v26 = *(unsigned int *)(v24 + 2);
      if ( (_DWORD)v26 != -1 && *((_WORD *)v24 - 1) == 1 )
      {
        if ( *(_WORD *)v24 == 48 )
          *((_DWORD *)a2 + 15 * v26 + 111) = *((_DWORD *)a2 + 50) - 1;
        if ( *(_WORD *)v24 == 49 )
          *((_DWORD *)a2 + 15 * v26 + 111) = *((_DWORD *)a2 + 51) - 1;
      }
      v24 += 16;
      --v25;
    }
    while ( v25 );
  }
  else if ( *((_DWORD *)a1 + 332) && (*(_DWORD *)(v4 + 16) & 2) != 0 )
  {
    v11 = *((_DWORD *)a2 + 37);
    *((_DWORD *)a2 + 56) = *(_DWORD *)(v4 + 164);
    v12 = *(_DWORD *)(v4 + 176);
    v13 = EngMulDiv(*(_DWORD *)(v4 + 192), v11, v12);
    v14 = *(_DWORD *)(v4 + 180);
    v15 = v13;
    v16 = *((_DWORD *)a2 + 38);
    v17 = EngMulDiv(*(_DWORD *)(v4 + 188), v16, v14);
    v18 = EngMulDiv(*(_DWORD *)(v4 + 196), v16, v14);
    *((_DWORD *)a2 + 52) = EngMulDiv(*(_DWORD *)(v4 + 184), v11, v12);
    *((_DWORD *)a2 + 53) = v17;
    *((_DWORD *)a2 + 54) = v15;
    *((_DWORD *)a2 + 55) = v18;
    *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
    *((_DWORD *)a2 + 47) = v18 - *((_DWORD *)a2 + 53);
    rimUpdatePointerDeviceOrientation(a2);
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v28);
}
