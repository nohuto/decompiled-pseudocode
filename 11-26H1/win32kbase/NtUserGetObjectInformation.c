/*
 * XREFs of NtUserGetObjectInformation @ 0x1401E4A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetObjectInformation(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // r10
  __int64 result; // rax
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _QWORD, __int64); // r11

  v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  LODWORD(result) = 0;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(v9 + 800);
  if ( v11 )
    LODWORD(result) = v11(a1, a2, a3, a4, a5);
  return (int)result;
}
