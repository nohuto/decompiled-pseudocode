/*
 * XREFs of GreGetNearestColor @ 0x14008EEF0
 * Callers:
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14008E530 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140090490 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x140090720 (ulGetNearestIndexFromColorref.c)
 *     ulIndexToRGB @ 0x140090D30 (ulIndexToRGB.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 SessionState; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // edx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v12; // [rsp+38h] [rbp-F0h]
  _BYTE v13[144]; // [rsp+90h] [rbp-98h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v11);
    v3 = *(_QWORD *)(v11[0] + 88LL);
    SessionState = W32GetSessionState(v4);
    v6 = *(_QWORD *)(v11[0] + 496LL);
    if ( v6 )
    {
      if ( v12 )
        v6 = v12;
    }
    else
    {
      v6 = *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4264LL);
    }
    if ( (*(_DWORD *)(v11[0] + 32LL) & 0xFFFFFFFD) != 0 )
      v7 = *(_QWORD *)(v6 + 128);
    else
      v7 = *(_QWORD *)(*(_QWORD *)(v11[0] + 48LL) + 1792LL);
    v8 = *(_DWORD *)(v11[0] + 120LL);
    if ( (v8 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v11[0] + 976LL) + 248LL) || (v8 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v7 || *(_DWORD *)(v7 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v7, v3, a2);
        a2 = ulIndexToRGB(v7, v3, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
  }
  else
  {
    a2 = -1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return a2;
}
