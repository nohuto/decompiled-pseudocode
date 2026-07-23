/*
 * XREFs of PopBcdSetPendingResume @ 0x140B4E554
 * Callers:
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopBcdSetupResumeObject @ 0x1409A3F8C (PopBcdSetupResumeObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409A4F60 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 */

__int64 __fastcall PopBcdSetPendingResume(HANDLE BcdStoreHandle, __int64 a2, __int64 a3, __int64 a4)
{
  int ObjectIdentifier; // ebx
  BCD_FLAGS v7; // r8d
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  BCD_FLAGS v10; // r8d
  HANDLE v11; // rdi
  BCD_FLAGS v12; // r8d
  BCD_FLAGS v13; // r8d
  __int16 Buffer; // [rsp+30h] [rbp-30h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-28h] BYREF
  GUID v17; // [rsp+40h] [rbp-20h] BYREF

  v17 = 0LL;
  BcdObjectHandle = 0LL;
  ObjectIdentifier = PopBcdSetupResumeObject((HANDLE)a4);
  if ( ObjectIdentifier >= 0 )
  {
    Buffer = (_BYTE)KdDebuggerEnabled != 0;
    BcdSetElementDataWithFlags((HANDLE)a4, 0x26000006u, v7, &Buffer, 2u);
    v8 = BiAcquireBcdSyncMutant(a4 & 1);
    ObjectIdentifier = v8;
    if ( v8 >= 0 )
    {
      ObjectIdentifier = BiGetObjectIdentifier(a4, &v17);
      BiReleaseBcdSyncMutant(a4 & 1);
      if ( ObjectIdentifier >= 0 )
      {
        v9 = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
        v11 = BcdObjectHandle;
        ObjectIdentifier = v9;
        if ( v9 >= 0 )
        {
          ObjectIdentifier = BcdSetElementDataWithFlags(BcdObjectHandle, 0x23000006u, v10, &v17, 0x10u);
          if ( ObjectIdentifier >= 0 )
          {
            Buffer = 1;
            ObjectIdentifier = BcdSetElementDataWithFlags(v11, 0x26000005u, v12, &Buffer, 2u);
            if ( ObjectIdentifier >= 0 )
            {
              Buffer = (unsigned __int8)byte_140F10920;
              ObjectIdentifier = BcdSetElementDataWithFlags(v11, 0x26000025u, v13, &Buffer, 2u);
              if ( ObjectIdentifier >= 0 )
                ObjectIdentifier = 0;
            }
          }
        }
        if ( v11 )
          BcdCloseObject(v11);
      }
    }
    else
    {
      BiLogMessage(4LL, L"BcdQueryObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
    }
  }
  return (unsigned int)ObjectIdentifier;
}
