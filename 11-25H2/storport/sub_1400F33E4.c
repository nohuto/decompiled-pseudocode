/*
 * XREFs of sub_1400F33E4 @ 0x1400F33E4
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DB85C @ 0x1400DB85C (sub_1400DB85C.c)
 *     sub_1400DBB2C @ 0x1400DBB2C (sub_1400DBB2C.c)
 *     sub_1400F3324 @ 0x1400F3324 (sub_1400F3324.c)
 *     sub_1400F4AF8 @ 0x1400F4AF8 (sub_1400F4AF8.c)
 *     sub_1400F4C14 @ 0x1400F4C14 (sub_1400F4C14.c)
 *     sub_1400F4DB8 @ 0x1400F4DB8 (sub_1400F4DB8.c)
 *     sub_1400F5264 @ 0x1400F5264 (sub_1400F5264.c)
 *     sub_1400F56B4 @ 0x1400F56B4 (sub_1400F56B4.c)
 *     sub_1400F58E8 @ 0x1400F58E8 (sub_1400F58E8.c)
 *     sub_1400F5B44 @ 0x1400F5B44 (sub_1400F5B44.c)
 *     sub_1400F5DCC @ 0x1400F5DCC (sub_1400F5DCC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F33E4(__int64 a1)
{
  char v2; // r15
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  void *v8; // r14
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  _BYTE v19[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v20; // [rsp+64h] [rbp-9Ch] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  _BYTE Dst[256]; // [rsp+70h] [rbp-90h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v20 = 0;
  v19[0] = 0;
  memset_0(Dst, 0, sizeof(Dst));
  v2 = 0;
  if ( byte_140168724 )
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v3.QuadPart = KeQueryUnbiasedInterruptTime();
  v4 = v3;
  sub_1400F3324(a1);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v5 + 128);
  v7 = sub_14007B110(v5, 0);
  v8 = (void *)v7;
  if ( v7 )
  {
    v2 = 1;
    v9 = sub_1400F58E8(a1, v7);
    if ( v9 >= 0 )
    {
      v2 = 2;
      v9 = sub_1400F4DB8(a1, v8);
      if ( v9 >= 0 )
      {
        v2 = 3;
        v9 = sub_1400F4AF8(a1, &v20, Dst);
        if ( v9 >= 0 )
        {
          v2 = 4;
          v9 = sub_1400F5B44(a1, v8, v10, Dst);
          if ( v9 >= 0 )
          {
            v2 = 5;
            v9 = sub_1400F5264(a1, v8, v19);
            if ( v9 >= 0 )
            {
              if ( v19[0] )
              {
                v2 = 6;
                v9 = sub_1400F4C14(a1);
                if ( v9 >= 0 )
                {
                  v2 = 7;
                  v9 = sub_1400F5DCC(a1, v8);
                }
                else
                {
                  LOBYTE(v12) = 1;
                  sub_1400F56B4(a1, v8, v11, v12);
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v9 < 0 )
  {
    if ( (byte_1401694FA & 8) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
        v16 = PerformanceCounter.QuadPart - v4.QuadPart;
      else
        v16 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
      if ( byte_140168724 )
      {
        v17 = 0LL;
        if ( PerformanceFrequency.QuadPart && v16 )
          v17 = 10000
              * (1000 * (v16 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v16 / PerformanceFrequency.QuadPart)
               + 1000 * (v16 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
      }
      else
      {
        v17 = v16;
      }
      sub_1400DB85C(
        *(_QWORD *)(a1 + 88),
        &stru_14014A2E8,
        v6 + 1032,
        *(_DWORD *)(v6 + 56),
        v6 + 1032,
        *(const wchar_t **)(v6 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
        *(_WORD *)(a1 + 136),
        v9,
        v2,
        v17 / 0xA);
    }
  }
  else if ( (byte_1401694FA & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
      v14 = PerformanceCounter.QuadPart - v4.QuadPart;
    else
      v14 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
    if ( byte_140168724 )
    {
      v15 = 0LL;
      if ( PerformanceFrequency.QuadPart && v14 )
        v15 = 10000
            * (1000 * (v14 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v14 / PerformanceFrequency.QuadPart)
             + 1000 * (v14 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
    }
    else
    {
      v15 = v14;
    }
    sub_1400DBB2C(
      *(_QWORD *)(a1 + 88),
      &stru_14014A6B0,
      v6 + 1032,
      *(_DWORD *)(v6 + 56),
      v6 + 1032,
      *(const wchar_t **)(v6 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
      *(_WORD *)(a1 + 136),
      v15 / 0xA);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72536152u);
  return (unsigned int)v9;
}
