/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x180013528
 * Callers:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800131F4 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800D70A0 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x18010EE34 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _alloca_probe @ 0x180162680 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 **v2; // rax
  unsigned int v3; // r8d
  __int64 *v4; // rax
  unsigned int v5; // r9d
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // rdx
  __int64 *i; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 *j; // rdx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v14[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  void *v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+64h] [rbp-9Ch]
  __int64 *v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v25[1023]; // [rsp+84h] [rbp-7Ch] BYREF

  memset_0(v25, 0, sizeof(v25));
  v2 = (__int64 **)*((_QWORD *)this + 10);
  v3 = 0;
  v24 = 1;
  v4 = *v2;
  v5 = 8;
  while ( !*((_BYTE *)v4 + 25) )
  {
    v6 = v4 + 4;
    if ( *((_DWORD *)v4 + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( (unsigned __int64)v4[7] > 7 )
        v6 = (__int64 *)*v6;
      v7 = v5;
      v5 += 112;
      ++v3;
      *(_OWORD *)((char *)&v25[-1] + v7) = *(_OWORD *)v6;
      *(_OWORD *)((char *)&v25[3] + v7) = *((_OWORD *)v6 + 1);
      *(_OWORD *)((char *)&v25[7] + v7) = *((_OWORD *)v6 + 2);
      *(_OWORD *)((char *)&v25[11] + v7) = *((_OWORD *)v6 + 3);
      *(_OWORD *)((char *)&v25[15] + v7) = *((_OWORD *)v6 + 4);
      *(_OWORD *)((char *)&v25[19] + v7) = *((_OWORD *)v6 + 5);
      *(_OWORD *)((char *)&v25[23] + v7) = *((_OWORD *)v6 + 6);
    }
    v8 = (__int64 **)v4[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  v25[0] = v3;
  v10 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v24, 4096LL, 0LL);
  v11 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v11 > 4u
    && (*(_BYTE *)(v11 + 16) & 0x40) != 0
    && (*(_QWORD *)(v11 + 24) & 0x40LL) == *(_QWORD *)(v11 + 24) )
  {
    LODWORD(v13) = v10;
    v22 = &v13;
    v14[1] = 4;
    v16 = *(unsigned __int16 **)(v11 + 8);
    v23 = 4LL;
    v14[0] = 184549376;
    v15 = 64LL;
    v17 = *v16;
    v19 = &unk_1801A72A2;
    v18 = 2;
    v20 = 57;
    v21 = 1;
    HIDWORD(v13) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, __int64))EtwEventWriteTransfer)(
      *(_QWORD *)(v11 + 32),
      v14,
      0LL,
      0LL,
      3,
      &v16,
      v13);
  }
}
