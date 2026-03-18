/*
 * XREFs of IoQueuesFreeResources @ 0x14000D2C0
 * Callers:
 *     IoQueuesCreation @ 0x14000D1E0 (IoQueuesCreation.c)
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     IoQueuesCreationAsync @ 0x14001495C (IoQueuesCreationAsync.c)
 *     NVMeControllerStop @ 0x140017BD4 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeCompletePendingForwardIoRequests @ 0x140016528 (NVMeCompletePendingForwardIoRequests.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1)
{
  int v1; // eax
  _QWORD *v3; // rcx
  unsigned int v4; // esi
  __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 i; // rdx
  _QWORD *v8; // r14
  unsigned __int16 v9; // bp
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // r9
  _QWORD *v15; // rdi
  __int64 v16; // r9
  unsigned __int16 v17; // bp
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned int j; // r15d

  v1 = *(unsigned __int16 *)(a1 + 326);
  v3 = (_QWORD *)(a1 + 936);
  v4 = 16 * v1;
  result = (unsigned int)(v1 << 6);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v6 = (_QWORD *)(a1 + 944);
  }
  else
  {
    i = *v3;
    v8 = v3;
    if ( *v3 )
    {
      v9 = 0;
      if ( *(_WORD *)(a1 + 330) )
      {
        v10 = (unsigned int)result;
        do
        {
          v11 = 208LL * v9;
          NVMeCompletePendingForwardIoRequests(a1, v11 + i, 0, 1, 1, 8);
          result = NVMeFreeDmaBuffer(a1, v10, v11 + *v8, *(_QWORD *)(v11 + *v8 + 8));
          for ( i = *v8; *(_QWORD *)(*v8 + v11 + 192); i = *v8 )
          {
            v13 = *(_QWORD **)(v11 + i + 192);
            *(_QWORD *)(v11 + i + 192) = v13[3];
            StorPortExtendedFunction(1LL, a1, *v13, v12);
            result = StorPortExtendedFunction(1LL, a1, v13, v14);
          }
          if ( *(_QWORD *)(v11 + i + 200) )
          {
            do
            {
              v15 = *(_QWORD **)(v11 + i + 200);
              *(_QWORD *)(v11 + i + 200) = v15[3];
              StorPortExtendedFunction(1LL, a1, *v15, v12);
              result = StorPortExtendedFunction(1LL, a1, v15, v16);
              i = *v8;
            }
            while ( *(_QWORD *)(*v8 + v11 + 200) );
          }
          ++v9;
        }
        while ( v9 < *(_WORD *)(a1 + 330) );
      }
    }
    v6 = (_QWORD *)(a1 + 944);
    if ( *(_QWORD *)(a1 + 944) )
    {
      v17 = 0;
      if ( *(_WORD *)(a1 + 332) )
      {
        v18 = v4;
        do
        {
          v19 = 392LL * v17;
          if ( *(_BYTE *)(v19 + *v6 + 248) && *(_QWORD *)(v19 + *v6 + 256) )
          {
            for ( j = 0;
                  j < *(unsigned __int16 *)(a1 + 234);
                  StorPortExtendedFunction(91LL, a1, *(_QWORD *)(*(_QWORD *)(*v6 + v19 + 256) + 8LL * j++), 1LL) )
            {
              ;
            }
            NVMeFreePool(a1);
          }
          result = NVMeFreeDmaBuffer(a1, v18, v19 + *v6, *(_QWORD *)(v19 + *v6 + 8));
          ++v17;
        }
        while ( v17 < *(_WORD *)(a1 + 332) );
      }
    }
    if ( *v8 )
    {
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      result = NVMeFreePool(a1);
    }
    v3 = v8;
    if ( *v6 )
    {
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      result = NVMeFreePool(a1);
      v3 = v8;
    }
  }
  *v6 = 0LL;
  *v3 = 0LL;
  *(_DWORD *)(a1 + 330) = 0;
  return result;
}
