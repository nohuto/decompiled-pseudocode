/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1401D1B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 CurrentProcessWow64Process; // rax
  int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+24h] [rbp-54h]
  _BYTE v17[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v18[48]; // [rsp+48h] [rbp-30h] BYREF
  int v21; // [rsp+90h] [rbp+18h]

  v4 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v17, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  LOBYTE(v5) = 8;
  v8 = HMValidateHandleWithDescriptor(a1, v5);
  if ( v8 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6);
      ProbeForWrite(a2, 6LL * a3, 2 - (CurrentProcessWow64Process != 0));
      v10 = a3;
      if ( a3 > *(_DWORD *)(v8 + 24) )
        v10 = *(_DWORD *)(v8 + 24);
      v21 = v10;
      v11 = v10;
      v16 = v10;
      v15 = 0;
      while ( v4 < v10 )
      {
        v12 = 3LL * v4;
        *(_BYTE *)(v8 + 2 * v12 + 29) = 0;
        *(_DWORD *)&a2[2 * v12] = *(_DWORD *)(v8 + 6LL * v4 + 28);
        *(_WORD *)&a2[2 * v12 + 4] = *(_WORD *)(v8 + 6LL * v4 + 32);
        a2[2 * v12] &= ~0x80u;
        v4 = ++v15;
        v10 = v21;
        v11 = v16;
      }
    }
    else
    {
      v11 = *(_DWORD *)(v8 + 24);
    }
  }
  else
  {
    v11 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
  UserSessionSwitchLeaveCrit(v13);
  return v11;
}
