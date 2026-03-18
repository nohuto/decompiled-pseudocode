/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x14033E96C
 * Callers:
 *     ?ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z @ 0x14010DFC4 (-ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     GetProcessImageFileName @ 0x1401FB1FC (GetProcessImageFileName.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, int a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // esi
  const wchar_t **ProcessImageFileName; // rax
  const wchar_t **v8; // rdi
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebx
  const wchar_t *v12; // rcx
  char result; // al
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  ProcessImageFileName = (const wchar_t **)GetProcessImageFileName(a1);
  v8 = ProcessImageFileName;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v11 = 1;
      goto LABEL_9;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v11 = 2;
      goto LABEL_9;
    }
    if ( v10 == 1 )
    {
      v11 = 3;
      goto LABEL_9;
    }
  }
  v11 = 0;
LABEL_9:
  v12 = &pszFormat;
  if ( ProcessImageFileName )
    v12 = ProcessImageFileName[1];
  result = EtwFontLoadAttemptEvent(v12, v11, a3, v4);
  if ( (unsigned int)dword_14039BBC0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_14039BBC0, 0x200000000000LL);
    if ( result )
    {
      v17 = v4;
      v16 = v11;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 (__int64)&dword_14039BBC0,
                 byte_14036C44D,
                 v14,
                 v15,
                 (__int64)&v16,
                 (__int64)&v17);
    }
  }
  if ( v8 )
    return FreeTmpBuffer(v8);
  return result;
}
