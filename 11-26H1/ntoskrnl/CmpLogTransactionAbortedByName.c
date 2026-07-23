/*
 * XREFs of CmpLogTransactionAbortedByName @ 0x14077956C
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall CmpLogTransactionAbortedByName(unsigned __int16 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  _DWORD v12[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( a4 )
  {
    v5 = a4;
    do
    {
      if ( (unsigned int)dword_140E09EE8 > 4 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
      {
        v10 = 2LL;
        v9 = v12;
        v11 = *((_QWORD *)a1 + 1);
        v12[0] = *a1;
        v13 = &v7;
        v12[1] = 0;
        v7 = a2;
        v14 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09EE8,
          (unsigned __int8 *)byte_140057D9F,
          0LL,
          0LL,
          5u,
          &v8);
      }
      --v5;
    }
    while ( v5 );
  }
}
