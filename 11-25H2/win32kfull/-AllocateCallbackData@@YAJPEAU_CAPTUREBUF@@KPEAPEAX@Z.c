/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1401A24DC
 * Callers:
 *     ClientGetListboxString @ 0x140061F10 (ClientGetListboxString.c)
 *     xxxClientLoadStringW @ 0x140148EF0 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x14018A360 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnIMECONTROL @ 0x1401EC740 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1401FA710 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402BA540 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1402BCA00 (SfnPOUTLPINT.c)
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
