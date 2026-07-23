/*
 * XREFs of EtwpGetFieldValue @ 0x1406CDBD8
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x1406CCDC8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1406CD64C (EtwpApplyPredicate.c)
 * Callees:
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpGetFieldValue(_BYTE *a1, int a2, __int64 *a3, char a4)
{
  char v5; // bl
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 ULong64FromUser; // rax

  v5 = 1;
  v6 = a2 - 1;
  if ( !v6 )
  {
    if ( a4 )
      LOBYTE(ULong64FromUser) = RtlReadUCharFromUser(a1);
    else
      LOBYTE(ULong64FromUser) = *a1;
    ULong64FromUser = (unsigned __int8)ULong64FromUser;
    goto LABEL_21;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a4 )
      LOWORD(ULong64FromUser) = RtlReadUShortFromUser(a1);
    else
      LOWORD(ULong64FromUser) = *(_WORD *)a1;
    ULong64FromUser = (unsigned __int16)ULong64FromUser;
    goto LABEL_21;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    if ( a4 )
      LODWORD(ULong64FromUser) = RtlReadULongFromUser(a1);
    else
      LODWORD(ULong64FromUser) = *(_DWORD *)a1;
    ULong64FromUser = (unsigned int)ULong64FromUser;
    goto LABEL_21;
  }
  if ( v8 == 4 )
  {
    if ( a4 )
      ULong64FromUser = RtlReadULong64FromUser(a1);
    else
      ULong64FromUser = *(_QWORD *)a1;
LABEL_21:
    *a3 = ULong64FromUser;
    return v5;
  }
  return 0;
}
