/*
 * XREFs of AcpiPccCallbackDpc @ 0x140040980
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

LONG __fastcall AcpiPccCallbackDpc(__int64 a1, _QWORD *a2, unsigned int a3)
{
  KIRQL v3; // r9
  _QWORD *v5; // rbx
  int v6; // ecx
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(_QWORD, __int64); // rsi
  __int64 v9; // r14
  unsigned int v10; // ecx
  LONG result; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v3 = 0;
  v5 = a2;
  if ( a2 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(a2 + 100);
    v5[101] = KeGetCurrentThread();
  }
  v6 = *((_DWORD *)v5 + 2);
  v7 = 0LL;
  v8 = (__int64 (__fastcall *)(_QWORD, __int64))v5[47];
  v9 = v5[48];
  v5[47] = 0LL;
  v5[48] = 0LL;
  if ( (v6 & 0x1E) != 0xC )
    goto LABEL_4;
  a2 = v5 + 45;
  v12 = (_QWORD *)v5[45];
  if ( v12 != v5 + 45 )
  {
    if ( (_QWORD *)v12[1] != a2 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
      __fastfail(3u);
    *a2 = v13;
    v7 = v12;
    *(_QWORD *)(v13 + 8) = a2;
    v6 = *((_DWORD *)v5 + 2);
LABEL_4:
    v10 = v6 & 0xFFFFFFE1 | 0xA;
    goto LABEL_5;
  }
  v10 = v6 & 0xFFFFFFE1 | 6;
LABEL_5:
  *((_DWORD *)v5 + 2) = v10;
  LOBYTE(a2) = v3;
  result = AcpiPccUnlockSubspace(v5, a2);
  if ( v8 )
    result = v8(a3, v9);
  if ( v7 )
  {
    *((_DWORD *)v7 + 10) = 0;
    return KeSetEvent((PRKEVENT)(v7 + 2), 0, 0);
  }
  return result;
}
