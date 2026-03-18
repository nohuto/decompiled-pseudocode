/*
 * XREFs of ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1401276D4
 * Callers:
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1401F5C78 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1401F5D30 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14007B5C4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ApiSetGetUserHandedness @ 0x140127A30 (ApiSetGetUserHandedness.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x14019CCA4 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall DeadzonePalmTelemetry::_UploadTelemetryData(DeadzonePalmTelemetry *this, int a2)
{
  __int64 v2; // r13
  unsigned __int64 v4; // r12
  unsigned int v5; // eax
  unsigned int v6; // r12d
  int v7; // ebx
  int v8; // esi
  int v9; // r14d
  int v10; // edi
  int UserHandedness; // eax
  _BYTE *v12; // rbx
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edi
  int v17; // [rsp+4Ch] [rbp-35h]
  char *v18; // [rsp+50h] [rbp-31h]
  int v19; // [rsp+58h] [rbp-29h]
  void *v20; // [rsp+60h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-9h] BYREF
  void *v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+90h] [rbp+Fh]
  int v25; // [rsp+94h] [rbp+13h]
  char *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]

  v2 = 0LL;
  v17 = 0;
  v18 = (char *)this + 12;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v19 = v4;
  if ( a2 || (unsigned int)(v4 - *((_DWORD *)this + 2)) >= 0x2710 )
  {
    v5 = *((_DWORD *)this + 1);
    if ( v5 > 0x280 )
    {
      *((_DWORD *)this + 1) = 640;
LABEL_4:
      v6 = 0;
      while ( 1 )
      {
        v7 = *((_DWORD *)this + 4 * (v6 % 0x280) + 516);
        v8 = *((_DWORD *)this + 4 * (v6 % 0x280) + 518);
        v9 = *((_DWORD *)this + 4 * (v6 % 0x280) + 517);
        v10 = *((_DWORD *)this + 4 * (v6 % 0x280) + 515);
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(v18, 2048 - v2, "%lu,%d,%lu,%lu,%lu;", UserHandedness, v10, v7, v9, v8);
        v12 = (char *)this + 12;
        if ( this == (DeadzonePalmTelemetry *)-12LL )
          goto LABEL_22;
        v13 = (char *)this + 12;
        v14 = 2048LL;
        do
        {
          if ( !*v13 )
            break;
          ++v13;
          --v14;
        }
        while ( v14 );
        v2 = (2048 - v14) & -(__int64)(v14 != 0);
        if ( !v14 )
        {
LABEL_22:
          v2 = 0LL;
        }
        else if ( (unsigned __int64)(v2 + 32) >= 0x800 )
        {
          if ( (unsigned int)dword_14029EE90 > 5
            && (qword_14029EEA0 & 0x400000000000LL) != 0
            && (qword_14029EEA8 & 0x400000000000LL) == qword_14029EEA8 )
          {
            v15 = -1LL;
            do
              ++v15;
            while ( v12[v15] );
            EventDescriptor.Keyword = 0x400000000000LL;
            v27 = v15 + 1;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (ULONGLONG)off_14029EE98;
            v26 = (char *)this + 12;
            v28 = 0;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            UserData.Size = *(unsigned __int16 *)off_14029EE98;
            v23 = &unk_14027DA53;
            UserData.Reserved = 2;
            v24 = 37;
            v25 = 1;
            EtwWriteTransfer(qword_14029EEB0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
          }
          v16 = 1;
          v17 = 1;
          v2 = 0LL;
          memset((char *)this + 13, 0, 0x7FFuLL);
          *v12 = 0;
          goto LABEL_18;
        }
        v16 = v17;
LABEL_18:
        ++v6;
        v18 = (char *)this + v2 + 12;
        if ( v6 >= *((_DWORD *)this + 1) )
        {
          if ( v2 )
          {
            if ( (unsigned int)dword_14029EE90 > 5 && tlgKeywordOn((__int64)&dword_14029EE90, 0x400000000000LL) )
            {
              v20 = (char *)this + 12;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                (__int64)&dword_14029EE90,
                (unsigned __int8 *)&unk_14027DA48,
                0LL,
                0LL,
                &v20);
            }
          }
          else if ( !v16 )
          {
            return;
          }
          *((_DWORD *)this + 1) = 0;
          memset((char *)this + 2060, 0, 0x2800uLL);
          memset((char *)this + 13, 0, 0x7FFuLL);
          *((_BYTE *)this + 12) = 0;
          *((_DWORD *)this + 2) = v19;
          return;
        }
      }
    }
    *((_DWORD *)this + 1) = v5;
    if ( v5 )
      goto LABEL_4;
  }
}
