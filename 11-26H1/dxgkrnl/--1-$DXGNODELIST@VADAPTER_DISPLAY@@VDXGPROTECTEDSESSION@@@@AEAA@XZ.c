/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x140058930
 * Callers:
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x14007BC90 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1401A0E90 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1401A5954 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x140395514 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1403A76E4 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403C3748 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>(
        _QWORD *a1)
{
  __int64 result; // rax
  int v2; // r8d

  if ( (_QWORD *)*a1 != a1 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 825;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 0,
                 825,
                 v2,
                 0LL,
                 2,
                 -1,
                 (__int64)L"IsEmpty()",
                 825LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
  }
  return result;
}
