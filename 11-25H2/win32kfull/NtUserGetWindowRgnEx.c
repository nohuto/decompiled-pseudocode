/*
 * XREFs of NtUserGetWindowRgnEx @ 0x140299860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     CalcVisRgn @ 0x1400319F0 (CalcVisRgn.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MirrorRegion @ 0x14004E3F4 (MirrorRegion.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     GreScaleRgnToDestLogPixel @ 0x14026DF64 (GreScaleRgnToDestLogPixel.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct tagWND *v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // r9d
  unsigned int RgnBox; // eax
  HRGN ExplicitClipRgn; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  HRGN v20; // [rsp+20h] [rbp-28h] BYREF
  __int128 v21; // [rsp+28h] [rbp-20h] BYREF

  v20 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v21, 1LL);
  v7 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_2;
  if ( (~((unsigned int)UserUnsafeIsCurrentProcessDwm(v6, v5, v8) != 0 ? 127 : 63) & a3) != 0 )
  {
    UserSetLastError(1004);
LABEL_2:
    v9 = 0;
    goto LABEL_28;
  }
  if ( !v20 )
  {
    v9 = 0;
    UserSetLastError(87);
    goto LABEL_28;
  }
  if ( (a3 & 2) != 0 )
  {
    v10 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    v21 = 0LL;
    if ( (a3 & 8) == 0 )
      v10 = 2 * (a3 & 4 | 0x4000200);
    v11 = v10 | 1;
    if ( (a3 & 0x10) != 0 )
      v11 = v10;
    v12 = v11 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v12 = v11;
    CalcVisRgn(&v20, (__int64)v7, v7, v12);
    RgnBox = GreGetRgnBox(v20, &v21);
  }
  else
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(v7);
    if ( !ExplicitClipRgn )
      goto LABEL_2;
    RgnBox = GreCombineRgn(v15, ExplicitClipRgn, 0LL, 5LL);
  }
  v9 = RgnBox;
  if ( !RgnBox )
    goto LABEL_2;
  v16 = *((_QWORD *)v7 + 5);
  if ( (*(_WORD *)(v16 + 42) & 0x2FFF) != 0x29D )
    v9 = GreOffsetRgn(v20, (unsigned int)-*(_DWORD *)(v16 + 88), (unsigned int)-*(_DWORD *)(v16 + 92));
  LOBYTE(v6) = ((a3 & 1) == 0) & (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) >> 6);
  if ( (_BYTE)v6 )
    MirrorRegion((__int64)v7, (unsigned __int64)v20, 0);
  if ( (a3 & 0x20) != 0 )
  {
    if ( PtiCurrent(v6, v16) )
    {
      if ( *((_QWORD *)PtiCurrent(v6, v17) + 62) )
      {
        v6 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v6, v18) + 62) + 8LL);
        if ( (*(_DWORD *)(v6 + 64) & 1) != 0 )
        {
          v6 = *((_QWORD *)v7 + 5);
          if ( (*(_DWORD *)(v6 + 288) & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v6 + 284), v20);
        }
      }
    }
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
