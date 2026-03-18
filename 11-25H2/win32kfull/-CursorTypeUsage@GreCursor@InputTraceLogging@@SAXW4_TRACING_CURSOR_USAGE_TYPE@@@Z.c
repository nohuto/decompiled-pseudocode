/*
 * XREFs of ?CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z @ 0x14009451C
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x140093B68 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x140210C8C (--$Write@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

__int64 __fastcall InputTraceLogging::GreCursor::CursorTypeUsage(int a1, __int64 a2, __int64 a3, int a4)
{
  const char *v4; // rdx
  const char *v5; // r8
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax
  const char *v10; // [rsp+48h] [rbp+10h] BYREF
  const char *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = "UNKNOWN";
  v5 = "UNKNOWN";
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            v4 = "Software";
            v5 = "IncompatibleFormat";
          }
        }
        else
        {
          v4 = "Software";
          v5 = "MouseTrails";
        }
      }
      else
      {
        v4 = "Software";
        v5 = "NoDriverEntryPoint";
      }
    }
    else
    {
      v4 = "Software";
      v5 = "RequestedByInputStack";
    }
  }
  else
  {
    v4 = "Hardware";
    v5 = (const char *)&unk_140351139;
  }
  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x20) != 0 )
  {
    result = qword_14039BB68 & 0x20;
    if ( result == qword_14039BB68 )
    {
      v11 = v4;
      v10 = v5;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
               (unsigned int)&dword_14039BB50,
               (unsigned int)&unk_14036AD97,
               (_DWORD)v5,
               a4,
               (__int64)&v11,
               (__int64)&v10);
    }
  }
  return result;
}
