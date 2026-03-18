/*
 * XREFs of ?Initialize@UIPrivilegeIsolation@@YAXXZ @ 0x1401CCA0C
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 */

void __fastcall UIPrivilegeIsolation::Initialize(UIPrivilegeIsolation *this)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  __int64 v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  RtlQueryElevationFlags(&v1);
  if ( (v1 & 1) != 0 )
  {
    LODWORD(v2) = 0;
    FastGetProfileDwordEx(0LL, 49, L"EnableUIPI", 1, 0, &v2, 0LL);
    UIPrivilegeIsolation::fEnforceUIPI = (_DWORD)v2 != 0;
  }
}
