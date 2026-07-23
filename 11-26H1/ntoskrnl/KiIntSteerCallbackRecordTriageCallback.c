/*
 * XREFs of KiIntSteerCallbackRecordTriageCallback @ 0x1405FA0F0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KiIntSteerCallbackRecordTriageCallbackInterruptObject @ 0x1405FA1F4 (KiIntSteerCallbackRecordTriageCallbackInterruptObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiIntSteerCallbackRecordTriageCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        PVOID ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 *v8; // rdi
  __int64 i; // rbx
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
  v8 = (__int64 *)KiIntTrackRootList;
  *(_QWORD *)MaxDataSize = &KiIntSteerTriageBuffer;
  v14 = 0;
  v16 = Reason;
  v17 = ReasonSpecificData;
  v18 = ReasonSpecificDataLength;
  if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      for ( i = v8[2]; (__int64 *)i != v8 + 2; i = *(_QWORD *)i )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(i + 24); j = (unsigned int)(j + 1) )
          KiIntSteerCallbackRecordTriageCallbackInterruptObject(MaxDataSize, *(_QWORD *)(*(_QWORD *)(i + 32) + 8 * j));
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 != &KiIntTrackRootList );
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
