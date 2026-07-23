/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x14024C3B0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KasanMarkAddressInvalidNoInline @ 0x1405E00B0 (KasanMarkAddressInvalidNoInline.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, _RTL_RB_TREE *a2, __int64 a3, ULONG_PTR a4)
{
  unsigned int v7; // r10d
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r11
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // esi
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 Root; // rax
  BOOLEAN v21; // r8
  unsigned __int64 v22; // rax

  v7 = (a4 - a3 + 4127) & 0xFFFFF000;
  v8 = 16 * (WORD1(a4) ^ WORD1(*(_QWORD *)a4) ^ (unsigned __int64)*(unsigned __int16 *)&PspTlsContext.Timer.TimerType);
  v9 = 0LL;
  v10 = (v8 + 4095) >> 12;
  v11 = ((a4 & 0xFFF) + 4095 + v8) >> 12;
  v12 = (a4 + 16 * (WORD1(a4) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)a4)) - a3) & 0xFFFFF000;
  if ( v7 >= v12 )
  {
    v13 = 0;
    v14 = 0LL;
  }
  else
  {
    v13 = v12 - v7;
    v14 = *(_QWORD *)(a3 + 16) & (-1LL << (v7 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v12 - 1) >> 12)));
  }
  v15 = *(__int16 *)(a1 + 6);
  v16 = __popcnt(v14);
  v17 = v13 >> 12;
  if ( (_WORD)v15 )
    _InterlockedAdd64((volatile signed __int64 *)(v15 + a1 + 32), v16);
  else
    *(_QWORD *)(a1 + 96) += v16;
  *(_WORD *)a4 = PspTlsContext.Timer.Processor ^ (v11 + v17 - v16 - v10) ^ a4;
  v18 = *(_DWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)a4 ^ a4;
  if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 )
  {
    if ( byte_140FC8BD8 )
    {
      KasanMarkAddressInvalidNoInline(
        a4,
        16
      * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ (unsigned __int64)(((unsigned int)a4 ^ (unsigned int)*(_QWORD *)a4) >> 16)));
      if ( byte_140FC8BD8 )
        KasanMarkAddressValidNoInline(a4 + 8, 0x18uLL);
    }
  }
  Min = a2[1].Min;
  Root = (unsigned __int64)a2[1].Root;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( !Root )
    {
      v21 = 0;
      return RtlRbInsertNodeEx(a2 + 1, (PRTL_BALANCED_NODE)v9, v21, (PRTL_BALANCED_NODE)(a4 + 8));
    }
    Root ^= (unsigned __int64)&a2[1];
  }
  v21 = 0;
  v9 = Root;
  if ( Root )
  {
    while ( 1 )
    {
      if ( v18 < (*(_DWORD *)&PspTlsContext.Timer.Processor ^ (unsigned int)*(_QWORD *)(v9 - 8) ^ ((_DWORD)v9 - 8)) )
      {
        v22 = *(_QWORD *)v9;
        if ( ((unsigned __int8)Min & 1) != 0 )
        {
          if ( !v22 )
            return RtlRbInsertNodeEx(a2 + 1, (PRTL_BALANCED_NODE)v9, v21, (PRTL_BALANCED_NODE)(a4 + 8));
          v22 ^= v9;
        }
        if ( !v22 )
          return RtlRbInsertNodeEx(a2 + 1, (PRTL_BALANCED_NODE)v9, v21, (PRTL_BALANCED_NODE)(a4 + 8));
      }
      else
      {
        v22 = *(_QWORD *)(v9 + 8);
        if ( ((unsigned __int8)Min & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_20;
          v22 ^= v9;
        }
        if ( !v22 )
        {
LABEL_20:
          v21 = 1;
          return RtlRbInsertNodeEx(a2 + 1, (PRTL_BALANCED_NODE)v9, v21, (PRTL_BALANCED_NODE)(a4 + 8));
        }
      }
      v9 = v22;
    }
  }
  return RtlRbInsertNodeEx(a2 + 1, (PRTL_BALANCED_NODE)v9, v21, (PRTL_BALANCED_NODE)(a4 + 8));
}
