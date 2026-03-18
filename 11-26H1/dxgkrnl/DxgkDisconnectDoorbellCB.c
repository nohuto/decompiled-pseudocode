/*
 * XREFs of DxgkDisconnectDoorbellCB @ 0x1401E4000
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x140030B4C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ?Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z @ 0x1401E181C (-Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z.c)
 */

__int64 __fastcall DxgkDisconnectDoorbellCB(int *a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  BOOL v6; // r8d
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1[3];
  if ( v1 == 3 || v1 == 2 )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL);
    v6 = !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v9,
      *(struct DXGDEVICE **)(*(_QWORD *)(v4 + 16) + 16LL),
      v6);
    v7 = *(_QWORD *)(v4 + 152);
    if ( v7 )
    {
      if ( (unsigned int)**(_QWORD **)(v7 + 136) <= 1 )
      {
        v3 = DXGDOORBELL::Disconnect(*(_QWORD *)(v4 + 152), a1[3]);
      }
      else
      {
        WdLogSingleEntry2(3LL, v4, 0LL);
        v3 = 0;
        WdLogGlobalForLineNumber = 4481;
      }
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry2(3LL, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 4473;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry2(3LL, a1[3], -1073741811LL);
    WdLogGlobalForLineNumber = 4456;
  }
  return v3;
}
