/*
 * XREFs of ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1400C9574
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vGuard(CAutoTGO *this, void *a2, void (*a3)(void *))
{
  __int64 v3; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v3 = 0LL;
  if ( !*((_DWORD *)this + 8) && a3 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this, a2);
    if ( CurrentThreadWin32Thread )
      v3 = *CurrentThreadWin32Thread;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 3) = a3;
    v8 = (v3 + 8) & -(__int64)(v3 != 0);
    if ( v8 )
    {
      v9 = (_QWORD *)(v8 + 88);
      v10 = *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58);
      if ( *(_QWORD **)(v10 + 8) != v9 )
        __fastfail(3u);
      *(_QWORD *)this = v10;
      *((_QWORD *)this + 1) = v9;
      *(_QWORD *)(v10 + 8) = this;
      *v9 = this;
    }
    else
    {
      *((_QWORD *)this + 1) = this;
      *(_QWORD *)this = this;
    }
    *((_DWORD *)this + 8) = 1;
  }
}
