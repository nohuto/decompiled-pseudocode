/*
 * XREFs of AlpcpCaptureHandleAttribute32 @ 0x1409B924C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1409BADB4 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute32(unsigned int *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  unsigned int ULongFromUser; // eax
  signed int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-18h]
  unsigned int v13; // [rsp+44h] [rbp-14h]

  v3 = a3;
  v11 = 0LL;
  v12 = 0;
  if ( (_BYTE)a3 )
    ULongFromUser = RtlReadULongFromUser(a1);
  else
    ULongFromUser = *a1;
  LODWORD(v11) = ULongFromUser;
  if ( v3 )
    v7 = RtlReadULongFromUser(a1 + 1);
  else
    v7 = a1[1];
  *((_QWORD *)&v11 + 1) = v7;
  if ( v3 )
    v8 = RtlReadULongFromUser(a1 + 2);
  else
    v8 = a1[2];
  v12 = v8;
  if ( v3 )
    v9 = RtlReadULongFromUser(a1 + 3);
  else
    v9 = a1[3];
  v13 = v9;
  LOBYTE(a3) = v3;
  return AlpcpCaptureHandleAttributeInternal(&v11, a2, a3);
}
