/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800D3BFC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18015F2E0 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKeyEx(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v6; // [rsp+60h] [rbp-10h]
  __int64 v7; // [rsp+98h] [rbp+28h] BYREF

  v7 = 0LL;
  v5[1] = 0LL;
  v5[0] = 48LL;
  v5[2] = &unk_180171E50;
  v5[3] = 576LL;
  v6 = 0LL;
  if ( a3 )
    result = ZwCreateKey(&v7, a2, v5, 0LL, 0LL, 0, 0LL);
  else
    result = NtOpenKey(&v7, a2, v5);
  if ( (int)result >= 0 )
  {
    *a1 = v7;
    return 0LL;
  }
  return result;
}
