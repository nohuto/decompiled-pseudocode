/*
 * XREFs of KeCopyXfdMaskToTeb @ 0x1404E3478
 * Callers:
 *     KxEnableOptionalXStateFeatures @ 0x1405EF914 (KxEnableOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 */

void __fastcall KeCopyXfdMaskToTeb(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  char v4; // bl
  char v5; // al
  __int64 v6; // r15
  __int16 v7; // cx
  _OWORD v8[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v2 = a1[30];
    if ( v2 )
    {
      v3 = a1[68];
      v4 = 0;
      if ( (_KPROCESS *)v3 == KeGetCurrentThread()->ApcState.Process )
      {
        v5 = 1;
      }
      else
      {
        KiStackAttachProcess((_KPROCESS *)v3, 0, (__int64)v8);
        v5 = 1;
        v4 = 1;
      }
      v6 = 0LL;
      if ( *(_QWORD *)(v3 + 784) )
      {
        v7 = *(_WORD *)(v3 + 1772);
        if ( v7 != 332 && v7 != 452 )
          v5 = 0;
        if ( v5 )
          v6 = v2 + 0x2000;
      }
      RtlWriteULong64ToUser(v2 + 6216, a1[133]);
      if ( v6 )
        RtlWriteULong64ToUser(v6 + 4112, a1[133]);
      if ( v4 )
        KiUnstackDetachProcess((__int64)v8, 0);
    }
  }
}
