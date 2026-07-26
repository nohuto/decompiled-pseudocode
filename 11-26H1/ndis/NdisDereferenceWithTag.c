/*
 * XREFs of NdisDereferenceWithTag @ 0x1400142A0
 * Callers:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BEE0 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009ECC4 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  int v3; // ecx
  __int64 v4; // r10
  unsigned __int8 j; // al
  _BYTE *v6; // r9
  char v7; // cl
  ULONG_PTR v8; // rbx
  unsigned int v9; // r9d
  int v10; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rdi

  if ( BugCheckParameter3 - 2 > 1 )
  {
    if ( BugCheckParameter3 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)BugCheckParameter3 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, 0xFFuLL);
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(BugCheckParameter3 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, BugCheckParameter3, a2);
      v3 = *(unsigned __int8 *)(BugCheckParameter3 + 1);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v8 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v9 = *(_DWORD *)(v8 + 64);
          v10 = (unsigned __int16)v9 >> 1;
          if ( v9 >> 17 < 0x3FFE && v10 == (v9 >> 17) + 1 )
          {
            for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v8 + 8);
                  i;
                  i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v8 + 8) )
            {
              *(_QWORD *)(v8 + 8) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v8 + 8));
            *(_DWORD *)(v8 + 64) &= 0x10001u;
          }
          else
          {
            if ( v10 == 0 && (v9 & 1) == 0 )
              ndisReportRefcountImbalance(BugCheckParameter3, a2);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v8 + 8), 0);
          }
        }
      }
      else
      {
        v4 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( v4 )
        {
          for ( j = 0; j < *(_BYTE *)(BugCheckParameter3 + 3); ++j )
          {
            v6 = (_BYTE *)(v4 + 2LL * j);
            if ( *v6 == a2 )
            {
              v7 = v6[1];
              if ( v7 )
              {
                v6[1] = v7 - 1;
                return;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
          ndisReportRefcountImbalance(BugCheckParameter3, a2);
      }
    }
  }
}
