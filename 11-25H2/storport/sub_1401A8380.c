/*
 * XREFs of sub_1401A8380 @ 0x1401A8380
 * Callers:
 *     <none>
 * Callees:
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 *     sub_1401A7B6C @ 0x1401A7B6C (sub_1401A7B6C.c)
 */

void __fastcall sub_1401A8380(__int64 DeviceObject, PVOID Context)
{
  _BYTE *v2; // rbx
  _BYTE *v4; // rax
  KSPIN_LOCK *v5; // rbp
  struct _LIST_ENTRY *v6; // r14
  PLIST_ENTRY v7; // rax
  PLIST_ENTRY v8; // rsi

  v2 = 0LL;
  if ( DeviceObject )
  {
    v4 = (_BYTE *)sub_14013115C(DeviceObject);
    v2 = v4;
    if ( v4 )
    {
      if ( (*v4 & 1) == 0 )
      {
        v5 = (KSPIN_LOCK *)(v4 + 144);
        v6 = (struct _LIST_ENTRY *)(v4 + 128);
        do
        {
          v7 = ExInterlockedRemoveHeadList(v6, v5);
          v8 = v7;
          if ( !v7 )
            break;
          sub_1401A7B6C(DeviceObject, (__int64)&v7[1]);
          ExFreePoolWithTag(v8, 0x4E456152u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 38, 0xFFFFFFFF) == 1 )
            break;
        }
        while ( (*v2 & 1) == 0 );
      }
    }
  }
  KeSetEvent((PRKEVENT)v2 + 7, 0, 0);
}
