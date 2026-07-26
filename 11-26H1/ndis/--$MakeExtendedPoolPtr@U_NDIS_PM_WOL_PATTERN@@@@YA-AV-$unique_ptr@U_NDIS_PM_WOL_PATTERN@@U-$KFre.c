/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x140142A04
 * Callers:
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B9680 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140066320 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  _QWORD *v5; // rbx
  unsigned int v6; // esi
  void *Pool2; // rax
  __int64 v8; // rbp
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  v5 = a1;
  if ( a4 )
    *a4 = 0;
  v6 = a3 + 196;
  if ( a3 >= 0xFFFFFF3C )
    goto LABEL_9;
  Pool2 = (void *)ExAllocatePool2(64LL, v6, 2021082190LL);
  v8 = (__int64)Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xC4uLL);
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)&P,
      v8);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&P);
  }
  if ( !P )
  {
    a1 = v5;
LABEL_9:
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
    return v5;
  }
  if ( a4 )
    *a4 = v6;
  wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
    v5,
    (__int64 *)&P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v5;
}
