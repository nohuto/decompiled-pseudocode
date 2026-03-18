/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadStringW @ 0x1400CCAE8 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1401296BC (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x14020E220 (SfnINCNTOUTSTRING.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402D52D0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1402D73B0 (SfnPOUTLPINT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateCallbackData(struct _CAPTUREBUF *a1, unsigned int a2, void **a3)
{
  _BYTE *v4; // rcx
  bool v5; // zf

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v4 = (_BYTE *)*((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 4) == 0LL;
  *((_QWORD *)a1 + 2) = &v4[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  if ( v5 )
  {
    *a3 = (void *)(v4 - (_BYTE *)a1);
    *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a3 - (_DWORD)a1;
  }
  else
  {
    *a3 = v4;
  }
  return 0LL;
}
