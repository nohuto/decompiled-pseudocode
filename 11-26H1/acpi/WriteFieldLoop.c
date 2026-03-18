/*
 * XREFs of WriteFieldLoop @ 0x14000DDB0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  unsigned int v7; // r8d
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 *v11; // rax
  unsigned int v12; // ecx
  int v13; // r8d
  unsigned int v14; // r8d
  _QWORD *v15; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
    goto LABEL_14;
  }
  v6 = *(_DWORD *)(a2 + 56);
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_14:
    v15 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v15[1];
    HeapFree(v15);
    return v3;
  }
  v7 = 128;
  v8 = *(_DWORD **)(a2 + 40);
  v9 = *(_QWORD *)(a2 + 48);
  v10 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 60) <= v6 )
    v6 = *(_DWORD *)(a2 + 60);
  if ( v8[5] )
    v7 = v8[7] + 128;
  v3 = 0;
  v11 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, v7);
  if ( v11 )
  {
    v11[1] = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v11;
    *(_DWORD *)v11 = 1330004801;
    v11[3] = (__int64)WriteFieldObj;
    v11[4] = v10;
    v11[5] = v9;
    v11[6] = v9 + v6;
    v12 = v8[3] & 0xF;
    if ( v12 && v12 <= 4 )
      v13 = 1 << (v12 - 1);
    else
      v13 = 1;
    *((_DWORD *)v11 + 14) = v13;
    v14 = 8 * v13;
    *((_DWORD *)v11 + 15) = (v14 + v8[1] + v8[2] - 1) / v14;
    v11[8] = ((1LL << v14) & -(__int64)(v14 < 0x40)) - 1;
    *((_DWORD *)v11 + 18) = v14 - v8[1];
    *((_DWORD *)v11 + 19) = v8[1];
    memmove(v11 + 12, v8, (unsigned int)(v8[7] + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
  }
  *(_DWORD *)(a2 + 56) -= v6;
  *(_QWORD *)(a2 + 48) += v6;
  return v3;
}
