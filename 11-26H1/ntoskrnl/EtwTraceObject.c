/*
 * XREFs of EtwTraceObject @ 0x14082DD04
 * Callers:
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14042D60C (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1404C7F18 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceObject(unsigned __int16 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // rbp
  int v6; // r15d
  __int64 result; // rax
  unsigned int v8; // r9d
  bool v9; // zf
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned __int8 *v12; // rbx
  unsigned int v13; // edi
  int v14; // r8d
  char v15; // r11
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)(ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2));
  v16 = 0LL;
  v6 = *(_DWORD *)(ObTypeIndexTable[v3] + 192);
  result = EtwpHostSiloState;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v9 = !_BitScanForward((unsigned int *)&v10, v8);
  if ( !v9 )
  {
    do
    {
      v8 &= v8 - 1;
      result = 32LL * (unsigned int)v10 + EtwpHostSiloState + 4556;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v10;
          v11 = 0LL;
          v12 = &stru_140F03830.WaitBlockFill5[20 * v10 + 48];
          v13 = *(unsigned __int16 *)v12;
          while ( (unsigned int)v11 < v13 )
          {
            result = ExCheckSingleFilter(v6, *(_DWORD *)&v12[4 * v11 + 4]);
            if ( (_DWORD)result )
            {
              result = (unsigned int)(1 << v15);
              v2 |= result;
              break;
            }
            v11 = (unsigned int)(v14 + 1);
          }
        }
      }
      v9 = !_BitScanForward((unsigned int *)&v10, v8);
    }
    while ( !v9 );
    if ( v2 )
    {
      WORD4(v16) = v3;
      *(_QWORD *)&v16 = a2 + 48;
      v17[1] = 16LL;
      v17[0] = &v16;
      return EtwpTraceKernelEventWithFilter((__int64)v17, 1u, v2, a1, 0x10601902u);
    }
  }
  return result;
}
