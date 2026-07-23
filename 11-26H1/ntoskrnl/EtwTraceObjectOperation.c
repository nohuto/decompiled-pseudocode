/*
 * XREFs of EtwTraceObjectOperation @ 0x14042D490
 * Callers:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14042D60C (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1404C7F18 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceObjectOperation(unsigned __int16 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v5; // r10d
  unsigned __int64 v6; // rcx
  unsigned int v9; // r12d
  __int64 result; // rax
  unsigned int v11; // r9d
  bool v12; // zf
  __int64 v13; // r11
  __int64 v14; // r8
  unsigned __int8 *v15; // rbx
  unsigned int v16; // edi
  int v17; // r8d
  char v18; // r11
  __int128 v20; // [rsp+38h] [rbp-60h] BYREF
  int v21; // [rsp+48h] [rbp-50h]
  _QWORD v22[2]; // [rsp+50h] [rbp-48h] BYREF

  v5 = 0;
  v6 = *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  v21 = 0;
  v20 = 0LL;
  v9 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6] + 192);
  result = EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v12 = !_BitScanForward((unsigned int *)&v13, v11);
  if ( !v12 )
  {
    do
    {
      v11 &= v11 - 1;
      result = 32LL * (unsigned int)v13 + EtwpHostSiloState + 4556;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v13;
          v14 = 0LL;
          v15 = &stru_140F03830.WaitBlockFill5[20 * v13 + 48];
          v16 = *(unsigned __int16 *)v15;
          while ( (unsigned int)v14 < v16 )
          {
            result = ExCheckSingleFilter(v9, *(unsigned int *)&v15[4 * v14 + 4], v14);
            if ( (_DWORD)result )
            {
              result = (unsigned int)(1 << v18);
              v5 |= result;
              break;
            }
            v14 = (unsigned int)(v17 + 1);
          }
        }
      }
      v12 = !_BitScanForward((unsigned int *)&v13, v11);
    }
    while ( !v12 );
    if ( v5 )
    {
      *((_QWORD *)&v20 + 1) = __PAIR64__(a3, a4);
      *(_QWORD *)&v20 = a2 + 48;
      v22[0] = &v20;
      v22[1] = 16LL;
      return EtwpTraceKernelEventWithFilter((unsigned int)v22, 1, v5, a1, 291512066);
    }
  }
  return result;
}
