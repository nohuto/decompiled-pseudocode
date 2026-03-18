/*
 * XREFs of ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x180243530
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180242954 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEB_NW4DCOMPOSITION_EXP.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetBooleanValue(DataSourceProxy *this, unsigned int a2, unsigned __int8 a3)
{
  int v3; // esi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10[8]; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh] BYREF
  CComposition *CurrentFrameId; // [rsp+40h] [rbp-39h] BYREF
  DataSourceProxy *v14; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-29h] BYREF
  DataSourceProxy **v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  int *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  int *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  CComposition **p_CurrentFrameId; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]

  v3 = a3;
  v10[0] = a3;
  v6 = DataSourcePropertySet::SetProperty<bool>((__int64)this + 64, a2, v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v6) >= 0 )
  {
    if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
    {
      CurrentFrameId = GetCurrentFrameId();
      v11 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
      p_CurrentFrameId = &CurrentFrameId;
      v20 = &v11;
      v18 = &v12;
      v16 = &v14;
      v21 = v7;
      v19 = v7;
      v12 = v3;
      v14 = this;
      v23 = 8LL;
      v17 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v8, byte_1803B2DA6, 0LL, 0LL, 6u, &v15);
    }
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  }
  return 0LL;
}
