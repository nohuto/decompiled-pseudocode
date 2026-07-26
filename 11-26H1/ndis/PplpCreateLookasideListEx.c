/*
 * XREFs of PplpCreateLookasideListEx @ 0x1400CB2F0
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400CA45C (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PplpCreateLookasideListEx(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, SIZE_T Size)
{
  int v7; // r14d
  _DWORD *Pool3; // rbx
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rdi
  _DWORD *v12; // r15
  _DWORD *result; // rax
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a1 + 1;
  v14[0] = 1LL;
  v14[1] = 0LL;
  Pool3 = (_DWORD *)ExAllocatePool3(72LL, ((unsigned __int64)(unsigned int)(a1 + 1) << 7) + 64, 1650738254LL, v14, 1);
  if ( !Pool3 )
    return 0LL;
  v9 = 0;
  v10 = 0LL;
  while ( v9 < v7 )
  {
    v11 = v10 << 7;
    v12 = &Pool3[32 * v10];
    KeInitializeSpinLock((PKSPIN_LOCK)v12 + 21);
    if ( v10 )
    {
      *((_BYTE *)Pool3 + v11 + 176) = 0;
      *(_QWORD *)((char *)Pool3 + v11 + 160) = Pool3 + 16;
    }
    else
    {
      if ( ExInitializeLookasideListEx(
             (PLOOKASIDE_LIST_EX)(v12 + 16),
             0LL,
             0LL,
             NonPagedPoolNx,
             0,
             Size,
             0x6264444Eu,
             0) < 0 )
      {
        ExFreePoolWithTag(Pool3, 0x6264444Eu);
        return 0LL;
      }
      *(_QWORD *)((char *)Pool3 + v11 + 160) = 0LL;
      *((_BYTE *)v12 + 176) = 1;
    }
    ++v9;
    ++v10;
  }
  *Pool3 = v7;
  Pool3[2] = 1650738254;
  Pool3[3] = 1650738254;
  result = Pool3;
  Pool3[1] = 0;
  *((_QWORD *)Pool3 + 2) = Size;
  Pool3[8] = 512;
  *((_WORD *)Pool3 + 18) = 0;
  *((_QWORD *)Pool3 + 3) = 0LL;
  return result;
}
