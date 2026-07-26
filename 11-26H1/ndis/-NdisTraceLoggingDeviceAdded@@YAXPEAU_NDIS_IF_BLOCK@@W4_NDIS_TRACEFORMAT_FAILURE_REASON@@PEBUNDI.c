/*
 * XREFs of ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x140051010
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceAdded(__int64 a1, int a2, __int64 a3, int a4, _WORD *a5, unsigned __int8 a6)
{
  _WORD *v7; // rcx
  __int16 v8; // r8
  __int16 v9; // r9
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // r9
  int v12; // eax
  _WORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v22; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+94h] [rbp-74h]
  int *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int64 *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  _WORD *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h] BYREF
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  _WORD *v43; // [rsp+108h] [rbp+0h]
  int v44; // [rsp+110h] [rbp+8h]
  int v45; // [rsp+114h] [rbp+Ch]
  int *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]

  if ( a4 < 0 )
  {
    if ( (unsigned int)dword_14011C6F8 > 5
      && (qword_14011C708 & 0x400000000000LL) != 0
      && (qword_14011C710 & 0x400000000000LL) == qword_14011C710 )
    {
      v13 = &unk_1400F7E38;
      LODWORD(v20) = a6;
      v19 = a2;
      v18 = a4;
      if ( a5 )
        v13 = a5;
      v40 = 4LL;
      *(_QWORD *)&v22.Id = *(_QWORD *)(a3 + 16);
      v39 = &v20;
      if ( v13 )
      {
        v15 = -1LL;
        do
          v16 = v13[++v15] == 0;
        while ( !v16 );
        v14 = 2 * v15 + 2;
      }
      else
      {
        v13 = &unk_1400F7E38;
        v14 = 2;
      }
      v37 = v14;
      v36 = v13;
      v34 = &v22;
      v38 = 0;
      v30 = (__int64 *)&v19;
      v32 = a3;
      v28 = &v18;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (unsigned __int64)off_14011C700;
      v35 = 8LL;
      v33 = 16LL;
      v31 = 4LL;
      v29 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)off_14011C700;
      v25 = &unk_140104625;
      UserData.Reserved = 2;
      v26 = 101;
      v27 = 1;
      LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  else if ( (unsigned int)dword_14011C6F8 > 5
         && (qword_14011C708 & 0x400000000000LL) != 0
         && (qword_14011C710 & 0x400000000000LL) == qword_14011C710 )
  {
    v7 = &unk_1400F7E38;
    v8 = *(_WORD *)(a1 + 8);
    v9 = *(_WORD *)(a1 + 596);
    v18 = a6;
    v47 = 4LL;
    if ( a5 )
      v7 = a5;
    v21 = *(_QWORD *)(a1 + 1312);
    v10 = v8 & 0xFFFE;
    v11 = v9 & 0xFFFE;
    v19 = *(_DWORD *)(a1 + 4);
    v46 = &v18;
    if ( v7 )
    {
      v17 = -1LL;
      do
        v16 = v7[++v17] == 0;
      while ( !v16 );
      v12 = 2 * v17 + 2;
    }
    else
    {
      v7 = &unk_1400F7E38;
      v12 = 2;
    }
    v44 = v12;
    v41 = &v21;
    v34 = (EVENT_DESCRIPTOR *)&v37;
    v43 = v7;
    v37 = v10;
    v30 = &v33;
    v33 = v11;
    v28 = &v19;
    *(_DWORD *)&v22.Level = 5;
    UserData.Ptr = (unsigned __int64)off_14011C700;
    v45 = 0;
    v38 = 0;
    v42 = 8LL;
    v39 = (__int64 *)(a1 + 540);
    v40 = 16LL;
    v35 = 2LL;
    v36 = (_WORD *)(a1 + 10);
    v31 = 2LL;
    v32 = a1 + 598;
    v29 = 4LL;
    *(_DWORD *)&v22.Id = 184549376;
    v22.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_14011C700;
    v25 = &unk_140104696;
    UserData.Reserved = 2;
    v26 = 134;
    v27 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &v22, 0LL, 0LL, 0xBu, &UserData);
  }
}
