/*
 * XREFs of NvmeRingSQDoorbellForBatchingSplitIo @ 0x14011E100
 * Callers:
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeRingSQDoorbellForBatchingSplitIo(__int64 a1, __int64 a2, int a3, __int16 a4, char a5)
{
  KIRQL v5; // si
  char v6; // r15
  bool v10; // zf
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v5 = 0;
  v6 = *(_BYTE *)(a1 + 1728);
  if ( **(_DWORD **)(a1 + 1288) || !a2 )
    return;
  if ( a5 )
    v5 = KfRaiseIrql(2u);
  do
  {
    if ( *(_WORD *)(a2 + 142) != a4 )
    {
      if ( !a5 )
        return;
      goto LABEL_16;
    }
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 132), 1, 0) );
  while ( *(_DWORD *)(a2 + 128) )
    _InterlockedOr(v11, 0);
  if ( *(_WORD *)(a2 + 142) == a4 )
  {
    if ( v6 == 1 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int *))(*(_QWORD *)(a1 + 128) + 528LL))(
        *(_QWORD *)(a1 + 1648) + 64LL,
        *(unsigned int *)(a2 + 16),
        4LL,
        0LL,
        &v12);
    }
    else
    {
      **(_DWORD **)(a2 + 16) = v12;
      _InterlockedOr(v11, 0);
    }
  }
  _InterlockedOr(v11, 0);
  v10 = a5 == 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 132), 0);
  if ( !v10 )
LABEL_16:
    KeLowerIrql(v5);
}
