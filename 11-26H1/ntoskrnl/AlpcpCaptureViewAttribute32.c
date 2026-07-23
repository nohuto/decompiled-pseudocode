/*
 * XREFs of AlpcpCaptureViewAttribute32 @ 0x140AFEBB0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute32(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int ULongFromUser; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  LODWORD(v16) = 0;
  if ( a5 )
    ULongFromUser = RtlReadULongFromUser(a2);
  else
    ULongFromUser = *a2;
  LODWORD(v14) = ULongFromUser;
  if ( a5 )
    v10 = RtlReadULongFromUser(a2 + 1);
  else
    v10 = a2[1];
  *((_QWORD *)&v14 + 1) = v10;
  if ( a5 )
    v11 = RtlReadULongFromUser(a2 + 2);
  else
    v11 = a2[2];
  v15 = v11;
  if ( a5 )
    v12 = RtlReadULongFromUser(a2 + 3);
  else
    v12 = a2[3];
  v16 = v12;
  return AlpcpCaptureViewAttributeInternal(a1, (__int64)&v14, a3, a4);
}
