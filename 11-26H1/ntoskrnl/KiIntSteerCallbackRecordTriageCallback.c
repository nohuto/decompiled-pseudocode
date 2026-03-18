/*
 * XREFs of KiIntSteerCallbackRecordTriageCallback @ 0x1405F76D0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KiIntSteerCallbackRecordTriageCallbackInterruptObject @ 0x1405F77D4 (KiIntSteerCallbackRecordTriageCallbackInterruptObject.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall KiIntSteerCallbackRecordTriageCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        PVOID ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  struct _KTHREAD *v8; // rdi
  struct _LIST_ENTRY *i; // rbx
  __int64 j; // rbp
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-80h]
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v15; // [rsp+30h] [rbp-78h]
  KBUGCHECK_CALLBACK_REASON v16; // [rsp+38h] [rbp-70h]
  PVOID v17; // [rsp+40h] [rbp-68h]
  ULONG v18; // [rsp+48h] [rbp-60h]

  memset_0(MaxDataSize, 0, 0x50uLL);
  v15 = Record;
  v8 = (struct _KTHREAD *)KsepShimDbLock.Spare35[0];
  *(_QWORD *)MaxDataSize = &KiIntSteerTriageBuffer;
  v14 = 0;
  v16 = Reason;
  v17 = ReasonSpecificData;
  v18 = ReasonSpecificDataLength;
  if ( (unsigned __int64 *)KsepShimDbLock.Spare35[0] != KsepShimDbLock.Spare35 )
  {
    do
    {
      for ( i = v8->Header.WaitListHead.Blink; i != (struct _LIST_ENTRY *)&v8->Header.WaitListHead.Blink; i = i->Flink )
      {
        for ( j = 0LL; (unsigned int)j < LODWORD(i[1].Blink); j = (unsigned int)(j + 1) )
          KiIntSteerCallbackRecordTriageCallbackInterruptObject(MaxDataSize, *((_QWORD *)&i[2].Flink->Flink + j));
      }
      v8 = *(struct _KTHREAD **)&v8->Header.Lock;
    }
    while ( v8 != (struct _KTHREAD *)KsepShimDbLock.Spare35 );
    v11 = v14;
    if ( v14 )
    {
      v12 = *(_QWORD **)MaxDataSize;
      IoAddTriageDumpDataBlock(MaxDataSize[0], (PVOID)0x40);
      do
      {
        IoAddTriageDumpDataBlock(*v12++, (PVOID)0x120);
        --v11;
      }
      while ( v11 );
    }
  }
}
