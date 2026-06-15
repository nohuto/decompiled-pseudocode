/*
 * XREFs of ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x180128D10
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801254A4 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x1801255AC (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180061260 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        __int64 a3)
{
  int v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  __int64 v7; // [rsp+68h] [rbp-30h]
  __int64 *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_1801D32B0 > 4 )
  {
    v4 = a3;
    v8 = &v4;
    v3 = a2;
    v6 = &v3;
    v7 = 4LL;
    v9 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801D32B0, byte_1801A8418, 0LL, 0LL, 4u, &v5);
  }
}
