/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x140AE9900
 * Callers:
 *     PpDevCfgTraceDeviceStart @ 0x1409AF290 (PpDevCfgTraceDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x140498480 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     PnpGetLogString @ 0x1404F2AE8 (PnpGetLogString.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // r9
  int v4; // r8d
  char v5; // r10
  const wchar_t *v6; // r8
  wchar_t *Buffer; // rdx
  const wchar_t *v8; // r9
  const wchar_t *v9; // rcx
  unsigned __int16 v10; // cx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned __int16 Length; // cx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  int *LogString; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *v19; // r9
  char v20; // r10
  const wchar_t *v21; // rdx
  __int64 *v22; // rdx
  char v23; // r10
  const wchar_t *v24; // rdx
  const wchar_t *v25; // [rsp+38h] [rbp-C8h]
  const wchar_t *v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+48h] [rbp-B8h]
  char v28; // [rsp+50h] [rbp-B0h]
  PVOID v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v32[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  const DEVPROPKEY *v34; // [rsp+B0h] [rbp-50h] BYREF
  int v35; // [rsp+B8h] [rbp-48h]
  __int128 *v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp-30h]
  const DEVPROPKEY *v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+E0h] [rbp-20h]
  PVOID *v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+F4h] [rbp-Ch]
  int v43; // [rsp+F8h] [rbp-8h]
  const DEVPROPKEY *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  PVOID *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+11Ch] [rbp+1Ch]
  int v48; // [rsp+120h] [rbp+20h]
  const DEVPROPKEY *v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+130h] [rbp+30h]
  PVOID *v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+144h] [rbp+44h]
  int v53; // [rsp+148h] [rbp+48h]
  const DEVPROPKEY *v54; // [rsp+150h] [rbp+50h]
  int v55; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *p_DestinationString; // [rsp+160h] [rbp+60h]
  int v57; // [rsp+16Ch] [rbp+6Ch]
  int v58; // [rsp+170h] [rbp+70h]

  P[0] = 0LL;
  P[1] = 0LL;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v29[0] = 0LL;
  v29[1] = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v33 = 0LL;
  if ( (byte_140EF412A & 0x30) != 0x30 )
    return;
  memset_0(&v34, 0, 0xC8uLL);
  v42 = 6;
  v40 = 18;
  v34 = &DEVPKEY_Device_ClassGuid;
  v45 = 18;
  v36 = &v33;
  v47 = 6;
  v39 = &DEVPKEY_Device_DriverInfPath;
  v52 = 6;
  v41 = P;
  v44 = &DEVPKEY_Device_Service;
  v46 = v32;
  v49 = &DEVPKEY_Device_LowerFilters;
  v51 = v29;
  v54 = &DEVPKEY_Device_UpperFilters;
  p_DestinationString = &DestinationString;
  v57 = 6;
  v2 = *(_QWORD *)(a1 + 48);
  v35 = 13;
  v37 = 16;
  v50 = 8210;
  v55 = 8210;
  if ( (int)PiDevCfgQueryObjectProperties(8210, v2, 1, 0, (__int64)&v34, 5) >= 0 )
  {
    if ( v38 < 0 )
      v33 = 0LL;
    if ( v43 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
    if ( v48 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)v32, 0LL);
    if ( v53 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)v29, 0LL);
    if ( v58 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    v3 = 32;
    if ( v29[1] )
    {
      v10 = (unsigned __int16)v29[0];
      if ( LOWORD(v29[0]) > 4u )
      {
        v11 = 0;
        if ( (unsigned __int64)LOWORD(v29[0]) >> 1 != 2 )
        {
          v12 = 0LL;
          do
          {
            if ( !*((_WORD *)v29[1] + v12) )
            {
              *((_WORD *)v29[1] + v12) = 32;
              v10 = (unsigned __int16)v29[0];
            }
            v12 = ++v11;
          }
          while ( v11 < ((unsigned __int64)v10 >> 1) - 2 );
        }
        LOWORD(v29[0]) = v10 - 2;
      }
    }
    if ( DestinationString.Buffer )
    {
      Length = DestinationString.Length;
      if ( DestinationString.Length > 4u )
      {
        v14 = 0;
        if ( (unsigned __int64)DestinationString.Length >> 1 != 2 )
        {
          v15 = 0LL;
          do
          {
            if ( !DestinationString.Buffer[v15] )
            {
              DestinationString.Buffer[v15] = 32;
              Length = DestinationString.Length;
            }
            v15 = ++v14;
          }
          while ( v14 < ((unsigned __int64)Length >> 1) - 2 );
        }
        DestinationString.Length = Length - 2;
      }
    }
    v4 = 24576;
    if ( (*(_DWORD *)(a1 + 396) & 0x6000) == 0 )
      PipIsDevNodeDNStarted(a1);
    if ( (v4 & *(_DWORD *)(a1 + 396)) == 0 && (unsigned int)PipIsDevNodeDNStarted(a1) )
    {
      if ( (byte_140EF412A & 0x10) != 0 )
      {
        v6 = (const wchar_t *)&dword_140BE88B4;
        Buffer = (wchar_t *)&dword_140BE88B4;
        v8 = L"null";
        if ( P[1] )
          v8 = (const wchar_t *)P[1];
        v9 = (const wchar_t *)&dword_140BE88B4;
        if ( DestinationString.Buffer )
          Buffer = DestinationString.Buffer;
        if ( v29[1] )
          v9 = (const wchar_t *)v29[1];
        if ( v32[1] )
          v6 = (const wchar_t *)v32[1];
        McTemplateK0zzjzzzdd_EtwWriteTransfer(
          (__int64)v9,
          (__int64)KMPnPEvt_DeviceStart_Success,
          (__int64)v6,
          *(const wchar_t **)(a1 + 48),
          v8,
          (__int64)&v33,
          v6,
          v9,
          Buffer,
          *(_DWORD *)(a1 + 404),
          v5);
      }
      goto LABEL_20;
    }
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
    {
      if ( (byte_140EF412A & 0x40) != 0 )
      {
        PnpGetLogString((__int64)&DestinationString);
        PnpGetLogString((__int64)v29);
        LogString = PnpGetLogString((__int64)v32);
        v28 = v20;
        LOBYTE(v27) = 14;
        v26 = (const wchar_t *)v18;
        v25 = v21;
        v22 = KMPnPEvt_DeviceStart_RebootRequired;
LABEL_58:
        McTemplateK0zzjzzzdd_EtwWriteTransfer(
          v17,
          (__int64)v22,
          v18,
          *(const wchar_t **)(a1 + 48),
          v19,
          (__int64)&v33,
          (const wchar_t *)LogString,
          v25,
          v26,
          v27,
          v28);
      }
    }
    else if ( ((unsigned __int8)v3 & (unsigned __int8)byte_140EF412A) != 0 )
    {
      PnpGetLogString((__int64)&DestinationString);
      PnpGetLogString((__int64)v29);
      LogString = PnpGetLogString((__int64)v32);
      v17 = *(unsigned int *)(a1 + 404);
      v28 = v23;
      v27 = *(_DWORD *)(a1 + 404);
      v26 = (const wchar_t *)v18;
      v25 = v24;
      v22 = KMPnPEvt_DeviceStart_Failure;
      goto LABEL_58;
    }
  }
LABEL_20:
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v32[1] )
  {
    ExFreePool(v32[1]);
    *(_OWORD *)v32 = 0LL;
  }
  if ( v29[1] )
  {
    ExFreePool(v29[1]);
    *(_OWORD *)v29 = 0LL;
  }
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
}
