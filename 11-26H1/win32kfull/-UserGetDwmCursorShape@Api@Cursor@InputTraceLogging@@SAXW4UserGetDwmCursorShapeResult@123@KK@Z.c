/*
 * XREFs of ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402EF170
 * Callers:
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKV?$UserModePointer@K@@@Z @ 0x1402EF254 (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKV-$UserModePointer@K@@@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14019873C (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1401DCD48 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

char InputTraceLogging::Cursor::Api::UserGetDwmCursorShape()
{
  char result; // al
  unsigned int v1; // r8d
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  int v5; // r11d
  const char *v6; // rax
  int v7; // [rsp+40h] [rbp-18h] BYREF
  const char *v8; // [rsp+48h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  result = InputTraceLogging::Enabled(8, 0);
  if ( result )
  {
    if ( (unsigned int)dword_1403AA9C0 > 4 )
    {
      result = tlgKeywordOn((__int64)&dword_1403AA9C0, v1);
      if ( result )
      {
        v9 = v4;
        v7 = v5;
        if ( (_DWORD)v3 )
        {
          v3 = (unsigned int)(v3 - 1);
          if ( (_DWORD)v3 )
          {
            v3 = (unsigned int)(v3 - 1);
            if ( (_DWORD)v3 )
            {
              v3 = (unsigned int)(v3 - 1);
              if ( (_DWORD)v3 )
              {
                if ( (_DWORD)v3 == 1 )
                  v6 = "NoCursor";
                else
                  v6 = "UNKNOWN VALUE";
              }
              else
              {
                v6 = "AskedForSize";
              }
            }
            else
            {
              v6 = "BufferTooSmall";
            }
          }
          else
          {
            v6 = "Expired";
          }
        }
        else
        {
          v6 = "Ok";
        }
        v8 = v6;
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 (__int64)&dword_1403AA9C0,
                 byte_140378301,
                 v2,
                 v3,
                 (void **)&v8,
                 (__int64)&v7,
                 (__int64)&v9);
      }
    }
  }
  return result;
}
