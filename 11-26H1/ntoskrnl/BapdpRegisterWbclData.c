/*
 * XREFs of BapdpRegisterWbclData @ 0x140CE9BB4
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     BapdRegisterSiData @ 0x140C0E064 (BapdRegisterSiData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 */

void __fastcall BapdpRegisterWbclData(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  __int64 v3; // rcx
  ULONG *Pool2; // rbx
  __int64 v5; // [rsp+30h] [rbp-10h] BYREF
  int v6; // [rsp+38h] [rbp-8h]
  int v7; // [rsp+3Ch] [rbp-4h]
  unsigned int v8; // [rsp+50h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
      return;
    v5 = 0x45BE0A5DB8728CAELL;
    v1 = 2;
    v6 = 24237205;
    v7 = 623825306;
  }
  else
  {
    v5 = 0x471C6272B639D9DDLL;
    v1 = 0;
    v6 = 878293681;
    v7 = 803227664;
  }
  v8 = 0;
  v2 = BapdpQueryData(a1, (struct _LIST_ENTRY **)&v5, 0, 0LL, &v8, 0LL);
  if ( v2 == -1073741789 )
  {
    Pool2 = (ULONG *)ExAllocatePool2(64LL, v8, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v2 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v3, (struct _LIST_ENTRY **)&v5, 0, Pool2, &v8, 0LL) >= 0 )
    BapdRegisterSiData(Pool2, v8, v1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
