/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x18012FA50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180130838 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  void *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rdx
  LPVOID v15; // rax
  int v16; // r15d
  int v18; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+44h] [rbp-55h] BYREF
  const CHAR *v20; // [rsp+48h] [rbp-51h] BYREF
  _WORD v21[2]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v22[7]; // [rsp+54h] [rbp-45h] BYREF
  struct _tagpropertykey v23; // [rsp+70h] [rbp-29h] BYREF
  GUID v24; // [rsp+90h] [rbp-9h] BYREF
  __int16 v25; // [rsp+A0h] [rbp+7h]
  GUID v26; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v21[0] = 0;
  v26 = GUID_00000000_0000_0000_0000_000000000000;
  v24 = GUID_00000000_0000_0000_0000_000000000000;
  memset(v22, 0, sizeof(v22));
  v25 = 0;
  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
            a2,
            &v26);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        goto LABEL_38;
      v18 = 294;
      v14 = (unsigned __int8 *)&unk_1801A9E52;
      goto LABEL_36;
    }
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
            a2,
            v21);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        goto LABEL_38;
      v18 = 297;
      v14 = (unsigned __int8 *)&unk_1801A9E20;
      goto LABEL_36;
    }
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
            a2,
            v22);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        goto LABEL_38;
      v18 = 300;
      v14 = (unsigned __int8 *)&unk_1801A9E84;
      goto LABEL_36;
    }
    v15 = operator new[](v22[0], (const struct std::nothrow_t *)&std::nothrow);
    v5 = v15;
    if ( !v15 )
    {
      v9 = -2147024882;
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        goto LABEL_38;
      v19 = -2147024882;
      v14 = (unsigned __int8 *)&unk_1801A9DBC;
      v18 = 304;
      goto LABEL_37;
    }
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, LPVOID, _QWORD))(*(_QWORD *)a2 + 48LL))(
            a2,
            v15,
            v22[0]);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _DWORD *))(**((_QWORD **)this + 11) + 40LL))(
              *((_QWORD *)this + 11),
              &PKEY_SpatialAudio_Metadata_Count,
              &v22[1]);
      v9 = v10;
      if ( v10 >= 0 )
      {
        if ( LOWORD(v22[1]) == 2 )
        {
          v16 = SLOWORD(v22[3]);
          v25 = v21[0];
          v24 = v26;
          v23.pid = SLOWORD(v22[3]) + 2;
          v23.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
          *(_OWORD *)&v22[1] = 0LL;
          LOWORD(v22[1]) = 65;
          *(_QWORD *)&v22[5] = &v24;
          v22[3] = 18;
          v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v23, (struct tagPROPVARIANT *)&v22[1]);
          v9 = v10;
          if ( v10 >= 0 )
          {
            *(_QWORD *)&v22[5] = v5;
            v23.pid = v16 + 2;
            *(_OWORD *)&v22[1] = 0LL;
            LOWORD(v22[1]) = 65;
            v22[3] = v22[0];
            v23.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
            v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v23, (struct tagPROPVARIANT *)&v22[1]);
            v9 = v10;
            if ( v10 >= 0 )
            {
              memset(&v22[1], 0, 24);
              v23.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
              LOWORD(v22[1]) = 2;
              LOWORD(v22[3]) = v16 + 1;
              v23.pid = 2;
              v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v23, (struct tagPROPVARIANT *)&v22[1]);
              v9 = v10;
              if ( v10 >= 0 || (unsigned int)dword_1801D32E8 <= 2 )
                goto LABEL_38;
              v18 = 344;
              v14 = (unsigned __int8 *)&unk_1801A9D26;
            }
            else
            {
              if ( (unsigned int)dword_1801D32E8 <= 2 )
                goto LABEL_38;
              v18 = 337;
              v14 = (unsigned __int8 *)&unk_1801A9D58;
            }
          }
          else
          {
            if ( (unsigned int)dword_1801D32E8 <= 2 )
              goto LABEL_38;
            v18 = 327;
            v14 = (unsigned __int8 *)&unk_1801A9CBA;
          }
          goto LABEL_36;
        }
        v9 = -2147418113;
        if ( (unsigned int)dword_1801D32E8 <= 2 )
          goto LABEL_38;
        v19 = -2147418113;
        v14 = (unsigned __int8 *)&unk_1801A9CEC;
        v18 = 314;
LABEL_37:
        v20 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          v14,
          v12,
          v13,
          &v20,
          (__int64)&v18,
          (__int64)&v19);
        goto LABEL_38;
      }
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        goto LABEL_38;
      v18 = 313;
      v14 = (unsigned __int8 *)&unk_1801A9DEE;
    }
    else
    {
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        goto LABEL_38;
      v18 = 307;
      v14 = (unsigned __int8 *)&unk_1801A9D8A;
    }
LABEL_36:
    v19 = v10;
    goto LABEL_37;
  }
  v9 = -2147024809;
  if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v18 = -2147024809;
    v20 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
    v19 = 290;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_1801A9F1A,
      v7,
      v8,
      &v20,
      (__int64)&v19,
      (__int64)&v18);
  }
LABEL_38:
  operator delete(v5);
  return v9;
}
