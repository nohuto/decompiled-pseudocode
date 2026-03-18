/*
 * XREFs of ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x140287180
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall SysMmIterateHardwareReservedRanges(
        struct SYSMM_ADAPTER *a1,
        int (*a2)(unsigned __int64, unsigned __int64, void *),
        void *a3)
{
  __int64 i; // rbx
  __int64 **v7; // rdi
  __int64 *j; // rbx
  unsigned __int64 LogicalAddress; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 7); i = (unsigned int)(i + 1) )
    ((void (__fastcall *)(_QWORD, _QWORD, void *))a2)(
      *(_QWORD *)(*((_QWORD *)a1 + 46) + 24 * i),
      *(_QWORD *)(*((_QWORD *)a1 + 46) + 24 * i + 8),
      a3);
  v7 = (__int64 **)((char *)a1 + 40);
  for ( j = *v7; j != (__int64 *)v7; j = (__int64 *)*j )
  {
    LogicalAddress = SmmGetLogicalAddress((const struct SYSMM_LOGICAL_BLOCK *)j[3]);
    if ( LogicalAddress
      && !*((_BYTE *)j + 36)
      && ((int (__fastcall *)(unsigned __int64, _QWORD, void *))a2)(LogicalAddress, *(j - 8), a3) >= 0 )
    {
      *((_BYTE *)j + 36) = 1;
    }
  }
}
