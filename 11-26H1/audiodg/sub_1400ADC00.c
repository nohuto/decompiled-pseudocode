/*
 * XREFs of sub_1400ADC00 @ 0x1400ADC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400ADC00(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  void *v5; // rcx
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v12; // eax
  DWORD BytesReturned; // [rsp+40h] [rbp-38h] BYREF
  __int128 OutBuffer; // [rsp+48h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *(void **)(a1 + 16);
  if ( !v5 || v5 == (void *)-1LL )
  {
    v7 = -2147467261;
    v8 = 41;
  }
  else if ( *(_DWORD *)(a1 + 24) )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
      goto LABEL_10;
    BytesReturned = 0;
    OutBuffer = 0LL;
    if ( !DeviceIoControl(v5, 0x22000Cu, 0LL, 0, &OutBuffer, 0x10u, &BytesReturned, 0LL) )
      return sub_1400470EC(
               (int)retaddr,
               50,
               (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\crossprocessfileobjectbasedcpservermemory.cpp",
               v10);
    v9 = OutBuffer;
    v12 = DWORD2(OutBuffer);
    *(_QWORD *)(a1 + 32) = OutBuffer;
    if ( *(_DWORD *)(a1 + 24) == v12 )
    {
LABEL_10:
      *a3 = v9;
      *a2 = *(_DWORD *)(a1 + 24);
      return 0LL;
    }
    v7 = -2147418113;
    v8 = 54;
  }
  else
  {
    v7 = -2147467259;
    v8 = 44;
  }
  sub_14000C2A8(
    (int)retaddr,
    v8,
    (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\crossprocessfileobjectbasedcpservermemory.cpp",
    v7);
  return v7;
}
