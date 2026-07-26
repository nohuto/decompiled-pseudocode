/*
 * XREFs of NdisInitializeWrapper @ 0x1400DC1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  PVOID v5; // rsi
  _QWORD *Pool2; // rax
  int v8; // edx
  size_t v9; // r8

  v5 = SystemSpecific1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(SystemSpecific1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)SystemSpecific1,
      1,
      10,
      (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids);
  }
  *NdisWrapperHandle = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, *(unsigned __int16 *)SystemSpecific2 + 26LL, 1752646734LL);
  if ( Pool2 )
  {
    *NdisWrapperHandle = Pool2;
    v9 = *(unsigned __int16 *)SystemSpecific2;
    *Pool2 = v5;
    Pool2[2] = Pool2 + 3;
    *((_WORD *)Pool2 + 4) = v9;
    *((_WORD *)Pool2 + 5) = v9 + 2;
    memmove(Pool2 + 3, *((const void **)SystemSpecific2 + 1), v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      11,
      (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids);
  }
}
