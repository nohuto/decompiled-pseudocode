/*
 * XREFs of RtlGetSetBootStatusData @ 0x180124390
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetSetBootStatusData @ 0x18011617C (RtlpGetSetBootStatusData.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetSetBootStatusData(
        __int64 a1,
        char a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  char v12; // al
  _BYTE *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  _BYTE v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v18[208]; // [rsp+40h] [rbp-C0h] BYREF

  v16[0] = 0;
  v17[0] = 0;
  memset_thunk_772440563353939046(v18, 0, 0xC8uLL);
  if ( a2 )
    return RtlpGetSetBootStatusData(a1, 1, a3, (__int64)a4, a5, a6);
  if ( a3 == 15 )
    return 3221225485LL;
  result = RtlpGetSetBootStatusData(a1, 1, 0xFu, (__int64)v16, 1u, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpGetSetBootStatusData(a1, 1, a3, (__int64)v18, 0xC8u, 0LL);
    if ( (int)result >= 0 )
    {
      result = RtlpGetSetBootStatusData(a1, 0, a3, (__int64)a4, a5, v17);
      if ( (int)result >= 0 )
      {
        v11 = v17[0];
        if ( a6 )
          *a6 = v17[0];
        v12 = v16[0];
        if ( (_DWORD)v11 )
        {
          v13 = v18;
          v14 = v11;
          do
          {
            v12 += *v13++;
            --v14;
          }
          while ( v14 );
          v16[0] = v12;
          v15 = v11;
          do
          {
            v12 -= *a4++;
            --v15;
          }
          while ( v15 );
          v16[0] = v12;
        }
        return RtlpGetSetBootStatusData(a1, 0, 0xFu, (__int64)v16, 1u, 0LL);
      }
    }
  }
  return result;
}
