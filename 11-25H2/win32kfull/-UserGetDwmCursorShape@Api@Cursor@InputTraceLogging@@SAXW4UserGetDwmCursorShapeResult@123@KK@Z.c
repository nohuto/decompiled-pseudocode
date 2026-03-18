/*
 * XREFs of ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402DC92C
 * Callers:
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z @ 0x1402DCA0C (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140005910 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

char InputTraceLogging::Cursor::Api::UserGetDwmCursorShape()
{
  char result; // al
  unsigned int v1; // ecx
  __int64 v2; // r8
  __int64 v3; // r9
  const char *v4; // rax
  const char *v5; // [rsp+48h] [rbp-10h] BYREF

  result = InputTraceLogging::Enabled(8, 0);
  if ( result )
  {
    if ( (unsigned int)dword_14039BB50 > 4 )
    {
      result = tlgKeywordOn((__int64)&dword_14039BB50, v1);
      if ( result )
      {
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
                  v4 = "NoCursor";
                else
                  v4 = "UNKNOWN VALUE";
              }
              else
              {
                v4 = "AskedForSize";
              }
            }
            else
            {
              v4 = "BufferTooSmall";
            }
          }
          else
          {
            v4 = "Expired";
          }
        }
        else
        {
          v4 = "Ok";
        }
        v5 = v4;
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 (__int64)&dword_14039BB50,
                 (__int64)&unk_14036AD3D,
                 v2,
                 v3,
                 &v5);
      }
    }
  }
  return result;
}
