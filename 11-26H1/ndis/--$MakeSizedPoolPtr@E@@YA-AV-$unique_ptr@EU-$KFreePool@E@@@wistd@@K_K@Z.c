/*
 * XREFs of ??$MakeSizedPoolPtr@E@@YA?AV?$unique_ptr@EU?$KFreePool@E@@@wistd@@K_K@Z @ 0x14013A698
 * Callers:
 *     ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x14008DD50 (-EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<unsigned char>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE *Pool2; // rax

  Pool2 = (_BYTE *)ExAllocatePool2(64LL, a3, 1634092110LL);
  if ( Pool2 )
  {
    *Pool2 = 0;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)a1,
      (__int64)Pool2);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
  }
  return a1;
}
