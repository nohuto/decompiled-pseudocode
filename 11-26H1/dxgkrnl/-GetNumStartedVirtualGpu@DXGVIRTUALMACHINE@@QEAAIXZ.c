/*
 * XREFs of ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1400831C8
 * Callers:
 *     NtDxgkRegisterVailProcess @ 0x140210A80 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(struct _KTHREAD **this)
{
  unsigned int v2; // edi
  __int64 **v3; // rbx
  __int64 *i; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v6, this + 12);
  v2 = 0;
  v3 = (__int64 **)(this + 5);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 16) && *((_BYTE *)i + 37) )
      ++v2;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
  return v2;
}
