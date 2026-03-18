/*
 * XREFs of ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1401913FC
 * Callers:
 *     LogDiagSDCAccessDenied @ 0x1401B6E90 (LogDiagSDCAccessDenied.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyUnicodeStringEx(
        char *a1,
        __int64 a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int16 **a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 Length; // rdx
  USHORT MaximumLength; // ax
  PWSTR Buffer; // r9
  __int64 v8; // r8
  signed __int64 v9; // r9
  unsigned __int16 *v10; // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = 0LL;
  if ( a3 )
  {
    Length = a3->Length;
    if ( (Length & 1) == 0 )
    {
      MaximumLength = a3->MaximumLength;
      if ( (MaximumLength & 1) == 0 && (unsigned __int16)Length <= MaximumLength && MaximumLength != 0xFFFF )
      {
        Buffer = a3->Buffer;
        if ( Buffer || !(_WORD)Length && !MaximumLength )
        {
          v4 = Length >> 1;
          if ( Buffer )
            goto LABEL_12;
          goto LABEL_11;
        }
      }
    }
    *(_WORD *)a1 = 0;
    return 3221225485LL;
  }
LABEL_11:
  Buffer = (PWSTR)&word_14026AF94;
LABEL_12:
  v8 = 16LL;
  v9 = (char *)Buffer - a1;
  do
  {
    if ( !(v4 + v8 - 16) )
      break;
    *(_WORD *)a1 = *(_WORD *)&a1[v9];
    a1 += 2;
    --v8;
  }
  while ( v8 );
  v10 = (unsigned __int16 *)(a1 - 2);
  if ( v8 )
    v10 = (unsigned __int16 *)a1;
  *v10 = 0;
  return v8 == 0 ? 0x80000005 : 0;
}
