/*
 * XREFs of EtwTraceDuplicateHandle @ 0x140AD3AE0
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 * Callees:
 *     EtwpTraceKernelEventWithFilter @ 0x1404C7F18 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceDuplicateHandle(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 result; // rax
  int v10; // r14d
  unsigned int v12; // r10d
  bool v13; // zf
  __int64 v14; // r11
  __int64 v15; // rdx
  unsigned __int8 *v16; // rbx
  unsigned int v17; // edi
  unsigned int v18; // r9d
  char v19; // cl
  _DWORD v20[2]; // [rsp+30h] [rbp-50h]
  _DWORD v21[2]; // [rsp+38h] [rbp-48h]
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  _TBYTE v23; // [rsp+50h] [rbp-30h]
  _QWORD v24[2]; // [rsp+60h] [rbp-20h] BYREF

  v23 = 0.0;
  v7 = 0LL;
  v20[0] = 0;
  result = EtwpHostSiloState;
  v10 = *(_DWORD *)(a6 + 192);
  v24[0] = a1;
  v22 = 0LL;
  v12 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v13 = !_BitScanForward((unsigned int *)&v14, v12);
  if ( !v13 )
  {
    do
    {
      v12 &= v12 - 1;
      result = 32LL * (unsigned int)v14 + EtwpHostSiloState + 4556;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x40) != 0 )
        {
          result = 5 * v14;
          v15 = 0LL;
          v16 = &stru_140F03830.WaitBlockFill5[20 * v14 + 48];
          v17 = *(unsigned __int16 *)v16;
LABEL_8:
          if ( (unsigned int)v15 < v17 )
          {
            v18 = 0;
            result = 0LL;
            v21[0] = *(_DWORD *)&v16[4 * v15 + 4];
            v20[0] = v10;
            while ( v18 < 4 )
            {
              v19 = *((_BYTE *)v21 + result);
              if ( v19 != 63 )
              {
                if ( v19 == 42 )
                  break;
                if ( *((_BYTE *)v20 + result) != v19 )
                {
                  v15 = (unsigned int)(v15 + 1);
                  goto LABEL_8;
                }
              }
              ++v18;
              ++result;
            }
            result = (unsigned int)(1 << v14);
            v7 = (unsigned int)result | (unsigned int)v7;
          }
        }
      }
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
    }
    while ( !v13 );
    if ( (_DWORD)v7 )
    {
      *((_QWORD *)&v22 + 1) = __PAIR64__(a2, v24[0]);
      LODWORD(v23) = a5;
      WORD2(v23) = *(unsigned __int8 *)(a6 + 40);
      v24[0] = &v22;
      *(_QWORD *)&v22 = a3;
      *(_DWORD *)((char *)&v23 + 6) = a4;
      v24[1] = 26LL;
      return EtwpTraceKernelEventWithFilter((__int64)v24, 1u, v7, 0x1122u, 0x10601903u);
    }
  }
  return result;
}
