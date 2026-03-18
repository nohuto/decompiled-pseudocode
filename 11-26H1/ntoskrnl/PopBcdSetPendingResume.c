/*
 * XREFs of PopBcdSetPendingResume @ 0x140B4C7C4
 * Callers:
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopBcdSetupResumeObject @ 0x1409D2FAC (PopBcdSetupResumeObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409D3F80 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 */

__int64 __fastcall PopBcdSetPendingResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ObjectIdentifier; // ebx
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  void *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r8
  int v15; // [rsp+30h] [rbp-30h] BYREF
  void *v16; // [rsp+38h] [rbp-28h] BYREF
  GUID v17; // [rsp+40h] [rbp-20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  ObjectIdentifier = PopBcdSetupResumeObject(a4);
  if ( ObjectIdentifier >= 0 )
  {
    LOWORD(v15) = (_BYTE)KdDebuggerEnabled != 0;
    BcdSetElementDataWithFlags(a4, 0x26000006u, v7, &v15, 2u);
    v8 = BiAcquireBcdSyncMutant(a4 & 1);
    ObjectIdentifier = v8;
    if ( v8 >= 0 )
    {
      ObjectIdentifier = BiGetObjectIdentifier(a4, &v17);
      BiReleaseBcdSyncMutant(a4 & 1);
      if ( ObjectIdentifier >= 0 )
      {
        v9 = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR.Data1, &v16);
        v11 = v16;
        ObjectIdentifier = v9;
        if ( v9 >= 0 )
        {
          ObjectIdentifier = BcdSetElementDataWithFlags((__int64)v16, 0x23000006u, v10, &v17, 0x10u);
          if ( ObjectIdentifier >= 0 )
          {
            LOWORD(v15) = 1;
            ObjectIdentifier = BcdSetElementDataWithFlags((__int64)v11, 0x26000005u, v12, &v15, 2u);
            if ( ObjectIdentifier >= 0 )
            {
              LOWORD(v15) = (unsigned __int8)byte_140F0FDA0;
              ObjectIdentifier = BcdSetElementDataWithFlags((__int64)v11, 0x26000025u, v13, &v15, 2u);
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
