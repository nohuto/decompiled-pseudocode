/*
 * XREFs of sub_1400842D8 @ 0x1400842D8
 * Callers:
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 * Callees:
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 *     sub_140080C8C @ 0x140080C8C (sub_140080C8C.c)
 *     sub_14008336C @ 0x14008336C (sub_14008336C.c)
 */

__int64 __fastcall sub_1400842D8(__int64 a1)
{
  __int64 v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  int v4; // r14d
  _BYTE *v5; // r14
  unsigned __int16 *v6; // rsi
  ATL::CAtlException *v8; // rbx
  unsigned __int16 *v9; // [rsp+30h] [rbp-48h]
  _BYTE *v10; // [rsp+38h] [rbp-40h]
  ATL::CAtlException *v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  int v14; // [rsp+88h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  v15 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v3 = 0LL;
  v4 = 0;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 144), 0LL, 0LL) )
  {
    if ( (int)sub_14008336C(v1) < 0 )
      goto LABEL_10;
    ++v4;
    if ( v4 == 100 * (v4 / 100) )
      sub_14004E2C8(retaddr, 299LL, (__int64)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", 2289827891LL);
  }
  *(_QWORD *)(v1 + 160) = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 152), 0LL, 0LL);
  v5 = (_BYTE *)(v1 + 216);
  v10 = (_BYTE *)(v1 + 216);
  if ( *(_BYTE *)(v1 + 216) )
  {
    try
    {
      v6 = (unsigned __int16 *)(v1 + 168);
      v9 = (unsigned __int16 *)(v1 + 168);
      sub_140080C8C(
        v1 + ((*(unsigned __int16 *)(v1 + 168) ^ 1LL) << 6),
        (unsigned int *)(v1 + ((unsigned __int64)*(unsigned __int16 *)(v1 + 168) << 6)));
    }
    catch ( ATL::CAtlException *v11 )
    {
      v8 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        o__resetstkoflw();
      v14 = *(_DWORD *)v8;
      v3 = 0LL;
      if ( v14 < 0 )
      {
        v2 = v15;
LABEL_10:
        LeaveCriticalSection(v2);
        return v3;
      }
      v1 = a1;
      v6 = v9;
      v5 = v10;
    }
    *v5 = 0;
  }
  else
  {
    v6 = (unsigned __int16 *)(v1 + 168);
  }
  return v1 + ((*v6 ^ 1LL) << 6);
}
