/*
 * XREFs of MiExtendSection @ 0x140A6590C
 * Callers:
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 * Callees:
 *     MiAppendSubsectionChain @ 0x1404C17E8 (MiAppendSubsectionChain.c)
 *     MiGetSubsectionContents @ 0x1404C5824 (MiGetSubsectionContents.c)
 *     MiSubsectionNeedsExtents @ 0x1406FCE18 (MiSubsectionNeedsExtents.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiDeleteExtendSubsections @ 0x14077B9E0 (MiDeleteExtendSubsections.c)
 *     MiAllocateExtendSubsections @ 0x140A65A94 (MiAllocateExtendSubsections.c)
 */

__int64 __fastcall MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rsi
  _DWORD *v9; // r12
  int v10; // eax
  __int64 v11; // rbp
  int ExtendSubsections; // edi
  __int64 v13; // r9
  __int16 v14; // r8
  __int64 v15; // rdx
  __int64 result; // rax
  _BYTE v17[52]; // [rsp+30h] [rbp-C8h] BYREF
  int v18; // [rsp+64h] [rbp-94h]

  v5 = a3;
  memset_0(v17, 0, 0xA0uLL);
  v9 = *(_DWORD **)a1;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x30000000;
  *a5 = 0LL;
  v11 = (-(__int64)(v10 != 0) & 0x100000) + 0x100000;
  MiGetSubsectionContents((__int64)v17, a1);
  if ( (_DWORD)v5 )
    v18 -= v5;
  ExtendSubsections = MiAllocateExtendSubsections((unsigned int)v17, *a2, a4, (8 * a4 + 4095) & 0xFFFFF000, v11);
  if ( ExtendSubsections < 0 )
    goto LABEL_7;
  if ( (_DWORD)v5 && (v9[14] & 0x30000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      MiSubsectionNeedsExtents((_DWORD *)a1);
      *a5 = a1;
    }
  }
  ExtendSubsections = MiAppendSubsectionChain((__int64 *)a1, (__int64)v17, (8 * a4 + 4095) & 0xFFFFF000, v11, v5, a5);
  if ( ExtendSubsections < 0 )
  {
LABEL_7:
    MiDeleteExtendSubsections((__int64)v17);
    result = (unsigned int)ExtendSubsections;
    *a5 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)v9;
    v14 = *(_WORD *)(*(_QWORD *)v9 + 12LL);
    v15 = v5 + a4 + (*(unsigned int *)(*(_QWORD *)v9 + 8LL) | ((unsigned __int64)(v14 & 0x3FF) << 32));
    *(_DWORD *)(v13 + 8) = v5 + a4 + *(_DWORD *)(*(_QWORD *)v9 + 8LL);
    *(_WORD *)(v13 + 12) = v14 ^ (v14 ^ WORD2(v15)) & 0x3FF;
    return 0LL;
  }
  return result;
}
