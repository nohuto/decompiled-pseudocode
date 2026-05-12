/*
 * XREFs of sub_1400DD1F0 @ 0x1400DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 */

char __fastcall sub_1400DD1F0(LARGE_INTEGER *a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  bool v4; // zf
  unsigned int v5; // r10d
  unsigned int i; // r9d
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // r9
  bool v10; // cl
  LARGE_INTEGER v11; // rax
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+8h] BYREF

  v2 = &retaddr;
  v4 = *(_BYTE *)(a2 + 2) == 40;
  PerformanceFrequency.QuadPart = 0LL;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 56);
    if ( v5 )
    {
      for ( i = 0; i < v5; ++i )
      {
        LOBYTE(v2) = i;
        v7 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v7 >= 0x80 && (unsigned int)v7 < *(_DWORD *)(a2 + 16) )
        {
          v8 = a2 + v7;
          if ( *(_DWORD *)(a2 + v7) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v8 = 0LL;
LABEL_10:
  v9 = *(_BYTE *)(a2 + 3);
  if ( v9 == 1 )
  {
    LOWORD(v2) = *(_WORD *)(v8 + 86);
    v10 = ((unsigned __int16)v2 & 0xE00) == 0;
    LOBYTE(v2) = ((unsigned __int16)v2 & 0x1FE) == 0;
    if ( (v10 & (unsigned __int8)v2) != 0 )
    {
      if ( byte_140168724 )
        v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v11.QuadPart = KeQueryUnbiasedInterruptTime();
      a1[136] = v11;
      LOBYTE(v2) = sub_1400A870C(
                     (__int64)a1,
                     1,
                     4,
                     (__int64)L"Keep Alive response received",
                     (void *)&dword_140149108,
                     0,
                     &dword_140149108,
                     0,
                     &dword_140149108,
                     0,
                     &dword_140149108,
                     0,
                     (void *)&dword_140149108,
                     0,
                     (void *)&dword_140149108,
                     0,
                     (void *)&dword_140149108,
                     0,
                     (void *)&dword_140149108,
                     0);
      return (char)v2;
    }
  }
  else if ( v9 == 37 )
  {
    return (char)v2;
  }
  if ( v9 != 2 )
    LOBYTE(v2) = sub_1400A870C(
                   (__int64)a1,
                   1,
                   3,
                   (__int64)L"Keep Alive failed",
                   L"SrbStatus",
                   v9,
                   L"SCT",
                   ((unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 9) & 7,
                   L"SC",
                   (unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 1,
                   &dword_140149108,
                   0,
                   (void *)&dword_140149108,
                   0,
                   (void *)&dword_140149108,
                   0,
                   (void *)&dword_140149108,
                   0,
                   (void *)&dword_140149108,
                   0);
  return (char)v2;
}
