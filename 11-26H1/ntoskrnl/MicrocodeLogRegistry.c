/*
 * XREFs of MicrocodeLogRegistry @ 0x1404F08C0
 * Callers:
 *     HalpMcUpdatePostUpdate @ 0x140503220 (HalpMcUpdatePostUpdate.c)
 * Callees:
 *     PrpWriteLogsToRegistry @ 0x1404F09A8 (PrpWriteLogsToRegistry.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 MicrocodeLogRegistry()
{
  unsigned int v0; // edi
  size_t v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-138h]
  __int128 v9; // [rsp+30h] [rbp-128h] BYREF
  _WORD v10[128]; // [rsp+40h] [rbp-118h] BYREF

  v0 = 0;
  DWORD1(v8) = 0;
  *((_QWORD *)&v8 + 1) = v10;
  WORD1(v8) = 256;
  v1 = 2 * wcslen(L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM\\CENTRALPROCESSOR\\0");
  if ( v1 >= 0xFFFE )
    LOWORD(v1) = -4;
  v2 = (unsigned __int16)v1;
  if ( (unsigned __int16)v1 > 0x100u )
    v2 = 256;
  v3 = (unsigned __int16)v2;
  v4 = v2;
  LOWORD(v8) = v2;
  memmove(v10, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM\\CENTRALPROCESSOR\\0", v2);
  if ( (unsigned __int64)(v3 + 2) <= 0x100 )
    v10[v4 >> 1] = 0;
  v9 = v8;
  v6 = PrpWriteLogsToRegistry(v5, &v9);
  if ( v6 < 0 )
    return (unsigned int)v6;
  return v0;
}
