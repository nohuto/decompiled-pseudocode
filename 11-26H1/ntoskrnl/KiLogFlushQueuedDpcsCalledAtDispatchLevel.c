/*
 * XREFs of KiLogFlushQueuedDpcsCalledAtDispatchLevel @ 0x1405F3B14
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlPcToFileImageInfo @ 0x14040DB90 (RtlPcToFileImageInfo.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall KiLogFlushQueuedDpcsCalledAtDispatchLevel(unsigned __int64 a1)
{
  int v2; // ebx
  unsigned int v3; // r8d
  __int64 v4; // r8
  unsigned __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[20]; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+74h] [rbp-8Ch]
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  wchar_t *Buffer; // [rsp+90h] [rbp-70h]
  _QWORD v15[7]; // [rsp+98h] [rbp-68h] BYREF
  char v16; // [rsp+D0h] [rbp-30h] BYREF

  v10 = 0;
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  v12 = 0LL;
  *(_DWORD *)v9 = 40;
  DestinationString.Buffer = (wchar_t *)&v16;
  p_DestinationString = &DestinationString;
  *(_OWORD *)&v9[4] = 0LL;
  if ( (int)RtlPcToFileImageInfo(a1, (__int64)v9) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"unknown_module");
    v2 = 0;
  }
  else
  {
    v2 = a1 - *(_DWORD *)&v9[8];
  }
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140E06F58, 1LL) )
    {
      v5 = a1;
      v12 = &v5;
      v13 = 8LL;
      Buffer = (wchar_t *)&v6;
      v6 = 0x1000000LL;
      v15[0] = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06F58,
        (unsigned __int8 *)byte_1400496FF,
        0LL,
        0LL,
        4u,
        (PEVENT_DATA_DESCRIPTOR)v9);
      v3 = dword_140E06F58;
    }
    if ( v3 > 5 && tlgKeywordOn((__int64)&dword_140E06F58, 0x400000000000LL) )
    {
      v13 = 2LL;
      v12 = v15;
      Buffer = DestinationString.Buffer;
      v15[0] = DestinationString.Length;
      v15[1] = &v5;
      v15[3] = &v6;
      v15[5] = &v8;
      LODWORD(v5) = v2;
      v15[2] = 4LL;
      v6 = 1LL;
      v15[4] = 8LL;
      v8 = 0x1000000LL;
      v15[6] = 8LL;
      tlgWriteAgg((__int64)&dword_140E06F58, (unsigned __int8 *)&dword_140049684, v4, 7u, (PEVENT_DATA_DESCRIPTOR)v9);
    }
  }
}
