/*
 * XREFs of BiDeleteElement @ 0x1409A1958
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x1407E6654 (PopBcdCopyLoaderObjectSettings.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14081C344 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14089A308 (BiHandleFirmwareDefaultEntry.c)
 *     PopBcdClearPendingResume @ 0x1409A18D8 (PopBcdClearPendingResume.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     _ultow_s @ 0x14053DA00 (_ultow_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409A570C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409A594C (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 */

__int64 __fastcall BiDeleteElement(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  HANDLE v11; // rdi
  int v12; // eax
  unsigned int v14; // r8d
  HANDLE v15; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v16 = a2;
  v2 = 2;
  BiLogMessage(2LL, L"Deleting element %08x", a2);
  LOBYTE(v5) = a1 & 1;
  v6 = BiAcquireBcdSyncMutant(v5);
  if ( v6 < 0 )
  {
    BiLogMessage(4LL, L"BiDeleteElement: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v6);
    return v14;
  }
  else
  {
    v15 = 0LL;
    Handle = 0LL;
    v7 = BiOpenKey(a1, L"Elements", 131097LL, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for all object's elements. Status: %x", (unsigned int)v7);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = BiOpenKey(v15, DstBuf, 0x10000LL, &Handle);
      if ( v10 < 0 )
      {
        if ( v10 != -1073741772 )
          v2 = 4;
        BiLogMessage(v2, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v10);
        v11 = Handle;
        v8 = -1073741275;
      }
      else
      {
        v11 = Handle;
        v12 = BiDeleteKey(Handle);
        v8 = v12;
        if ( v12 >= 0 )
          v11 = 0LL;
        else
          BiLogMessage(4LL, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v12);
      }
      if ( v11 )
        BiCloseKey(v11);
    }
    if ( v15 )
      BiCloseKey(v15);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v16) )
        BiSetFirmwareModifiedFromObject(a1);
    }
    LOBYTE(v9) = a1 & 1;
    BiReleaseBcdSyncMutant(v9);
    return (unsigned int)v8;
  }
}
