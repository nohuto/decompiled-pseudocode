/*
 * XREFs of ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400B58E4
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140046890 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140049560 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(struct _SINGLE_LIST_ENTRY *Src, struct _SINGLE_LIST_ENTRY *a2)
{
  unsigned int v4; // ebp
  _SINGLE_LIST_ENTRY *Pool2; // rax
  int v6; // edx
  _SINGLE_LIST_ENTRY *v7; // rsi
  _SINGLE_LIST_ENTRY *Next; // rcx

  v4 = 0;
  while ( Src )
  {
    Pool2 = (_SINGLE_LIST_ENTRY *)ExAllocatePool2(66LL, LODWORD(Src[2].Next), 1802519630LL);
    v7 = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          11,
          96,
          (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
      }
      v4 = -1073741670;
      while ( 1 )
      {
        Next = a2->Next;
        if ( !a2->Next )
          break;
        a2->Next = Next->Next;
        ExFreePoolWithTag(Next, 0);
      }
      return v4;
    }
    memmove(Pool2, Src, LODWORD(Src[2].Next));
    v7->Next = 0LL;
    v7[1].Next = 0LL;
    v7->Next = a2->Next;
    a2->Next = v7;
    Src = Src->Next;
  }
  return v4;
}
