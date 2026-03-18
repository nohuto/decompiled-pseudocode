/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientExpandStringW @ 0x140008DFC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1400CCAE8 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1401296BC (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x14020E220 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402D52D0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned __int64 result; // rax
  ULONG v10; // r8d
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v6 = *((_DWORD *)a1 + 2);
  BytesInMultiByteString = 0;
  if ( v6 )
    ProbeForRead(*((volatile void **)a1 + 2), v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  result = *((unsigned int *)a1 + 2);
  if ( a3 )
  {
    if ( a4 )
    {
LABEL_6:
      if ( (unsigned int)v5 < (unsigned int)result )
        return (unsigned int)v5;
      return result;
    }
    v10 = 2 * v5;
    if ( 2 * v5 >= result )
      v10 = *((_DWORD *)a1 + 2);
    RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v10);
    return BytesInMultiByteString;
  }
  else
  {
    if ( !a4 )
    {
      result = (unsigned int)result >> 1;
      goto LABEL_6;
    }
    if ( (unsigned int)v5 < (unsigned int)result )
      LODWORD(result) = v5;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, *((const CHAR **)a1 + 2), result);
    return BytesInMultiByteString >> 1;
  }
}
