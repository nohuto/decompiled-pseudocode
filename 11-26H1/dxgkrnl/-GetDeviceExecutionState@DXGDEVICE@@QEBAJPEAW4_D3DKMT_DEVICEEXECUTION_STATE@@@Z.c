/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x140364F70
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x140365BB4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x140075AB0 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v4; // ebp
  enum _D3DKMT_DEVICEEXECUTION_STATE v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // ecx
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0;
  v4 = 0;
  v5 = D3DKMT_DEVICEEXECUTION_ACTIVE;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10621;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pExecutionState != NULL", 10621LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_DWORD *)this + 152);
  if ( v6 == 1 )
  {
    if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    {
      v9 = *(_DWORD *)(*((_QWORD *)this + 60) + 16LL);
      v10 = v9 & 0x80000000;
      v11 = v9 & 0x7FFFFFFF;
      v13 = v11;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL)
                                                    + 208LL))(
             *((_QWORD *)this + 100),
             &v13);
      v10 = v13 & 0x80000000;
      v13 &= ~0x80000000;
      v11 = v13;
      if ( (v4 & 0x80000000) != 0 )
        return v4;
    }
    if ( v11 )
    {
      switch ( v11 )
      {
        case 2:
        case 11:
        case 12:
        case 13:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          return v4;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          return v4;
        case 7:
          goto LABEL_18;
        case 9:
        case 10:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 24:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
          return v4;
        case 14:
        case 22:
        case 25:
        case 26:
          goto LABEL_8;
        case 27:
          if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_8;
          goto LABEL_20;
        default:
LABEL_20:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10720;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Unexpected device error!", 10720LL, 0LL, 0LL, 0LL, 0LL);
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          break;
      }
    }
    else
    {
      if ( v10 || *((_BYTE *)this + 73) )
        v5 = D3DKMT_DEVICEEXECUTION_RESET;
      *a2 = v5;
    }
  }
  else
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10732;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Unexpected device execution state!",
            10732LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_8:
        *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      }
      else
      {
LABEL_18:
        *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      }
    }
    else
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
    }
  }
  return v4;
}
