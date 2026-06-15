/*
 * XREFs of sub_1400335C8 @ 0x1400335C8
 * Callers:
 *     StartAddress @ 0x1400335B0 (StartAddress.c)
 * Callees:
 *     sub_140033800 @ 0x140033800 (sub_140033800.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_1400335C8(__int64 a1)
{
  __int64 result; // rax
  _OWORD *v3; // rdi
  char v4; // cl
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // rcx
  int v8; // [rsp+48h] [rbp-C0h]
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v12[3]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v13[10]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v14[64]; // [rsp+F8h] [rbp-10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  memset(v12, 0, sizeof(v12));
  result = AlpcInitializeMessageAttribute(805306368LL, v14, 64LL, &v10);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v14, 0x20000000LL);
    v3 = 0LL;
    memset(v13, 0, 0x48uLL);
    v13[2] = 48LL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 1) )
            return 0LL;
          v5 = *(_QWORD *)(a1 + 8);
          v11 = 48LL;
          v6 = NtAlpcSendWaitReceivePort(v5, 0x10000LL, v3, 0LL, v12, &v11, v14, &unk_1400C6C88);
          if ( v6 >= 0 )
            break;
LABEL_6:
          v3 = 0LL;
        }
      }
      while ( v6 == 258 );
      if ( BYTE4(v12[0]) != 1 )
      {
        if ( BYTE4(v12[0]) != 3 )
        {
          if ( BYTE4(v12[0]) == 5 )
          {
            v7 = *(void **)(a1 + 24);
            if ( v7 )
            {
              NtClose(v7);
              *(_QWORD *)(a1 + 24) = 0LL;
            }
            _InterlockedExchange((volatile __int32 *)(a1 + 48), 1);
          }
          else
          {
            v4 = BYTE4(v12[0]) - 10;
            if ( BYTE4(v12[0]) == 10 )
            {
              LODWORD(v13[0]) = 0;
              LODWORD(v13[8]) = 0;
              if ( *((_QWORD *)&v12[0] + 1) <= 0xFFFFFFFFuLL && DWORD2(v12[0]) == *(_DWORD *)(a1 + 16) )
              {
                v4 = 1;
                LODWORD(v13[0]) = 0x80000;
                LODWORD(v13[8]) = 16;
              }
              LOBYTE(v8) = v4;
              NtAlpcAcceptConnectPort(&v9, *(_QWORD *)(a1 + 8), 0LL, 0LL, v13, 0LL, v12, v14, v8);
              *(_QWORD *)(a1 + 24) = v9;
              *(_BYTE *)(a1 + 52) = 1;
            }
          }
        }
        goto LABEL_6;
      }
      sub_140033800(a1, v12, v14);
      v3 = v12;
    }
  }
  return result;
}
