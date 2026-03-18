/*
 * XREFs of ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x14008CD08
 * Callers:
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x140210D08 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x140210DC8 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14008BEF4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1401B86CC (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1401C158C (ApiSetGetUserHandedness.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall DeadzonePalmTelemetry::_UploadTelemetryData(DeadzonePalmTelemetry *this, int a2)
{
  _BYTE *v2; // r13
  __int64 v3; // r15
  unsigned __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // r12d
  int v8; // ebx
  int v9; // esi
  int v10; // ebp
  int v11; // edi
  int UserHandedness; // eax
  _BYTE *v13; // rax
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // r12d
  void *v17; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+10h]
  char *v19; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h]

  v2 = (char *)this + 12;
  v3 = 0LL;
  v19 = (char *)this + 12;
  v18 = 0;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v20 = v5;
  if ( a2 || (unsigned int)(v5 - *((_DWORD *)this + 2)) >= 0x2710 )
  {
    v6 = *((_DWORD *)this + 1);
    if ( v6 > 0x280 )
    {
      *((_DWORD *)this + 1) = 640;
      LODWORD(v17) = 0;
LABEL_4:
      v7 = (unsigned int)v17;
      while ( 1 )
      {
        v8 = *((_DWORD *)this + 4 * (v7 % 0x280) + 516);
        v9 = *((_DWORD *)this + 4 * (v7 % 0x280) + 518);
        v10 = *((_DWORD *)this + 4 * (v7 % 0x280) + 517);
        v11 = *((_DWORD *)this + 4 * (v7 % 0x280) + 515);
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(v19, 2048 - v3, "%lu,%d,%lu,%lu,%lu;", UserHandedness, v11, v8, v10, v9);
        if ( !v2 )
          goto LABEL_20;
        v13 = v2;
        v14 = 2048LL;
        do
        {
          if ( !*v13 )
            break;
          ++v13;
          --v14;
        }
        while ( v14 );
        v3 = (2048 - v14) & -(__int64)(v14 != 0);
        if ( v14 )
        {
          if ( (unsigned __int64)(v3 + 32) >= 0x800 )
          {
            if ( (unsigned int)dword_1402A9EB0 > 5
              && (qword_1402A9EC0 & 0x400000000000LL) != 0
              && (qword_1402A9EC8 & 0x400000000000LL) == qword_1402A9EC8 )
            {
              v17 = v2;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                (__int64)&dword_1402A9EB0,
                byte_14028801B,
                0LL,
                0LL,
                &v17);
            }
            v15 = 1;
            v18 = 1;
            v3 = 0LL;
            memset((char *)this + 13, 0, 0x7FFuLL);
            *v2 = 0;
            goto LABEL_16;
          }
        }
        else
        {
LABEL_20:
          v3 = 0LL;
        }
        v15 = v18;
LABEL_16:
        ++v7;
        v19 = (char *)this + v3 + 12;
        if ( v7 >= *((_DWORD *)this + 1) )
        {
          v16 = v20;
          if ( v3 )
          {
            if ( (unsigned int)dword_1402A9EB0 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1402A9EB0, 0x400000000000LL) )
              {
                v17 = v2;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                  (__int64)&dword_1402A9EB0,
                  byte_140287FEA,
                  0LL,
                  0LL,
                  &v17);
              }
            }
          }
          else if ( !v15 )
          {
            return;
          }
          *((_DWORD *)this + 1) = 0;
          memset((char *)this + 2060, 0, 0x2800uLL);
          memset((char *)this + 13, 0, 0x7FFuLL);
          *((_BYTE *)this + 12) = 0;
          *((_DWORD *)this + 2) = v16;
          return;
        }
      }
    }
    *((_DWORD *)this + 1) = v6;
    LODWORD(v17) = 0;
    if ( v6 )
      goto LABEL_4;
  }
}
