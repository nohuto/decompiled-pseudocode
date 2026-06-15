/*
 * XREFs of sub_14003EDD0 @ 0x14003EDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_1400383F4 @ 0x1400383F4 (sub_1400383F4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140075EEC @ 0x140075EEC (sub_140075EEC.c)
 *     sub_140077F40 @ 0x140077F40 (sub_140077F40.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_14003EDD0(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  if ( a2 && *(_QWORD *)(a2 + 144) == a1 )
  {
    v6 = a3 - 1;
    if ( v6 && (v7 = v6 - 1) != 0 )
    {
      if ( v7 == 4 )
      {
        v13 = 0LL;
        v12 = 0LL;
        v14 = 0LL;
        if ( a5 >= 0x24 && *(_DWORD *)a4 == 1 && *(_DWORD *)(a4 + 28) )
        {
          v8 = *(_QWORD *)(a4 + 8) - 0x4D5CD9A69C2220F0LL;
          if ( *(_QWORD *)(a4 + 8) == 0x4D5CD9A69C2220F0LL )
            v8 = *(_QWORD *)(a4 + 16) + 0x2DAF02A8C7A8C960LL;
          if ( !v8 && *(_DWORD *)(a4 + 28) >= 0x28u )
          {
            v9 = *(_QWORD *)(a4 + 32) - *(_QWORD *)(a2 + 120);
            if ( !v9 )
              v9 = *(_QWORD *)(a4 + 40) - *(_QWORD *)(a2 + 128);
            if ( !v9 )
            {
              v13 = 0LL;
              v16 = 0LL;
              sub_1400383F4(&hstringHeader, L"Windows.Storage.Streams.DataWriter", 0x23u, 0x22u);
              if ( (int)sub_140075EEC(v16, &v13) >= 0 )
              {
                if ( v13 )
                {
                  if ( (int)sub_1400B6010(v13) >= 0 )
                  {
                    v12 = 0LL;
                    if ( (int)sub_1400B6010(v13) >= 0 && (int)sub_1400B6010(*(_QWORD *)(a2 + 192)) >= 0 )
                      sub_140015C58(*(void **)(a2 + 184));
                  }
                }
              }
            }
          }
        }
        sub_140077F40(&v14);
        sub_140003238(&v12);
        sub_140003238(&v13);
      }
    }
    else
    {
      v10 = (RTL_SRWLOCK *)(a2 + 200);
      AcquireSRWLockExclusive((PSRWLOCK)(a2 + 200));
      v14 = v10;
      sub_140016858((void **)(a2 + 112), 0LL);
      *(_BYTE *)(a2 + 208) = 1;
      sub_14003A998(&v14);
    }
  }
  return 0LL;
}
