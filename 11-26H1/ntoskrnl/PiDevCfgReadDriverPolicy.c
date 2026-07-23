/*
 * XREFs of PiDevCfgReadDriverPolicy @ 0x1407ADD30
 * Callers:
 *     PiDevCfgQueryDriverPolicy @ 0x1407AD398 (PiDevCfgQueryDriverPolicy.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x1407AD8E8 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1407AD9D8 (PiDevCfgQueryPolicyEnabled.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgReadDriverPolicy(char a1, _QWORD *a2)
{
  const wchar_t *v4; // rax
  int v5; // eax
  int v6; // edi
  bool v7; // al
  bool v8; // al
  __int64 MinWhcpVersion; // rax
  HANDLE v10; // rcx
  _DWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  const wchar_t *v13; // [rsp+28h] [rbp-8h]
  bool v14; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF

  Handle = 0LL;
  v14 = 0;
  v12[1] = 0;
  *a2 = 0LL;
  a2[1] = -1LL;
  a2[2] = -1LL;
  if ( a1 )
  {
    v12[0] = 9699474;
    v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP\\DriverRestrictions";
  }
  else
  {
    v12[0] = 12714176;
    v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\Microsoft\\Windows\\DriverInstall\\Restrictions";
  }
  v13 = v4;
  v5 = IopOpenRegistryKeyEx(&Handle, 0LL, v12, 131097LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = PiDevCfgQueryPolicyEnabled(Handle, (__int64)L"BlockLegacyDrivers", &v14);
    if ( v6 >= 0 )
    {
      v7 = v14;
    }
    else
    {
      v7 = 0;
      v14 = 0;
      if ( v6 != -1073741772 )
        goto LABEL_22;
      v6 = 0;
    }
    if ( v7 )
      *(_DWORD *)a2 |= 2u;
    if ( a1 )
    {
      v6 = PiDevCfgQueryPolicyEnabled(Handle, (__int64)L"RelaxedEnforcement", &v14);
      if ( v6 >= 0 )
      {
        v8 = v14;
      }
      else
      {
        v8 = 0;
        if ( v6 != -1073741772 )
          goto LABEL_22;
        v6 = 0;
      }
      if ( v8 )
        *(_DWORD *)a2 |= 4u;
      MinWhcpVersion = PiDevCfgQueryMinWhcpVersion(Handle);
      v10 = Handle;
      a2[1] = MinWhcpVersion;
      a2[2] = PiDevCfgQueryMinWhcpVersion(v10);
    }
    *(_DWORD *)a2 |= 1u;
  }
  else if ( v5 == -1073741772 )
  {
    *(_DWORD *)a2 = 1;
    v6 = 0;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
