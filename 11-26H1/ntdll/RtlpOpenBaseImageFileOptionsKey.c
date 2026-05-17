/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1800D3400
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800D2FD0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rbx
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+40h] [rbp-10h]
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  v1 = (HANDLE)qword_1801C73D0;
  if ( qword_1801C73D0 )
    goto LABEL_2;
  Handle = 0LL;
  v4[2] = &unk_180171E50;
  v4[0] = 48LL;
  v4[3] = 576LL;
  v4[1] = 0LL;
  v5 = 0LL;
  result = NtOpenKey(&Handle, 9LL, v4);
  if ( (int)result >= 0 )
  {
    v1 = Handle;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_1801C73D0, (signed __int64)v1, 0LL) )
    {
      NtClose(v1);
      v1 = (HANDLE)qword_1801C73D0;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
