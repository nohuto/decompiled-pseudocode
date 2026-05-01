/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000CED8
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000EC74 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18000F438 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct DiagnosticsInfo *__fastcall wil::details::StagingFailureInformation::StagingFailureInformation(
        struct DiagnosticsInfo *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        void *a4)
{
  struct DiagnosticsInfo *v7; // r15
  struct DiagnosticsInfo *v8; // r14
  struct DiagnosticsInfo *v9; // rsi
  DWORD LastError; // r13d
  __int64 (__fastcall *v11)(__int64, struct DiagnosticsInfo *, struct DiagnosticsInfo *, __int64); // r10
  char v12; // al
  struct DiagnosticsInfo *v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  const char *v16; // r9
  struct DiagnosticsInfo *v17; // rdx
  __int64 v18; // rcx
  char v19; // al

  v7 = this + 13;
  memset_0(&this[13], 0, 0x40uLL);
  v8 = this + 21;
  memset_0(&this[21], 0, 0x40uLL);
  v9 = this + 29;
  memset_0(&this[29], 0, 0x40uLL);
  memset_0(&this[37], 0, 0x60uLL);
  LastError = GetLastError();
  memset_0(this, 0, 0x68uLL);
  this->cost = *((_DWORD *)a2 + 2);
  LOWORD(this->flags) = *((_WORD *)a2 + 32);
  this[1] = *(struct DiagnosticsInfo *)((char *)a2 + 56);
  if ( v7 )
    LOBYTE(v7->cost) = 0;
  v11 = (__int64 (__fastcall *)(__int64, struct DiagnosticsInfo *, struct DiagnosticsInfo *, __int64))wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct DiagnosticsInfo *, __int64))wil::details::g_pfnGetModuleInformation)(
            0LL,
            0LL,
            v7,
            64LL);
    v11 = (__int64 (__fastcall *)(__int64, struct DiagnosticsInfo *, struct DiagnosticsInfo *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    v12 = 0;
  }
  if ( v12 )
    this[2] = (struct DiagnosticsInfo)v7;
  this[3] = *(struct DiagnosticsInfo *)((char *)a2 + 128);
  v13 = this + 4;
  v14 = *((_QWORD *)a2 + 18);
  if ( this != (struct DiagnosticsInfo *)-168LL )
    LOBYTE(v8->cost) = 0;
  if ( this != (struct DiagnosticsInfo *)-32LL )
    v13->cost = 0;
  if ( v11 )
  {
    v15 = v11(v14, v13, this + 21, 64LL);
    v11 = (__int64 (__fastcall *)(__int64, struct DiagnosticsInfo *, struct DiagnosticsInfo *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    v15 = 0;
  }
  if ( v15 )
    this[5] = (struct DiagnosticsInfo)v8;
  v16 = (const char *)*((_QWORD *)a2 + 3);
  if ( v16 && *(_WORD *)v16 )
  {
    wil::details::StringCchPrintfA((wil::details *)&this[37], (char *)0x60, (unsigned __int64)"%ws", v16);
    this[6] = (struct DiagnosticsInfo)&this[37];
    v11 = (__int64 (__fastcall *)(__int64, struct DiagnosticsInfo *, struct DiagnosticsInfo *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  LOWORD(this[7].cost) = a3[3].cost;
  this[8] = a3[1];
  if ( wil::details::g_pfnGetModuleName )
  {
    this[9] = (struct DiagnosticsInfo)wil::details::g_pfnGetModuleName(v14);
    v11 = (__int64 (__fastcall *)(__int64, struct DiagnosticsInfo *, struct DiagnosticsInfo *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  v17 = this + 10;
  v18 = (__int64)*a3;
  if ( this != (struct DiagnosticsInfo *)-232LL )
    LOBYTE(v9->cost) = 0;
  if ( this != (struct DiagnosticsInfo *)-80LL )
    v17->cost = 0;
  if ( v11 )
    v19 = v11(v18, v17, this + 29, 64LL);
  else
    v19 = 0;
  if ( v19 )
    this[11] = (struct DiagnosticsInfo)v9;
  this[12] = a3[2];
  SetLastError(LastError);
  return this;
}
