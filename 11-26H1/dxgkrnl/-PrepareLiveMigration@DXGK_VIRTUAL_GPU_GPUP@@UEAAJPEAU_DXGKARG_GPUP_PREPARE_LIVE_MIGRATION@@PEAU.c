/*
 * XREFs of ?PrepareLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140195AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DdiPrepareLiveMigration@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@@Z @ 0x140425E6C (-DdiPrepareLiveMigration@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@@Z.c)
 *     ?Initialize@DXGK_TRANSPORT_BUFFER@@QEAAJPEAVADAPTER_RENDER@@_K@Z @ 0x14043032C (-Initialize@DXGK_TRANSPORT_BUFFER@@QEAAJPEAVADAPTER_RENDER@@_K@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::PrepareLiveMigration(
        struct _KTHREAD **this,
        struct _DXGKARG_GPUP_PREPARE_LIVE_MIGRATION *a2,
        struct _GPUP_MIGRATION_BUFFER *a3,
        unsigned int *a4)
{
  int v8; // eax
  unsigned __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  __int64 v13; // rbx
  struct _KTHREAD **v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v18[32]; // [rsp+50h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, this + 25);
  v8 = ADAPTER_RENDER::DdiPrepareLiveMigration(this[1], a2);
  v10 = v8;
  if ( v8 >= 0 )
  {
    *((_BYTE *)this + 334) = 1;
    v13 = 0LL;
    while ( (unsigned int)v13 < 2 )
    {
      v14 = &this[6 * v13];
      v10 = DXGK_TRANSPORT_BUFFER::Initialize((DXGK_TRANSPORT_BUFFER *)(v14 + 29), this[1], v9);
      if ( v10 < 0 )
      {
        WdLogSingleEntry0(2LL);
        v11 = 345LL;
        v12 = L"Failed to initialize and map Transport buffer";
        WdLogGlobalForLineNumber = 345;
        goto LABEL_8;
      }
      v15 = 3 * v13;
      *((_DWORD *)a3 + 2 * v15 + 4) = this[6 * v13 + 31];
      v16 = 6 * (v13 + 5);
      v13 = (unsigned int)(v13 + 1);
      *((_QWORD *)a3 + v15 + 1) = this[v16];
      *((_DWORD *)a3 + 2 * v15) = *((_DWORD *)v14 + 58);
    }
    *a4 = 2;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    return 0LL;
  }
  else
  {
    v11 = v8;
    WdLogSingleEntry1(2LL);
    v12 = L"The driver failed PrepareLiveMigration DDI call. Status: 0x%I64x";
    WdLogGlobalForLineNumber = 335;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
    (*((void (__fastcall **)(struct _KTHREAD **, _QWORD))*this + 32))(this, *(unsigned int *)a2);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    return (unsigned int)v10;
  }
}
