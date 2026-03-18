/*
 * XREFs of ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x140283308
 * Callers:
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x140193B4C (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401FD450 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

void __fastcall BLTQUEUE::GetScanLineEmulation(struct _KTHREAD **this, unsigned int *a2, unsigned __int8 *a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // r9
  __int64 v9; // r8
  LONGLONG v10; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 53, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v11);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = (__int64)this[62];
  v8 = 0;
  if ( v7 )
  {
    v9 = *((unsigned int *)this + 128);
    v10 = v9 * (PerformanceCounter.QuadPart - (__int64)this[61]) / v7;
    if ( ((_DWORD)this[134] & 2) != 0 )
    {
      if ( (unsigned int)v10 < (unsigned int)v9 )
        LODWORD(v9) = v10;
    }
    else
    {
      LODWORD(v9) = (unsigned int)v10 % (unsigned int)v9;
    }
    if ( (unsigned int)v9 < *((_DWORD *)this + 126) || (unsigned int)v9 > *((_DWORD *)this + 127) )
      v8 = 1;
    *a3 = v8;
    *a2 = v9;
  }
  else
  {
    *a2 = 0;
    *a3 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
