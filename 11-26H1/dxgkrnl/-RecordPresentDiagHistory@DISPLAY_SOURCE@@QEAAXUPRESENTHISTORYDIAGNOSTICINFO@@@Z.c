/*
 * XREFs of ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x14000C074
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DISPLAY_SOURCE::RecordPresentDiagHistory(__int64 a1, _OWORD *a2)
{
  DXGFASTMUTEX *v4; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  DXGFASTMUTEX *v12; // [rsp+60h] [rbp-18h] BYREF
  char v13; // [rsp+68h] [rbp-10h]

  v13 = 0;
  v12 = (DXGFASTMUTEX *)(a1 + 3808);
  if ( a1 == -3808 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          628,
          v8,
          v9,
          0,
          2,
          -1,
          (__int64)L"m_pMutex != NULL",
          628LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( DXGFASTMUTEX::IsOwner(v12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          635,
          v10,
          v11,
          0,
          2,
          -1,
          (__int64)L"!m_pMutex->IsOwner()",
          635LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  *(_OWORD *)(a1 + 16 * ((unsigned int)(*(_DWORD *)(a1 + 4016))++ + 241LL)) = *a2;
  if ( *(_DWORD *)(a1 + 4016) >= 0xAu )
    *(_DWORD *)(a1 + 4016) = 0;
  if ( v13 )
  {
    v4 = v12;
    v13 = 0;
    if ( *((struct _KTHREAD **)v12 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v12, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v4 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            556,
            v6,
            v7,
            0,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            556LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( (*((_DWORD *)v4 + 8))-- == 1 )
    {
      *((_QWORD *)v4 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v4 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
