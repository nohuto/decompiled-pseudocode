/*
 * XREFs of UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14001CF0C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003D300 (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x14001D07C (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x14001D1C4 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14001D4A4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddDropEndpoints(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rax
  _DWORD *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax

  UsbDevice_InitializeInputContextCommon();
  v6 = 0;
  if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741595;
LABEL_13:
    v7 = UsbDevice_InitializeInputContextForDropEndpoints(a1, a2);
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_4;
  }
  v7 = UsbDevice_InitializeInputContextForAddEndpoints(a1, a2);
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( a3 <= 1 )
    goto LABEL_13;
LABEL_4:
  v8 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
  if ( v8 )
    v9 = *(_DWORD **)(v8 + 16);
  else
    v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 160) & ~*v9;
  v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 104LL) & 4) != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 160) = v10;
  v12 = v9[1] | v10;
  *(_DWORD *)(a1 + 160) = v12;
  do
  {
    if ( _bittest(&v12, v6) )
    {
      *(_DWORD *)((char *)v9 + v11 + 32) = (v6 << 27) | *(_DWORD *)((char *)v9 + v11 + 32) & 0x7FFFFFF;
      v12 = *(_DWORD *)(a1 + 160);
    }
    ++v6;
  }
  while ( v6 < 0x20 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0xCu,
      0x3Cu,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 143),
      *(_DWORD *)((char *)v9 + v11 + 32) >> 27);
  return (unsigned int)v7;
}
