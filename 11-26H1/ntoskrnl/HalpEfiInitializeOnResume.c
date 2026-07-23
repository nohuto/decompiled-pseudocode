/*
 * XREFs of HalpEfiInitializeOnResume @ 0x1405894D4
 * Callers:
 *     HalInitializeOnResume @ 0x140512000 (HalInitializeOnResume.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpSetResumeTime @ 0x140596FB4 (HalpSetResumeTime.c)
 */

__int64 __fastcall HalpEfiInitializeOnResume(__int64 a1, __int64 a2)
{
  int v3; // edx

  if ( !a1 || !a2 || *(_DWORD *)(a1 + 40) < 0x90u )
  {
    v3 = -1073741811;
LABEL_19:
    KeBugCheckEx(0x5Cu, 0x5000uLL, v3, 1uLL, 0LL);
  }
  HalpSetResumeTime(a2, 0LL);
  v3 = *(_DWORD *)(a2 + 112);
  if ( v3 < 0 )
    goto LABEL_19;
  if ( HalEfiRuntimeServicesBlock[0] != *(_QWORD *)a2
    || qword_141201878 != *(_QWORD *)(a2 + 8)
    || qword_141201880 != *(_QWORD *)(a2 + 80)
    || qword_141201888 != *(_QWORD *)(a2 + 48)
    || qword_141201898 != *(_QWORD *)(a2 + 64)
    || qword_141201890 != *(_QWORD *)(a2 + 56)
    || qword_1412018A0 != *(_QWORD *)(a2 + 88)
    || qword_1412018A8 != *(_QWORD *)(a2 + 96)
    || qword_1412018B0 != *(_QWORD *)(a2 + 104) )
  {
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Queue) )
      KeBugCheckEx(0x5Cu, 0x5001uLL, 0xFFFFFFFFC0000018uLL, 1uLL, 0LL);
    HalEfiRuntimeServicesBlock[0] = *(_QWORD *)a2;
    qword_141201878 = *(_QWORD *)(a2 + 8);
    qword_141201880 = *(_QWORD *)(a2 + 80);
    qword_141201888 = *(_QWORD *)(a2 + 48);
    qword_141201898 = *(_QWORD *)(a2 + 64);
    qword_141201890 = *(_QWORD *)(a2 + 56);
    qword_1412018A0 = *(_QWORD *)(a2 + 88);
    qword_1412018A8 = *(_QWORD *)(a2 + 96);
    qword_1412018B0 = *(_QWORD *)(a2 + 104);
  }
  return (unsigned int)v3;
}
