/*
 * XREFs of KscpUmaSmapResumeAfterException @ 0x140C5E0C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 */

void __fastcall KscpUmaSmapResumeAfterException(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v7; // [rsp+18h] [rbp-88h]
  __int64 v8; // [rsp+40h] [rbp-60h]
  __int64 v9; // [rsp+48h] [rbp-58h]
  __int64 v10; // [rsp+50h] [rbp-50h]
  __int64 v11; // [rsp+58h] [rbp-48h]
  __int64 v12; // [rsp+60h] [rbp-40h]
  __int64 v13; // [rsp+68h] [rbp-38h]
  __int64 v14; // [rsp+70h] [rbp-30h]
  __int64 v15; // [rsp+78h] [rbp-28h]
  __int64 v16; // [rsp+80h] [rbp-20h]
  __int64 v17; // [rsp+88h] [rbp-18h]
  __int64 v18; // [rsp+90h] [rbp-10h]
  unsigned __int64 v19; // [rsp+98h] [rbp-8h]

  LODWORD(v7) = a3;
  RtlRaiseException(
    (ULONG_PTR)&v6,
    a2,
    a3,
    a4,
    a1,
    0LL,
    a2,
    v7,
    v4,
    *((__int64 *)&v4 + 1),
    v5,
    *((__int64 *)&v5 + 1),
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  __debugbreak();
  JUMPOUT(0x140C5E10FLL);
}
