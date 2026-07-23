/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x1404662A0
 * Callers:
 *     IoPropagateIrpExtension @ 0x140466280 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExtension @ 0x140466500 (IopAllocateIrpExtension.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140531DE8 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 IrpExtension; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int128 v30; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  v9 = 1;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = v4;
    return 0LL;
  }
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0LL);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v10 && (*(_BYTE *)(v10 + 2) & 4) != 0 )
    {
      v11 = *(_QWORD *)(a2 + 200);
      v12 = *(_BYTE *)(a2 + 71);
      if ( v11 )
      {
        if ( v12 >= 0 )
        {
          *(_WORD *)(v11 + 2) |= 4u;
LABEL_13:
          *(_DWORD *)(v11 + 4) = *(_DWORD *)(v4 + 4);
          goto LABEL_14;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 71) = v12 | 0x80;
      }
      v11 = a2 + 196;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (a4 & 4) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v13 && (*(_BYTE *)(v13 + 2) & 0x20) != 0 )
    {
      v20 = IopAllocateIrpExtension(a2, 5LL);
      if ( !v20 )
        return 3221225626LL;
      *(_QWORD *)(v20 + 48) = a3 + *(_QWORD *)(v4 + 48);
      v21 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)(v20 + 40) = v21;
      v22 = *(_QWORD *)(v4 + 40);
      if ( *(_QWORD *)(v22 + 8) )
        guard_dispatch_icall_no_overrides(v22, v21);
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v14 && (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
      IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16), (__int64)KeGetCurrentThread(), 1);
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_27;
  v15 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v15 || *(char *)(v15 + 2) >= 0 )
    goto LABEL_27;
  v23 = (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() == 0;
  v24 = (__int64 *)(v4 + 48);
  if ( v23 || (v30 = 0LL, (v25 = *v24) == 0) || *(_DWORD *)(v25 + 4) < 0x70u || !*(_QWORD *)(v25 + 96) )
  {
    if ( *v24 )
    {
      v9 = *(_DWORD *)(*v24 + 16) << 9;
      if ( !v9 )
        return 3221225485LL;
    }
    v27 = a3 % v9;
    v28 = a3 / v9;
    if ( v27 )
      return 3221225485LL;
    v29 = IopAllocateIrpExtension(a2, 7LL);
    if ( !v29 )
      return 3221225626LL;
    *(_OWORD *)(v29 + 40) = *(_OWORD *)(v4 + 40);
    *(_QWORD *)(v29 + 40) += v28;
LABEL_27:
    if ( (a4 & 0x20) == 0 )
      return 0LL;
    v17 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || !v17 || !_bittest16((const signed __int16 *)(v17 + 2), 8u) )
      return 0LL;
    v18 = IopAllocateIrpExtension(a2, 8LL);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 56) = *(_QWORD *)(v4 + 56);
      return 0LL;
    }
    return 3221225626LL;
  }
  v30 = *(_OWORD *)(v4 + 40);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v25 + 104), &v30);
  if ( (int)result >= 0 )
  {
    v26 = IopAllocateIrpExtension(a2, 7LL);
    if ( !v26 )
      return 3221225626LL;
    *(_OWORD *)(v26 + 40) = v30;
    goto LABEL_27;
  }
  return result;
}
