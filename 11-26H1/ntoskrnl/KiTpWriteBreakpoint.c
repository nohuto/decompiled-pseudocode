/*
 * XREFs of KiTpWriteBreakpoint @ 0x1405FC6F8
 * Callers:
 *     KiTpHandleTrap @ 0x1405FC460 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x1407BBB10 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x1405FC774 (KiTpWriteMemory.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 */

__int64 __fastcall KiTpWriteBreakpoint(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _BYTE *v4; // rbx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  int *v9; // r9
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  LOBYTE(a2) = *(_BYTE *)(a1 + 50);
  if ( (_BYTE)a2 || !VslVsmEnabled )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v10 = 204;
      v9 = &v10;
    }
    else
    {
      v9 = (int *)(a1 + 51);
    }
    return KiTpWriteMemory(v8, a2, v7, v9);
  }
  else
  {
    v4 = (_BYTE *)(a1 + 49);
    if ( !v3 || *v4 )
      a2 = 0LL;
    else
      LOBYTE(a2) = 1;
    v5 = a3;
    LOBYTE(a3) = v3;
    result = MmWriteSystemImageTracepoint(*(_QWORD *)(a1 + 8), a2, a3, v5);
    if ( !*v4 && (int)result >= 0 )
      *v4 = 1;
  }
  return result;
}
