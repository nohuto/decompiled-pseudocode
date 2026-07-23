/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x140916B44
 * Callers:
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwpEventWriteProviderAccessCheckStatus @ 0x140775344 (EtwpEventWriteProviderAccessCheckStatus.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     EtwpApplyTransientFilters @ 0x140914E3C (EtwpApplyTransientFilters.c)
 *     EtwpIsGuidAllowed @ 0x140916CEC (EtwpIsGuidAllowed.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140916DD4 (EtwpCheckCurrentUserProcessAccess.c)
 */

char __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, char a6, char a7)
{
  int v8; // esi
  bool v13; // zf
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(_DWORD *)(a4 + 72);
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (a3[17] || a3[18])
    || (v8 == 2 || a3[18]) && !EtwpApplyTransientFilters(a1, a5)
    || (*(_BYTE *)(a1 + 98) & 8) != 0
    && (a7 == 2 || a6 || !v8 && *(_WORD *)(a4 + 104) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 88LL)) )
  {
    return 0;
  }
  if ( a3[18] )
  {
    if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(a1 + 80)) )
      return 0;
  }
  else
  {
    if ( a7 == 2 && !(unsigned __int8)EtwpIsGuidAllowed(a2, *(_QWORD *)(a1 + 32) + 40LL) )
      return 0;
    v13 = a3[16] == 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( !v13 && (*(_BYTE *)(a1 + 98) & 1) == 0 )
    {
      SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
      v14 = EtwpCheckGuidAccess((__int64)a3, 0x200u);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v14 )
      {
        if ( v14 < 0 )
        {
          if ( EtwEventEnabled(
                 (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
                 &ETW_EVENT_PROVIDER_ACCESS_DENIED) )
          {
            EtwpEventWriteProviderAccessCheckStatus(v16, v15, v17, a1, a2, v14);
          }
        }
        return 0;
      }
    }
  }
  return 1;
}
