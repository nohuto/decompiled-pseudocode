/*
 * XREFs of DpiDispatchCleanupAndClose @ 0x140393330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchCleanupAndClose(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbp
  char v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax

  v2 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventEnterDpiDispatchClose);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = **(_BYTE **)(a2 + 184);
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(v5 + 96);
  if ( v7 )
  {
    v2 = v7(a1, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 0;
    IofCompleteRequest((PIRP)a2, 0);
  }
  if ( v6 == 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDpiDispatchClose);
  return v2;
}
