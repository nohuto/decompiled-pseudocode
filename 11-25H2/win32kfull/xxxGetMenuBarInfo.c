/*
 * XREFs of xxxGetMenuBarInfo @ 0x1401BC1C0
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1401BC010 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetWindowBordersForDpi @ 0x14004B870 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1400B2A98 (_HasCaptionIcon.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     GetThreadpGlobalPopupMenu @ 0x1401BC930 (GetThreadpGlobalPopupMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401C8BD4 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(struct tagWND *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 SysMenu; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int WindowBordersForDpi; // r8d
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 ThreadpGlobalPopupMenu; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // edx
  __int64 v41; // r15
  __int64 v42; // rax
  int v43; // edx
  __int64 *v44; // rax
  __int64 *v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // edx
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 *v57; // rax
  __int64 *v58; // [rsp+30h] [rbp-30h] BYREF
  __int64 v59; // [rsp+38h] [rbp-28h] BYREF
  __int64 v60[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v61; // [rsp+50h] [rbp-10h]

  v5 = a3;
  v7 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v60, a2);
  v10 = PtiCurrent(v9, v8);
  v58 = (__int64 *)gSmartObjNullRef;
  v59 = *((_QWORD *)v10 + 209);
  *((_QWORD *)v10 + 209) = &v59;
  if ( *(_DWORD *)a4 == 48 )
  {
    v11 = 0LL;
    *(_OWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    v12 = *((_QWORD *)a1 + 5);
    v13 = *(_DWORD *)(v12 + 288) & 0xF;
    if ( v13 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v12 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v13
           && (v34 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v34 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
    }
    switch ( v7 )
    {
      case -3:
        if ( (*(_BYTE *)(v12 + 31) & 0x40) == 0 )
        {
          v12 = *((_QWORD *)a1 + 21);
          if ( v12 )
          {
            v61 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, v12);
            if ( (v61 || *(_QWORD *)v60[0])
              && (int)v5 >= 0
              && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 40LL) + 44LL) )
            {
              *(_QWORD *)(a4 + 24) = **(_QWORD **)v60[0];
              if ( *(_DWORD *)(*(_QWORD *)v60[0] + 64LL) && *(_DWORD *)(*(_QWORD *)v60[0] + 68LL) )
              {
                if ( (_DWORD)v5 )
                {
                  v35 = *((_QWORD *)a1 + 5);
                  v36 = 96 * v5;
                  v37 = *(_QWORD *)(*(_QWORD *)v60[0] + 88LL);
                  v38 = *(_QWORD *)(96 * v5 + v37 - 96);
                  if ( (*(_BYTE *)(v35 + 26) & 0x40) != 0 )
                  {
                    v39 = *(_DWORD *)(v35 + 96) - *(_DWORD *)(v38 + 64);
                    *(_DWORD *)(a4 + 12) = v39;
                    *(_DWORD *)(a4 + 4) = v39 - *(_DWORD *)(*(_QWORD *)(v36 + v37 - 96) + 72LL);
                  }
                  else
                  {
                    v43 = *(_DWORD *)(v38 + 64) + *(_DWORD *)(v35 + 88);
                    *(_DWORD *)(a4 + 4) = v43;
                    *(_DWORD *)(a4 + 12) = v43 + *(_DWORD *)(*(_QWORD *)(v36 + v37 - 96) + 72LL);
                  }
                  v40 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) + *(_DWORD *)(*(_QWORD *)(v36 + v37 - 96) + 68LL);
                  *(_DWORD *)(a4 + 8) = v40;
                  v31 = v40 + *(_DWORD *)(*(_QWORD *)(v36 + v37 - 96) + 76LL);
                }
                else
                {
                  WindowBordersForDpi = GetWindowBordersForDpi(
                                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                                          v24,
                                          v25,
                                          WindowDpiLastNotify);
                  v27 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v27 + 26) & 0x40) != 0 )
                  {
                    *(_DWORD *)(a4 + 12) = *(_DWORD *)(v27 + 96) - WindowBordersForDpi;
                    *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v60[0] + 64LL);
                  }
                  else
                  {
                    v28 = *(_DWORD *)(v27 + 88);
                    v29 = v60[0];
                    *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v28;
                    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v29 + 64LL);
                  }
                  *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
                  v30 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v30 + 16) & 8) != 0 )
                    *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(
                                             ((*(char *)(v30 + 24) >> 7) & 0x14u) + 2,
                                             WindowDpiLastNotify);
                  v31 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v60[0] + 68LL);
                }
                *(_DWORD *)(a4 + 16) = v31;
              }
              ThreadpGlobalPopupMenu = GetThreadpGlobalPopupMenu(*((_QWORD *)a1 + 2));
              SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v58, ThreadpGlobalPopupMenu);
              if ( !*v58 || (*(_DWORD *)*v58 & 2) == 0 || (*(_DWORD *)*v58 & 4) != 0 )
                goto LABEL_17;
              goto LABEL_64;
            }
          }
        }
        break;
      case -1:
        if ( (*(_BYTE *)(v12 + 30) & 8) != 0 )
        {
          SysMenu = xxxGetSysMenu(a1, 0LL);
          v61 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, SysMenu);
          if ( (v61 || *(_QWORD *)v60[0])
            && (int)v5 >= 0
            && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 40LL) + 44LL) )
          {
            *(_QWORD *)(a4 + 24) = **(_QWORD **)v60[0];
            if ( (unsigned int)HasCaptionIcon((__int64)a1) )
            {
              v18 = GetWindowBordersForDpi(
                      *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                      *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                      v16,
                      v17,
                      WindowDpiLastNotify);
              v19 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v19 + 26) & 0x40) != 0 )
              {
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v19 + 96) - v18;
                *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                                    - GetDpiDependentMetric(
                                        ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 12,
                                        WindowDpiLastNotify);
              }
              else
              {
                *(_DWORD *)(a4 + 4) = v18 + *(_DWORD *)(v19 + 88);
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                                     + GetDpiDependentMetric(
                                         ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 12,
                                         WindowDpiLastNotify);
              }
              *(_DWORD *)(a4 + 8) = v18 + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
              *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                                   + GetDpiDependentMetric(
                                       ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 13,
                                       WindowDpiLastNotify);
            }
            v20 = GetThreadpGlobalPopupMenu(*((_QWORD *)a1 + 2));
            SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v58, v20);
            if ( !*v58 || (*(_DWORD *)*v58 & 2) == 0 || (*(_DWORD *)*v58 & 4) == 0 )
              goto LABEL_17;
LABEL_64:
            if ( *(struct tagWND **)(*v58 + 8) != a1 )
              goto LABEL_17;
            v46 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v46;
            if ( !(_DWORD)v5 )
            {
LABEL_66:
              *(_DWORD *)(a4 + 40) = v46 | 2;
              goto LABEL_17;
            }
            v21 = *(_QWORD *)(*v58 + 64);
            if ( *(_DWORD *)(v21 + 80) != (_DWORD)v5 - 1 )
            {
LABEL_17:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v58, v21);
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v60, v22);
              return 1LL;
            }
            v44 = v58;
            *(_DWORD *)(a4 + 40) |= 2u;
            if ( !*(_QWORD *)(*(_QWORD *)(*v44 + 64) + 24LL) )
            {
LABEL_61:
              *(_QWORD *)(a4 + 32) = v11;
              goto LABEL_17;
            }
            v45 = *(__int64 **)(*(_QWORD *)(*v58 + 64) + 24LL);
LABEL_60:
            v11 = *v45;
            goto LABEL_61;
          }
        }
        break;
      case -4:
        v41 = xxxSendMessage(a1, 0x1E1u);
        v42 = ValidateHmenu(v41, 1LL);
        v61 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, v42);
        if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v60) )
        {
          if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 40LL) + 44LL) )
          {
            *(_QWORD *)(a4 + 24) = v41;
            if ( (_DWORD)v5 )
            {
              v47 = *((_QWORD *)a1 + 5);
              v48 = 96 * v5;
              v49 = *(_QWORD *)(*(_QWORD *)v60[0] + 88LL);
              v50 = *(_QWORD *)(96 * v5 + v49 - 96);
              if ( (*(_BYTE *)(v47 + 26) & 0x40) != 0 )
              {
                v51 = *(_DWORD *)(v47 + 112) - *(_DWORD *)(v50 + 64);
                *(_DWORD *)(a4 + 12) = v51;
                *(_DWORD *)(a4 + 4) = v51 - *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 72LL);
              }
              else
              {
                v52 = *(_DWORD *)(v50 + 64) + *(_DWORD *)(v47 + 104);
                *(_DWORD *)(a4 + 4) = v52;
                *(_DWORD *)(a4 + 12) = v52 + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 72LL);
              }
              v53 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL) + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 68LL);
              *(_DWORD *)(a4 + 8) = v53;
              *(_DWORD *)(a4 + 16) = v53 + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 76LL);
            }
            else
            {
              *(_OWORD *)(a4 + 4) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
            }
            v54 = safe_cast_fnid_to_PMENUWND(a1);
            if ( !v54 )
              goto LABEL_17;
            SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v58, *(_QWORD *)(v54 + 8));
            if ( !*v58 )
              goto LABEL_17;
            v55 = GetThreadpGlobalPopupMenu(*((_QWORD *)a1 + 2));
            if ( *(_QWORD *)(v56 + 64) != v55 )
              goto LABEL_17;
            v46 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v46;
            if ( !(_DWORD)v5 )
              goto LABEL_66;
            if ( (_DWORD)v5 != *(_DWORD *)(*v58 + 80) + 1 )
              goto LABEL_17;
            v57 = v58;
            *(_DWORD *)(a4 + 40) |= 2u;
            if ( !*(_QWORD *)(*v57 + 24) )
              goto LABEL_61;
            v21 = *v58;
            v45 = *(__int64 **)(*v58 + 24);
            goto LABEL_60;
          }
        }
        break;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v58, v12);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v60, v33);
  return 0LL;
}
