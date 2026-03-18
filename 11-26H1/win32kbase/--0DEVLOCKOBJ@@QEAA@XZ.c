/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14003FDEC
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14003FFF0 (--0XDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 **v10; // rax
  int (*v11)(void); // rax
  __int64 v12; // rcx
  void (__fastcall *v13)(DEVLOCKOBJ *, _QWORD); // rax
  DEVLOCKOBJ *result; // rax

  v1 = (unsigned __int64)this + 32;
  XDCOBJ::XDCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 64);
  v5 = (__int64 *)((char *)this + 96);
  *((_OWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  if ( this != (DEVLOCKOBJ *)-96LL )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v4, v3);
    if ( CurrentThreadWin32Thread )
      v7 = *CurrentThreadWin32Thread;
    else
      v7 = 0LL;
    v8 = v7 + 8;
    *((_QWORD *)this + 14) = v1 & -(__int64)((DEVLOCKOBJ *)((char *)this + 96) != 0LL);
    v4 = -v7;
    v9 = v8 & -(__int64)(v4 != 0);
    *((_QWORD *)this + 15) = UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic;
    if ( v9 )
    {
      v10 = (__int64 **)(v9 + 88);
      v4 = *(_QWORD *)(v9 + 88);
      if ( *(_QWORD *)(v4 + 8) != v9 + 88 )
        __fastfail(3u);
      *v5 = v4;
      *((_QWORD *)this + 13) = v10;
      *(_QWORD *)(v4 + 8) = v5;
      *v10 = v5;
    }
    else
    {
      *((_QWORD *)this + 13) = (char *)this + 96;
      *v5 = (__int64)v5;
    }
  }
  *((_WORD *)this + 64) = 256;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 768LL);
  if ( v11 )
  {
    if ( v11() >= 0 )
    {
      v13 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 24) + 776LL);
      if ( v13 )
        v13(this, 0LL);
    }
  }
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
