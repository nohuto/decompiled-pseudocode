/*
 * XREFs of DpiQueryIntegratedDescriptorWrapper @ 0x14006611C
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkGetDriverVersionNoLock @ 0x140195EE0 (DxgkGetDriverVersionNoLock.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x140245108 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x14024948C (DpiFdoValidateIntegratedDisplayDescriptor.c)
 */

__int64 __fastcall DpiQueryIntegratedDescriptorWrapper(__int64 a1)
{
  __int64 v1; // rbp
  int AdapterInfoIntegratedDisplay; // ebx
  int v4; // esi
  __int64 result; // rax
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rax
  void *Pool2; // rax
  __int64 v10; // rax
  int v11; // edx

  v1 = *(_QWORD *)(a1 + 64);
  AdapterInfoIntegratedDisplay = 0;
  v4 = 0;
  if ( *(_BYTE *)(v1 + 6440) == 1 )
  {
    WdLogSingleEntry1(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 1461;
  }
  else
  {
    v6 = *(_QWORD **)(v1 + 3600);
    while ( v6 != (_QWORD *)(v1 + 3600) )
    {
      v7 = v6 - 4;
      v6 = (_QWORD *)*v6;
      v8 = *((unsigned __int16 *)v7 + 46);
      if ( (_WORD)v8 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v8 + 128, 1953656900LL);
        v7[13] = Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL);
          result = 3221225626LL;
          WdLogGlobalForLineNumber = 1493;
          return result;
        }
        memset(Pool2, 0, *((unsigned __int16 *)v7 + 46) + 128LL);
        v10 = v7[13] + 128LL;
        v7[14] = v10;
        v7[15] = v10;
        if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v1 + 4032)) < 2400 )
        {
          AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v7);
          if ( AdapterInfoIntegratedDisplay < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1536;
            return (unsigned int)AdapterInfoIntegratedDisplay;
          }
        }
        else
        {
          AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v7);
          if ( AdapterInfoIntegratedDisplay < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1521;
            return (unsigned int)AdapterInfoIntegratedDisplay;
          }
        }
        result = DpiFdoValidateIntegratedDisplayDescriptor(v1, v7);
        AdapterInfoIntegratedDisplay = result;
        if ( (int)result < 0 )
          return result;
        v11 = 1 << *(_BYTE *)(v7[13] + 122LL);
        if ( (v11 & v4) != 0 )
        {
          WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v7[13] + 122LL), *((unsigned int *)v7 + 6));
          result = 3221225485LL;
          WdLogGlobalForLineNumber = 1552;
          return result;
        }
        v4 |= v11;
      }
    }
    *(_BYTE *)(v1 + 6440) = 1;
    if ( ((v4 + 1) & v4) != 0 )
    {
      AdapterInfoIntegratedDisplay = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1571;
    }
    return (unsigned int)AdapterInfoIntegratedDisplay;
  }
  return result;
}
