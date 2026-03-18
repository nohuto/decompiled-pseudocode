/*
 * XREFs of ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14018CF78
 * Callers:
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x14026B7E0 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 * Callees:
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x14018CA34 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x14018CB4C (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018CBB4 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x14018CCC0 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x14018D4E0 (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x14018D658 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x14018D8FC (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

bool __fastcall xxxGetArrangeRectFromShell(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v8; // rdx
  bool v9; // bl
  bool v10; // si
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  char v15; // si
  int v16; // ecx
  int v17; // ecx
  bool v18; // bl
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rcx
  bool v24; // al
  int v25; // edi
  int v26; // ebp
  int v27; // ebx
  int v28; // esi
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  int *v32; // r8
  __int64 v33; // rdx
  int *v34; // r8
  __int64 v35; // rcx
  int v36; // r9d
  int v37; // eax
  int v38; // ecx
  bool v39; // zf
  int v40; // r9d
  int v41; // edx
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // r10d
  __int64 v46; // rdx
  int v47; // r10d
  bool v48; // bp
  __int64 v49; // rax
  __int64 v50; // rdx
  bool v51; // r12
  bool v52; // r13
  int v53; // edi
  int v54; // ebp
  int v55; // ebx
  int v56; // esi
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int64 v61; // [rsp+20h] [rbp-138h]
  char v62; // [rsp+20h] [rbp-138h]
  __int16 v63; // [rsp+30h] [rbp-128h]
  bool v64; // [rsp+70h] [rbp-E8h]
  bool v65; // [rsp+71h] [rbp-E7h]
  __int128 v67; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v68[16]; // [rsp+90h] [rbp-C8h] BYREF
  char v69[16]; // [rsp+A0h] [rbp-B8h] BYREF
  _DWORD v70[20]; // [rsp+B0h] [rbp-A8h]

  v4 = a2;
  *(_QWORD *)&v67 = a2;
  v6 = a1;
  memset_0(v68, 0, 0x68uLL);
  if ( (unsigned __int8)CallShell::xxxArrangementInfoHandler(v6, a3, v68) )
  {
    v15 = v70[0];
    v16 = v70[0];
    *(_OWORD *)a4 = *(_OWORD *)&v70[1];
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v23 = *(_QWORD *)&WPP_GLOBAL_Control;
        v24 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v64 = v24;
        v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = a4[3];
          v26 = a4[1];
          v27 = a4[2];
          v28 = *a4;
          LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          UserSessionState = W32GetUserSessionState(v23, v8);
          LOBYTE(v30) = v65;
          LOBYTE(v31) = v64;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v30,
            *(_QWORD *)(UserSessionState + 69160),
            4,
            1,
            25,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v28,
            v26,
            v27,
            v25,
            v27 - v28,
            v25 - v26);
          v6 = a1;
          v4 = v67;
        }
        v32 = (int *)(*(_QWORD *)(v4 + 40) + 44LL);
        v67 = 0LL;
        if ( !(unsigned int)IntersectRect(&v67, a4, v32) )
          goto LABEL_65;
        v35 = v67 - *(_QWORD *)a4;
        if ( (_QWORD)v67 == *(_QWORD *)a4 )
          v35 = *((_QWORD *)&v67 + 1) - *((_QWORD *)a4 + 1);
        if ( v35 )
        {
LABEL_65:
          v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_73;
          v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
          v63 = 26;
        }
        else
        {
          if ( *v34 > *a4 )
            goto LABEL_44;
          v36 = a4[1];
          v37 = v34[1];
          if ( v37 > v36 )
            goto LABEL_44;
          v38 = (*v34 == *a4) | 2;
          v39 = v37 == v36;
          v40 = a4[2];
          if ( !v39 )
            v38 = *v34 == *a4;
          v41 = v34[2];
          if ( v41 < v40 )
            goto LABEL_44;
          v42 = v38 | 4;
          v39 = v41 == v40;
          v43 = a4[3];
          if ( !v39 )
            v42 = v38;
          v44 = v34[3];
          if ( v44 < v43 )
          {
LABEL_44:
            v45 = 0;
          }
          else
          {
            v45 = v42 | 8;
            if ( v44 != v43 )
              v45 = v42;
          }
          if ( (unsigned int)ArrangementStyleFromOverlap(v45) )
          {
            LODWORD(v61) = v47;
            TransformShellProvidedRectangle(*(_QWORD *)(v6 + 16), (int *)(v6 + 112), (int *)(v6 + 104), v4, v61, a4);
            *(_DWORD *)(v6 + 200) |= 0x10000000u;
            v51 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v53 = a4[3];
              v54 = a4[1];
              v55 = a4[2];
              v56 = *a4;
              v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
              LOBYTE(v58) = v52;
              LOBYTE(v59) = v51;
              WPP_RECORDER_AND_TRACE_SF_dddddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v59,
                v58,
                *(_QWORD *)(v57 + 69160),
                4,
                1,
                28,
                (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
                v56,
                v54,
                v55,
                v53,
                v55 - v56,
                v53 - v54);
              v6 = a1;
            }
            goto LABEL_62;
          }
          v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_73;
          v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v46);
          v63 = 27;
        }
        v14 = *(_QWORD *)(v49 + 69160);
        LOBYTE(v13) = v48;
        v62 = 3;
        goto LABEL_72;
      }
      if ( v17 != 1 )
      {
        v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v18;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(v20 + 69160),
            3,
            1,
            29,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v15);
        }
        goto LABEL_73;
      }
    }
LABEL_62:
    MOVESIZEDATA::SHData_StoreShellArrangeInfo((MOVESIZEDATA *)v6, (const struct _WINDOW_ARRANGEMENT_INFO *)v69);
    return v70[0] == 1;
  }
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_73;
  v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
  LOBYTE(v13) = v10;
  v14 = *(_QWORD *)(v11 + 69160);
  v63 = 24;
  v62 = 4;
LABEL_72:
  LOBYTE(v12) = v9;
  WPP_RECORDER_AND_TRACE_SF_(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v12,
    v13,
    v14,
    v62,
    1,
    v63,
    (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
LABEL_73:
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(v6 + 336), 0, (const struct MOVESIZEDATA *)v6);
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((DWM_ARRANGEMENT_DATA *)(v6 + 336), (const struct MOVESIZEDATA *)v6);
  DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((DWM_ARRANGEMENT_DATA *)(v6 + 336), 0LL, (const struct MOVESIZEDATA *)v6);
  return 0;
}
