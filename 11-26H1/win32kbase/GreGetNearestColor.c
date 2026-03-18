/*
 * XREFs of GreGetNearestColor @ 0x14003AA70
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 * Callees:
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B480 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14003FDEC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1400FC3E0 (ulGetNearestIndexFromColorref.c)
 *     ulIndexToRGB @ 0x140117310 (ulIndexToRGB.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 SessionState; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // edx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v12[3]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v13; // [rsp+38h] [rbp-100h]
  _BYTE v14[160]; // [rsp+90h] [rbp-A8h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v12);
    v3 = *(_QWORD *)(v12[0] + 88LL);
    SessionState = W32GetSessionState(v4);
    v6 = *(_QWORD *)(v12[0] + 496LL);
    if ( v6 )
    {
      if ( v13 )
        v6 = v13;
    }
    else
    {
      v6 = *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4376LL);
    }
    v7 = *(_DWORD *)(v12[0] + 32LL);
    if ( v7 == 2 || !v7 )
      v8 = *(_QWORD *)(*(_QWORD *)(v12[0] + 48LL) + 1792LL);
    else
      v8 = *(_QWORD *)(v6 + 128);
    v9 = *(_DWORD *)(v12[0] + 120LL);
    if ( (v9 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v12[0] + 976LL) + 248LL) || (v9 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v8 || *(_DWORD *)(v8 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v8, v3, a2, 1LL);
        a2 = ulIndexToRGB(v8, v3, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v14);
  }
  else
  {
    a2 = -1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return a2;
}
