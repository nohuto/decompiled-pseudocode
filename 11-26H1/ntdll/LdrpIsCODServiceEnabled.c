/*
 * XREFs of LdrpIsCODServiceEnabled @ 0x18015D530
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DBCCC (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKeyEx @ 0x1801614B0 (NtOpenKeyEx.c)
 */

bool LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v4; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  v3[0] = 48LL;
  Handle = 0LL;
  v3[3] = 64LL;
  v2[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  v2[0] = 13500620LL;
  v3[2] = v2;
  v3[1] = 0LL;
  v4 = 0LL;
  v0 = (int)NtOpenKeyEx(&Handle, 131353LL, v3, 0LL) >= 0;
  if ( Handle )
    NtClose(Handle);
  return v0;
}
