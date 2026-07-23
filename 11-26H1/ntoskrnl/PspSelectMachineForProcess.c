/*
 * XREFs of PspSelectMachineForProcess @ 0x140A9629C
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     PsWow64IsMachineSupported @ 0x1409E82B0 (PsWow64IsMachineSupported.c)
 *     PsGetProcessMachine @ 0x140A96400 (PsGetProcessMachine.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140B4EC94 (PspQueryComPlusRunUnderWoW.c)
 */

__int64 __fastcall PspSelectMachineForProcess(__int64 a1, __int64 a2, __int16 *a3)
{
  __int16 v3; // r14
  bool v5; // r15
  unsigned int v7; // r12d
  char v8; // di
  __int16 v9; // bx
  char v10; // si
  __int16 v11; // ax
  __int16 v12; // dx
  __int16 ProcessMachine; // ax
  __int16 v14; // ax
  __int16 *v15; // rax
  char v16; // cl
  __int64 result; // rax
  char v18; // [rsp+70h] [rbp+8h] BYREF
  char v19; // [rsp+78h] [rbp+10h]
  __int16 *v20; // [rsp+80h] [rbp+18h]
  __int16 v21; // [rsp+88h] [rbp+20h]

  v20 = a3;
  v3 = *(_WORD *)(a2 + 104);
  v5 = 0;
  v18 = 0;
  v7 = 0;
  v8 = 0;
  v21 = *(_WORD *)(a1 + 1772);
  v9 = 0;
  v19 = 0;
  v10 = 0;
  if ( v3 == 332 )
    v5 = (*(_BYTE *)(a2 + 107) & 3) == 3;
  v11 = *(_WORD *)(a2 + 168);
  v12 = -31132;
  if ( v11 )
  {
    v9 = v11;
    v10 = 1;
  }
  else
  {
    ProcessMachine = PsGetProcessMachine(a1);
    v12 = -31132;
    if ( ProcessMachine != -31132 && !*(_QWORD *)(a1 + 784) )
      v9 = v21;
  }
  if ( !v5 )
  {
    v14 = v3;
    if ( v9 )
      v14 = v9;
    v9 = v14;
    if ( v14 != v3 && !(unsigned int)HalSystemVectorDispatchEntry() )
    {
      if ( v10 )
        return 3221225595LL;
      v9 = v3;
    }
    if ( v9 != v12 )
    {
      if ( !(unsigned int)PsWow64IsMachineSupported(v9) )
        return 3221225595LL;
      v8 = 1;
    }
    goto LABEL_12;
  }
  if ( !v9 )
    v9 = -31132;
  if ( !v10 && (*(_BYTE *)(a2 + 107) & 0x20) != 0 || v9 == 332 || v9 == 452 )
  {
    v8 = 1;
    goto LABEL_31;
  }
  result = PspQueryComPlusRunUnderWoW(a2, &v18, 1LL, 332LL);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = v18;
    if ( !v18 )
    {
      v19 = 1;
      goto LABEL_39;
    }
LABEL_31:
    if ( v9 == -31132 )
    {
      if ( v10 )
        return 3221225595LL;
    }
    else
    {
      if ( (unsigned int)PsWow64IsMachineSupported(v9) )
        goto LABEL_39;
      if ( v10 )
        return 3221225595LL;
      v9 = -31132;
    }
    if ( (unsigned int)PsWow64IsMachineSupported(332) )
      v9 = 332;
    else
      v8 = 0;
LABEL_39:
    if ( !v8 && v9 != -31132 )
      return 3221225595LL;
LABEL_12:
    v15 = v20;
    v16 = v19;
    *v20 = v9;
    *((_BYTE *)v15 + 2) = v8;
    *((_BYTE *)v15 + 3) = v16;
    return v7;
  }
  return result;
}
