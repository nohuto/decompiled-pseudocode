/*
 * XREFs of PnpRegCopyKeySecurity @ 0x1407A7418
 * Callers:
 *     PnpRegCopyKeySecurityTree @ 0x1407A7548 (PnpRegCopyKeySecurityTree.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxRegGetKeySecurity @ 0x14089C388 (_PnpCtxRegGetKeySecurity.c)
 *     _PnpCtxRegSetKeySecurity @ 0x14089C3D8 (_PnpCtxRegSetKeySecurity.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRegCopyKeySecurity(int a1, int a2)
{
  void *Pool2; // rdi
  int KeySecurity; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // ecx
  HANDLE v9[2]; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0;
  Pool2 = 0LL;
  Handle = 0LL;
  v9[0] = 0LL;
  KeySecurity = PnpCtxRegOpenKey(0, a1, 0, 0, 0x20000, (__int64)&Handle);
  if ( KeySecurity >= 0 )
  {
    KeySecurity = PnpCtxRegOpenKey(0, a2, 0, 0, 786432, (__int64)v9);
    if ( KeySecurity >= 0 )
    {
      KeySecurity = PnpCtxRegGetKeySecurity(v5, (_DWORD)Handle, 7, 0, (__int64)&v10);
      if ( KeySecurity == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          KeySecurity = -1073741670;
          goto LABEL_9;
        }
        KeySecurity = PnpCtxRegGetKeySecurity(v7, (_DWORD)Handle, 7, (_DWORD)Pool2, (__int64)&v10);
      }
      if ( KeySecurity >= 0 )
        KeySecurity = PnpCtxRegSetKeySecurity(v6, v9[0], 7LL, Pool2);
    }
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v9[0] )
    ZwClose(v9[0]);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)KeySecurity;
}
