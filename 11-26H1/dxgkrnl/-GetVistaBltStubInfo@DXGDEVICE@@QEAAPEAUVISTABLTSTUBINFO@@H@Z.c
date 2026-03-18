/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x14003EB68
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2)
{
  __int64 v4; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 245) )
    {
      v4 = operator new(0x10uLL, 0x4B677844u, 256LL);
      *((_QWORD *)this + 245) = v4;
      if ( !v4 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1105;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate Vista BLT stub info",
          1105LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 245);
}
