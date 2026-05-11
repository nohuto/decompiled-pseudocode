/*
 * XREFs of USBType1LockDelay @ 0x140040AC4
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x140002380 (USBType1ProcessStreamPointer.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1400025D0 (USBType1BuildIsochUrbRequest.c)
 */

__int64 __fastcall USBType1LockDelay(struct _KSPIN *a1)
{
  _QWORD *Context; // rax
  unsigned int v2; // r9d
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // r8d
  unsigned int v7; // edi
  struct _KSSTREAM_POINTER *Pool2; // rax
  struct _KSSTREAM_POINTER *v9; // rbx
  int v10; // edi
  __int64 result; // rax

  Context = a1->Context;
  v2 = 0;
  v4 = Context[19];
  v5 = *(_QWORD *)(Context[18] + 160LL);
  if ( *(_BYTE *)(v5 + 4) == 1 )
  {
    v2 = *(unsigned __int16 *)(v5 + 5);
  }
  else if ( *(_BYTE *)(v5 + 4) == 2 )
  {
    v2 = (unsigned int)*(unsigned __int16 *)(v5 + 5) / *(_DWORD *)(v4 + 132);
  }
  v6 = 1;
  if ( v2 )
    v6 = v2;
  v7 = *(_DWORD *)(v4 + 8) * (*(_DWORD *)(v4 + 132) * v6 + v6 * (*(_DWORD *)(v4 + 136) >> 14) / 0x3E8u);
  Pool2 = (struct _KSSTREAM_POINTER *)ExAllocatePool2(64LL, v7 + 64, 1096972357LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Pool2->Pin = a1;
    Pool2->OffsetIn.Data = (PUCHAR)&Pool2[1];
    Pool2->OffsetIn.Count = v7;
    Pool2->OffsetIn.Remaining = v7;
    v10 = USBType1BuildIsochUrbRequest(Pool2, (__int64 (__fastcall *)())USBType1LockDelayCompleteCallback);
    if ( v10 < 0 )
      ExFreePool(v9);
  }
  else
  {
    v10 = -1073741670;
  }
  result = (unsigned int)v10;
  *(_BYTE *)(v4 + 115) = 0;
  return result;
}
