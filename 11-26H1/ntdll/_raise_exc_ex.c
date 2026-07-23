/*
 * XREFs of _raise_exc_ex @ 0x180130DE0
 * Callers:
 *     _except1 @ 0x180130900 (_except1.c)
 *     _raise_exc @ 0x180130DB0 (_raise_exc.c)
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     _clrfp @ 0x180131430 (_clrfp.c)
 *     _statfp @ 0x180131520 (_statfp.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall raise_exc_ex(unsigned __int64 a1, _QWORD *a2, char a3, int a4, _DWORD *a5, _DWORD *a6, int a7)
{
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  char v15; // al
  __int64 v16; // rax
  int v17; // eax
  __int64 result; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-D8h] BYREF

  *(_QWORD *)(a1 + 4) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  v10 = 0;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 4) |= 1u;
    v10 = -1073741681;
  }
  if ( (a3 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    v10 = -1073741677;
  }
  if ( (a3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 4) |= 4u;
    v10 = -1073741679;
  }
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 4) |= 8u;
    v10 = -1073741682;
  }
  if ( (a3 & 8) != 0 )
  {
    *(_DWORD *)(a1 + 4) |= 0x10u;
    v10 = -1073741680;
  }
  v11 = ~(16 * (unsigned __int8)(*a2 >> 7)) & 0x10;
  *(_DWORD *)(a1 + 8) = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)~(8 * (*a2 >> 9))) & 8;
  *(_DWORD *)(a1 + 8) = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)~(4 * (*a2 >> 10))) & 4;
  *(_DWORD *)(a1 + 8) = v13;
  v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)~(2 * (*a2 >> 11))) & 2;
  *(_DWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 8) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)~(unsigned __int8)((unsigned __int64)*(unsigned int *)a2 >> 12)) & 1;
  v15 = statfp();
  if ( (v15 & 1) != 0 )
    *(_DWORD *)(a1 + 12) |= 0x10u;
  if ( (v15 & 4) != 0 )
    *(_DWORD *)(a1 + 12) |= 8u;
  if ( (v15 & 8) != 0 )
    *(_DWORD *)(a1 + 12) |= 4u;
  if ( (v15 & 0x10) != 0 )
    *(_DWORD *)(a1 + 12) |= 2u;
  if ( (v15 & 0x20) != 0 )
    *(_DWORD *)(a1 + 12) |= 1u;
  v16 = *a2 & 0x6000LL;
  if ( (*a2 & 0x6000) != 0 )
  {
    switch ( v16 )
    {
      case 8192LL:
        *(_DWORD *)a1 &= ~2u;
        *(_DWORD *)a1 |= 1u;
        break;
      case 16384LL:
        *(_DWORD *)a1 &= ~1u;
        *(_DWORD *)a1 |= 2u;
        break;
      case 24576LL:
        *(_DWORD *)a1 |= 3u;
        break;
    }
  }
  else
  {
    *(_DWORD *)a1 &= 0xFFFFFFFC;
  }
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (32 * a4)) & 0x1FFE0;
  v17 = *(_DWORD *)(a1 + 32);
  if ( a7 )
  {
    *(_DWORD *)(a1 + 32) = v17 & 0xFFFFFFE0 | 1;
    *(_DWORD *)(a1 + 16) = *a5;
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFE0 | 1;
    *(_DWORD *)(a1 + 80) = *a6;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = v17 & 0xFFFFFFE0 | 3;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a5;
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFE0 | 3;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a6;
  }
  clrfp();
  *(_QWORD *)&ExceptionRecord.NumberParameters = 1LL;
  ExceptionRecord.ExceptionCode = v10;
  ExceptionRecord.ExceptionAddress = RaiseException;
  memset(&ExceptionRecord.ExceptionInformation[1], 0, 112);
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[0] = a1;
  RtlRaiseException(&ExceptionRecord);
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
    *a2 &= ~0x80uLL;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
    *a2 &= ~0x200uLL;
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    *a2 &= ~0x400uLL;
  if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    *a2 &= ~0x800uLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    *a2 &= ~0x1000uLL;
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    switch ( *(_DWORD *)a1 & 3 )
    {
      case 1:
        *a2 &= ~0x4000uLL;
        *a2 |= 0x2000uLL;
        break;
      case 2:
        *a2 &= ~0x2000uLL;
        *a2 |= 0x4000uLL;
        break;
      case 3:
        *a2 |= 0x6000uLL;
        break;
    }
  }
  else
  {
    *a2 &= 0xFFFFFFFFFFFF9FFFuLL;
  }
  if ( a7 )
  {
    result = *(unsigned int *)(a1 + 80);
    *a6 = result;
  }
  else
  {
    result = *(_QWORD *)(a1 + 80);
    *(_QWORD *)a6 = result;
  }
  return result;
}
