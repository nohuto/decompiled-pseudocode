/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402EA7B8
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 */

char __fastcall xxxDrawItemUnderline(__int64 **a1, __int64 a2, HDC a3, int a4, int a5, __m128i *SourceString, int a7)
{
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // r12
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  int v16; // r15d
  int v17; // eax
  __m128i *v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 DPIMetrics; // rax
  struct tagSIZE v23[5]; // [rsp+30h] [rbp-28h] BYREF

  v11 = PtiCurrent((__int64)a1, a2);
  v13 = v11;
  if ( a7 == 0xFFFF )
    return (char)v11;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF )
    goto LABEL_6;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 744) & 0xF) != 0 )
  {
LABEL_6:
    if ( a7 )
    {
      v23[0] = 0LL;
      if ( (unsigned int)CALL_LPK(v13) )
      {
        xxxClientGetTextExtentPointW(a3, (PCWSTR)SourceString, a7, v23);
        v15 = (__int64)a1[2];
        if ( !v15 )
          v15 = **a1;
        LOBYTE(v11) = MNIspItemValid(v15, a2);
        if ( !(_BYTE)v11 )
          return (char)v11;
      }
      else
      {
        GreGetTextExtentW(a3, SourceString, (unsigned int)a7, v23);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v23[0].cx - *(_DWORD *)(GetDPIMetrics() + 16);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_23:
    DPIMetrics = GetDPIMetrics();
    LOBYTE(v11) = GrePatBlt(a3, v16, *(_DWORD *)(DPIMetrics + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
    return (char)v11;
  }
  v23[0] = 0LL;
  v17 = CALL_LPK(v13);
  v18 = (__m128i *)((char *)SourceString + 2 * a7);
  if ( v17 )
  {
    xxxClientGetTextExtentPointW(a3, (PCWSTR)v18, 1, v23);
    v19 = (__int64)a1[2];
    if ( !v19 )
      v19 = **a1;
    LOBYTE(v11) = MNIspItemValid(v19, a2);
    v20 = (_BYTE)v11 == 0;
  }
  else
  {
    LODWORD(v11) = GreGetTextExtentW(a3, v18, 1LL, v23);
    v20 = (_DWORD)v11 == 0;
  }
  if ( !v20 )
  {
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v23[0].cx - *(_DWORD *)(GetDPIMetrics() + 16);
    goto LABEL_23;
  }
  return (char)v11;
}
