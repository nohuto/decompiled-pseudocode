/*
 * XREFs of TelGetRegionalSettingsValue @ 0x180004140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x18000203A (memset_0.c)
 *     ?CloseHeapPointer@@YAXPEAX@Z @ 0x180002B0C (-CloseHeapPointer@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800033E0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x1800035C0 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelpReadRegistryString @ 0x180003870 (TelpReadRegistryString.c)
 */

__int64 __fastcall TelGetRegionalSettingsValue(const WCHAR *a1, void *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned __int16 *TelemetryClientRegPath; // rbx
  __int64 v8; // r8
  unsigned __int16 *v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rax
  unsigned int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  int RegistryString; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned __int16 v22[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( a1 && a3 )
  {
    memset_0(v22, 0, 0x208uLL);
    TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v6);
    if ( TelemetryClientRegPath )
    {
      v8 = (char *)TelemetryClientRegPath - (char *)v22;
      v9 = v22;
      v10 = 260LL;
      do
      {
        if ( v10 == -2147483386 )
          break;
        v11 = *(unsigned __int16 *)((char *)v9 + v8);
        if ( !v11 )
          break;
        *v9++ = v11;
        --v10;
      }
      while ( v10 );
      v12 = v9 - 1;
      if ( v10 )
        v12 = v9;
      *v12 = 0;
      v13 = v10 == 0 ? 0x8007007A : 0;
      if ( v10 )
      {
        v16 = StringCchCatW(v22, v10, (char *)L"\\RegionalSettings");
        v13 = v16;
        if ( v16 >= 0 )
        {
          RegistryString = TelpReadRegistryString(v17, v22, a1, a2, a3);
          v13 = RegistryString;
          if ( RegistryString >= 0 )
            goto LABEL_15;
          v14 = (unsigned int)RegistryString;
          v15 = 1731LL;
        }
        else
        {
          v14 = (unsigned int)v16;
          v15 = 1722LL;
        }
      }
      else
      {
        v14 = v13;
        v15 = 1721LL;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, v8, (const char *)v14);
LABEL_15:
      CloseHeapPointer(TelemetryClientRegPath);
      return v13;
    }
    v20 = -2147467259;
    v21 = 1718LL;
  }
  else
  {
    v20 = -2147024809;
    v21 = 1709LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v21, (__int64)a3, (const char *)v20);
  return v20;
}
