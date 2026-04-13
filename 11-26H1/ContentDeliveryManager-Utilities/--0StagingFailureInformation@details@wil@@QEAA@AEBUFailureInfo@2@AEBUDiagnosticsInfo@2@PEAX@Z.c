/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180028FF8
 * Callers:
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180037410 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800292A8 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002A484 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180032764 (-GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18003BC58 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
struct DiagnosticsInfo *__fastcall wil::details::StagingFailureInformation::StagingFailureInformation(
        struct DiagnosticsInfo *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        void *a4)
{
  unsigned int *v7; // r12
  char *v8; // r9
  char *v9; // r9
  __int64 v10; // rcx
  char *v11; // r9
  unsigned __int64 v13; // [rsp+20h] [rbp-28h]
  unsigned __int64 v14; // [rsp+20h] [rbp-28h]
  unsigned __int64 v15; // [rsp+20h] [rbp-28h]
  void *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v7 = (unsigned int *)&this[13];
  memset_0(&this[13], 0, 0x40uLL);
  memset_0(&this[21], 0, 0x40uLL);
  memset_0(&this[29], 0, 0x40uLL);
  memset_0(&this[37], 0, 0x60uLL);
  wil::last_error_context::last_error_context((wil::last_error_context *)&v16);
  memset_0(this, 0, 0x68uLL);
  this->cost = *((_DWORD *)a2 + 2);
  LOWORD(this->flags) = *((_WORD *)a2 + 32);
  this[1] = *(struct DiagnosticsInfo *)((char *)a2 + 56);
  if ( wil::details::GetModuleInformationFromAddress(0LL, 0LL, v7, v8, v13) )
    this[2] = (struct DiagnosticsInfo)v7;
  this[3] = *(struct DiagnosticsInfo *)((char *)a2 + 128);
  if ( wil::details::GetModuleInformationFromAddress(
         *((wil::details **)a2 + 18),
         &this[4],
         (unsigned int *)&this[21],
         v9,
         v14) )
  {
    this[5] = (struct DiagnosticsInfo)&this[21];
  }
  v11 = (char *)*((_QWORD *)a2 + 3);
  if ( v11 && *(_WORD *)v11 )
  {
    wil::details::StringCchPrintfA((wil::details *)&this[37], (char *)0x60, (unsigned __int64)"%ws", v11);
    this[6] = (struct DiagnosticsInfo)&this[37];
  }
  LOWORD(this[7].cost) = a3[3].cost;
  this[8] = a3[1];
  if ( wil::details::g_pfnGetModuleName )
    this[9] = (struct DiagnosticsInfo)wil::details::g_pfnGetModuleName(v10);
  if ( wil::details::GetModuleInformationFromAddress(
         *(wil::details **)a3,
         &this[10],
         (unsigned int *)&this[29],
         v11,
         v15) )
  {
    this[11] = (struct DiagnosticsInfo)&this[29];
  }
  this[12] = a3[2];
  wil::last_error_context::~last_error_context((wil::last_error_context *)&v16);
  return this;
}
