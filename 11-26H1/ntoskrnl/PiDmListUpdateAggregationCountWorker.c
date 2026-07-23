/*
 * XREFs of PiDmListUpdateAggregationCountWorker @ 0x140B16780
 * Callers:
 *     PiDmListAddObjectWorker @ 0x1409AA824 (PiDmListAddObjectWorker.c)
 *     PiDmListRemoveObjectWorker @ 0x140B16674 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCachedKeyIndex @ 0x140951FF0 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140962C40 (PiDmCacheDataDecode.c)
 */

__int64 __fastcall PiDmListUpdateAggregationCountWorker(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  char *v7; // rbx
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // rsi
  int v11; // ecx
  DEVPROPKEY **v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  _DWORD *v15; // rcx
  int v16; // ecx
  int v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18[9]; // [rsp+34h] [rbp-24h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  char v20; // [rsp+78h] [rbp+20h] BYREF

  result = (__int64)&retaddr;
  v18[0] = 0;
  v17 = 0;
  v20 = 0;
  v7 = byte_140001868;
  v8 = 3LL;
  do
  {
    v9 = *((_DWORD *)v7 - 6);
    if ( *(_DWORD *)(a2 + 28) == v9 )
    {
      result = *(unsigned int *)v7;
      if ( *(_DWORD *)(a1 + 28) == (_DWORD)result )
      {
        v10 = *((_QWORD *)v7 + 3);
        if ( *(_DWORD *)(v10 + a1) != 0x80000000 )
        {
          v11 = v9 - 1;
          if ( v11 )
          {
            v16 = v11 - 2;
            if ( v16 )
            {
              if ( v16 == 2 )
              {
                v12 = &PiDmCachedDeviceContainerKeys;
                v13 = 3;
              }
              else
              {
                v12 = 0LL;
                v13 = 0;
              }
            }
            else
            {
              v12 = &PiDmCachedDeviceInterfaceKeys;
              v13 = 1;
            }
          }
          else
          {
            v12 = &PiDmCachedDeviceKeys;
            v13 = 10;
          }
          result = PiDmGetCachedKeyIndex((__int64)v12, v13, *((_QWORD *)v7 - 2));
          if ( (unsigned int)result < v14 )
          {
            result = (unsigned int)result;
            v15 = (_DWORD *)(a2 + 8 * ((unsigned int)result + 2 * ((unsigned int)result + 7LL)));
            if ( *v15 <= 1u )
              goto LABEL_14;
            result = PiDmCacheDataDecode(v15, &v17, &v20, 1u, v18);
            if ( (int)result >= 0 )
            {
              if ( v17 == 17 && v20 == -1 )
                *(_DWORD *)(v10 + a1) += a3;
            }
            else if ( (_DWORD)result != -1073741275 && (_DWORD)result != -1073741789 )
            {
LABEL_14:
              *(_DWORD *)(v10 + a1) = 0x80000000;
            }
          }
        }
      }
    }
    v7 += 56;
    --v8;
  }
  while ( v8 );
  return result;
}
