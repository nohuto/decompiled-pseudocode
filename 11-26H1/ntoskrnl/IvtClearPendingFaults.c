/*
 * XREFs of IvtClearPendingFaults @ 0x1405A85BC
 * Callers:
 *     IvtEnableInterrupt @ 0x140BF5C20 (IvtEnableInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtClearPendingFaults(__int64 a1)
{
  int v2; // r11d
  unsigned int v3; // r9d
  int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // r11d
  __int64 v7; // rax
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 221);
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
  v5 = *(_QWORD *)(a1 + 8) + 16 * ((*(_QWORD *)(a1 + 216) >> 24) & 0x3FFLL);
  v6 = v2 + 1;
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16LL * ((v3 + BYTE1(v4)) % v6) + 8);
      if ( v7 >= 0 )
        break;
      *(_QWORD *)(v5 + 16LL * ((v3 + BYTE1(v4)) % v6) + 8) = v7;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      ++v3;
    }
    while ( v3 < v6 );
  }
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 52) = v4 | 1;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
