/*
 * XREFs of GreSetLWContentOwner @ 0x1403112C4
 * Callers:
 *     ChangeWindowBitmapOwner @ 0x140287900 (ChangeWindowBitmapOwner.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140057D28 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     GreSetBitmapContentOwner @ 0x14005D9DC (GreSetBitmapContentOwner.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z @ 0x14008E500 (--0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401A16C0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetLWContentOwner(Gre::Base *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  HDEV HDEV; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  HDEV = (HDEV)UserGetHDEV();
  ENTER_DWM_CRIT_SPECIAL::ENTER_DWM_CRIT_SPECIAL((ENTER_DWM_CRIT_SPECIAL *)v15, v6, HDEV, 1);
  if ( IsDwmActive(v8) )
  {
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v16, (HWND)a1);
    v9 = v16;
    if ( v16 )
    {
      v10 = *(_QWORD *)(v16 + 144);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 184);
        v5 = 1;
        v12 = v11 - 24;
        v13 = -v11;
        if ( (v12 & -(__int64)(v13 != 0)) != 0 )
          v5 = GreSetBitmapContentOwner(*(HSURF *)(v12 & -(__int64)(v13 != 0)), -1LL, a3);
      }
      if ( v9 )
        DEC_SHARE_REF_CNT(v9);
    }
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v15);
  return v5;
}
