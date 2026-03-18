/*
 * XREFs of ?Initialize@DXGK_TRANSPORT_BUFFER@@QEAAJPEAVADAPTER_RENDER@@_K@Z @ 0x14043032C
 * Callers:
 *     ?PrepareLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140195AB0 (-PrepareLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_TRANSPORT_BUFFER::Initialize(DXGK_TRANSPORT_BUFFER *this, struct ADAPTER_RENDER *a2)
{
  __int64 v3; // rcx
  int v4; // edi
  struct DXGPROCESS *Current; // rax

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0x2000000LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, char *))(*(_QWORD *)(*((_QWORD *)a2 + 95) + 8LL) + 1256LL))(
         *((_QWORD *)a2 + 96),
         (char *)this + 32,
         0x2000000LL,
         (char *)this + 8);
  if ( v4 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    *(_DWORD *)this = DXGPROCESS::AllocHandleSafe((__int64)Current, (__int64)this, 0x14u);
    *((_BYTE *)this + 40) = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3106;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initialize and map Transport buffer",
      3106LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
