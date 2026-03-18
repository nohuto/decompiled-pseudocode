/*
 * XREFs of AdminQueuesFreeResources @ 0x140011A00
 * Callers:
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x140017BD4 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall AdminQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // rdi
  __int64 v6; // r9
  _QWORD *j; // rdi
  __int64 v8; // r9
  __int64 result; // rax
  void *v10; // rcx
  void **v11; // rdi
  __int64 v12; // rbp
  _BYTE *v13; // rsi
  void *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r9

  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = *(_QWORD **)(a1 + 528); i; i = *(_QWORD **)(a1 + 528) )
    {
      *(_QWORD *)(a1 + 528) = i[3];
      StorPortExtendedFunction(1LL, a1, *i, a4);
      StorPortExtendedFunction(1LL, a1, i, v6);
    }
    for ( j = *(_QWORD **)(a1 + 536); j; j = *(_QWORD **)(a1 + 536) )
    {
      *(_QWORD *)(a1 + 536) = j[3];
      StorPortExtendedFunction(1LL, a1, *j, a4);
      StorPortExtendedFunction(1LL, a1, j, v8);
    }
    NVMeFreePool(a1);
    *(_QWORD *)(a1 + 360) = 0LL;
    result = NVMeFreePool(a1);
    v10 = *(void **)(a1 + 1104);
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_BYTE *)(a1 + 1008) = 0;
    if ( v10 )
      result = (__int64)memset(v10, 0, 0x1088uLL);
    v11 = (void **)(a1 + 1232);
    v12 = 2LL;
    v13 = (_BYTE *)(a1 + 1136);
    do
    {
      v14 = *v11;
      *v13 = 0;
      if ( v14 )
        result = (__int64)memset(v14, 0, 0x1088uLL);
      v13 += 128;
      v11 += 16;
      --v12;
    }
    while ( v12 );
    v15 = *(_QWORD *)(a1 + 1392);
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 96) && *(_WORD *)(a1 + 1552) )
        NVMeFreeDmaBuffer(
          a1,
          (unsigned __int64)*(unsigned __int16 *)(a1 + 1552) << 13,
          (__int64 *)(v15 + 96),
          *(_QWORD *)(v15 + 104));
      result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1392), v15);
      *(_QWORD *)(a1 + 1392) = 0LL;
      *(_WORD *)(a1 + 1552) = 0;
    }
    v16 = *(_QWORD *)(a1 + 1400);
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 96) )
      {
        if ( *(_WORD *)(a1 + 1554) )
          NVMeFreeDmaBuffer(
            a1,
            (unsigned __int64)*(unsigned __int16 *)(a1 + 1554) << 13,
            (__int64 *)(v16 + 96),
            *(_QWORD *)(v16 + 104));
      }
      result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1400), v16);
      *(_QWORD *)(a1 + 1400) = 0LL;
      *(_WORD *)(a1 + 1554) = 0;
    }
  }
  return result;
}
