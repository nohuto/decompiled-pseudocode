/*
 * XREFs of ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E36C0
 * Callers:
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E3FB4 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::IncrementCurrentUsage(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  _WORD *v2; // r9
  __int64 v3; // r11
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rcx

  v2 = **(_WORD ***)a2;
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 304LL * ((*(_DWORD *)(*(_QWORD *)v2 + 52LL) >> 2) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (*((_DWORD *)v2 + 6) & 0xF000) == 0x2000 )
    v5 = 0;
  else
    v5 = (unsigned __int8)HIBYTE(v2[12]) >> 4;
  *(_QWORD *)(v4 + 8LL * v5 + 80) += *(_QWORD *)(v3 + 16);
  v6 = (*((_DWORD *)v2 + 6) >> 8) & 0xF;
  *(_QWORD *)(v4 + 8 * v6 + 144) += *(_QWORD *)(v3 + 16);
}
