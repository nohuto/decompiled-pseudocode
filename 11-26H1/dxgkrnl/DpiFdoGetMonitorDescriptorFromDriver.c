/*
 * XREFs of DpiFdoGetMonitorDescriptorFromDriver @ 0x140241C14
 * Callers:
 *     DpiGetWholeMonitorDescriptor @ 0x140094D34 (DpiGetWholeMonitorDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x140429A24 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x140094528 (DpiDxgkDdiQueryMonitorDescriptor.c)
 */

__int64 __fastcall DpiFdoGetMonitorDescriptorFromDriver(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  int MonitorDescriptor; // ebx
  __int64 v9; // rax
  void *v10; // rbx
  int v11; // esi
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( *(_DWORD *)a3 == 1 || *(_DWORD *)a3 == 2 )
  {
    v6 = *((unsigned int *)a3 + 1);
    if ( !(_DWORD)v6 && !*((_QWORD *)a3 + 1) )
    {
      if ( !*(_QWORD *)(a1 + 6432) )
      {
        WdLogSingleEntry0(2LL);
        result = 3221225474LL;
        WdLogGlobalForLineNumber = 20645;
        return result;
      }
      v12 = *a3;
      MonitorDescriptor = DpiDxgkDdiQueryMonitorDescriptor(a1, a2, (int *)&v12);
      if ( MonitorDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL);
        result = (unsigned int)MonitorDescriptor;
        WdLogGlobalForLineNumber = 20656;
        return result;
      }
      if ( DWORD1(v12) )
      {
        v9 = operator new[](DWORD1(v12), 0x4B677844u, 256LL);
        v10 = (void *)v9;
        if ( !v9 )
        {
          WdLogSingleEntry1(6LL);
          result = 3221225626LL;
          WdLogGlobalForLineNumber = 20673;
          return result;
        }
        *((_QWORD *)&v12 + 1) = v9;
        v11 = DpiDxgkDdiQueryMonitorDescriptor(a1, v4, (int *)&v12);
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 20682;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
          return (unsigned int)v11;
        }
        *((_DWORD *)a3 + 1) = DWORD1(v12);
        *((_QWORD *)a3 + 1) = v10;
      }
      else
      {
        WdLogSingleEntry2(4LL, (int)v12, v4);
        WdLogGlobalForLineNumber = 20664;
      }
      return 0LL;
    }
    WdLogSingleEntry2(2LL, v6, *((_QWORD *)a3 + 1));
    WdLogGlobalForLineNumber = 20638;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 20632;
  }
  return 3221225485LL;
}
