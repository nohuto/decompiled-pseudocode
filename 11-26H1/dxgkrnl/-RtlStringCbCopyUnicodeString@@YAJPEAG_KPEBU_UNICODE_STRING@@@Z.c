/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140074298
 * Callers:
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401D77FC (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401D78C8 (-InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227120 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14038C110 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(char *a1, unsigned __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r10
  unsigned __int64 v7; // r8
  signed __int64 v8; // r10
  unsigned __int16 *v9; // rax

  v3 = a2 >> 1;
  if ( !v3 || v3 > 0x7FFF )
    return 3221225485LL;
  Length = a3->Length;
  if ( (Length & 1) != 0
    || (MaximumLength = a3->MaximumLength, (MaximumLength & 1) != 0)
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || (Buffer = a3->Buffer) == 0LL && ((_WORD)Length || MaximumLength) )
  {
    *(_WORD *)a1 = 0;
    return 3221225485LL;
  }
  v7 = (Length >> 1) - v3;
  v8 = (char *)Buffer - a1;
  do
  {
    if ( !(v7 + v3) )
      break;
    *(_WORD *)a1 = *(_WORD *)&a1[v8];
    a1 += 2;
    --v3;
  }
  while ( v3 );
  v9 = (unsigned __int16 *)(a1 - 2);
  if ( v3 )
    v9 = (unsigned __int16 *)a1;
  *v9 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
