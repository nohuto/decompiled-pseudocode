/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684
 * Callers:
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 * Callees:
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1400416A8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     FindCharPosition @ 0x1401922F0 (FindCharPosition.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     GreGetTextCharacterExtra @ 0x140311E10 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140311E58 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU ***a1,
        struct tagWND *a2,
        unsigned int a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  struct tagITEM *v14; // rsi
  struct tagMENU *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct tagMENU *v18; // rcx
  struct tagMENU *v19; // rcx
  unsigned int v20; // r13d
  int v21; // edx
  struct tagMENU *v22; // rcx
  unsigned int *v23; // rax
  unsigned int CharPosition; // eax
  const WCHAR *v26; // r10
  struct tagMENU *v27; // rcx
  __int64 v28; // rax
  struct tagMENU *v29; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  HFONT v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  bool v36; // zf
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  struct tagMENU *v40; // rcx
  int v41; // eax
  HFONT v42; // [rsp+30h] [rbp-58h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v14 = a5;
  v42 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    v33 = *(HFONT *)(GetDPIMETRICSForDpi(a3) + 48);
    if ( v33 )
    {
      v42 = (HFONT)GreSelectFont(a4, v33);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3, v34);
      GetDPIMETRICSForDpi(a3);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v15 = (struct tagMENU *)a1[2];
  if ( !v15 )
    v15 = **a1;
  v16 = MNIsOwnerDrawItem(v15, v14);
  v17 = *(_QWORD *)v14;
  a6 = v16;
  if ( *(_QWORD *)(v17 + 96) )
  {
    v27 = (struct tagMENU *)a1[2];
    if ( !v27 )
      v27 = **a1;
    if ( !(unsigned int)MNIsUAHMenu(v27) )
    {
LABEL_42:
      v28 = *(_QWORD *)v14;
      if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) == -1LL )
        goto LABEL_43;
      if ( *(_DWORD *)(v28 + 104) == -1 )
      {
        if ( (*(_DWORD *)(v28 + 4) & 0x20000000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)v14 + 104LL) = GetDpiDependentMetric(25LL, a3);
          *(_DWORD *)(*(_QWORD *)v14 + 108LL) = GetDpiDependentMetric(26LL, a3);
          if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) == 1LL )
            *(_DWORD *)(*(_QWORD *)v14 + 104LL) += 2;
        }
        else
        {
          v40 = (struct tagMENU *)a1[2];
          if ( !v40 )
            v40 = **a1;
          if ( (unsigned int)MNIsUAHMenu(v40) )
          {
LABEL_43:
            xxxMNGetBitmapSize(a1, (__int64 *)v14, a2, a3, (__int64)a4);
            v29 = (struct tagMENU *)a1[2];
            if ( !v29 )
              v29 = **a1;
            if ( !(unsigned __int8)MNIspItemValid(v29, v14) )
              goto LABEL_17;
            goto LABEL_46;
          }
          if ( (unsigned int)GreExtGetObjectW(*(HSURF *)(*(_QWORD *)v14 + 96LL)) )
          {
            *(_DWORD *)(*(_QWORD *)v14 + 104LL) = 0;
            v41 = 0;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)v14 + 104LL) = GetDpiDependentMetric(25LL, a3);
            v41 = GetDpiDependentMetric(26LL, a3);
          }
          *(_DWORD *)(*(_QWORD *)v14 + 108LL) = v41;
        }
      }
LABEL_46:
      v9 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      if ( *((_DWORD *)**a1 + 18) > v9 )
        v21 = *((_DWORD *)**a1 + 18);
      else
        v21 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      *((_DWORD *)**a1 + 18) = v21;
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      else if ( *(_DWORD *)(*(_QWORD *)v14 + 108LL) > DpiDependentMetric )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      v20 = a6;
      if ( a6 )
        goto LABEL_23;
      goto LABEL_29;
    }
    v30 = *(_DWORD *)(*(_QWORD *)v14 + 96LL);
    if ( v30 > 7 )
    {
      v38 = v30 - 8;
      if ( !v38 )
        goto LABEL_52;
      v39 = v38 - 1;
      if ( !v39 )
        goto LABEL_52;
      v37 = v39 - 1;
      v36 = v37 == 0;
    }
    else
    {
      if ( v30 == 7 )
        goto LABEL_52;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_52;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_52;
      v35 = v32 - 1;
      if ( !v35 )
        goto LABEL_52;
      v37 = v35 - 2;
      v36 = v37 == 0;
    }
    if ( !v36 && v37 != 1 )
      goto LABEL_42;
LABEL_52:
    v16 = a6;
  }
  if ( !v16 )
  {
    v20 = a6;
LABEL_29:
    if ( *((_QWORD *)v14 + 3) )
    {
      a5 = 0LL;
      if ( v7 && DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 28) )
        DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 28);
      CharPosition = FindCharPosition(*((_QWORD *)v14 + 3), 9LL);
      xxxPSMGetTextExtent(a4, v26, CharPosition, &a5);
      if ( v9 )
        v9 += (_DWORD)a5 + 2;
      else
        v9 = (unsigned int)a5;
    }
    if ( v7 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 0x4000000) != 0 || *(int *)(*((_QWORD *)**a1 + 5) + 40LL) >= 0 )
        v9 += *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
      v9 += 6;
      DpiDependentMetric += 2;
    }
    goto LABEL_23;
  }
  xxxMNGetBitmapSize(a1, (__int64 *)v14, a2, a3, (__int64)a4);
  v18 = (struct tagMENU *)a1[2];
  if ( !v18 )
    v18 = **a1;
  if ( !(unsigned __int8)MNIspItemValid(v18, v14) )
  {
LABEL_17:
    v20 = a6;
    goto LABEL_27;
  }
  v9 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
  if ( v7 )
  {
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
    v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 8);
  }
  else
  {
    v19 = (struct tagMENU *)a1[2];
    if ( !v19 )
      v19 = **a1;
    if ( (unsigned int)MNIsUAHMenu(v19) )
      DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
  }
  v20 = a6;
LABEL_23:
  v22 = (struct tagMENU *)a1[2];
  if ( !v22 )
    v22 = **a1;
  if ( (unsigned __int8)MNIspItemValid(v22, v14) && (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
  {
    if ( v42 )
      GreSelectFont(a4, v42);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_27:
  v23 = a7;
  a7[1] = DpiDependentMetric;
  *v23 = v9;
  return v20;
}
