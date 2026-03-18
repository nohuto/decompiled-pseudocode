/*
 * XREFs of ?DxgkDelayedEvictionThread@@YAXPEAX@Z @ 0x140198600
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DxgkDelayedEvictionThread(struct DXGADAPTER *a1)
{
  int v2; // r8d
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  WdLogSingleEntry1(9LL);
  WdLogGlobalForLineNumber = 13437;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v3, a1, 0LL);
  COREADAPTERACCESS::AcquireExclusive((__int64)v3, (unsigned int)(v2 + 2));
  *((_BYTE *)a1 + 5072) = 1;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v3);
}
