/*
 * XREFs of TpCallbackIndependent @ 0x1800BD4B0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtAlpcSetInformation @ 0x180160010 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rdi
  signed __int32 v8; // r8d
  __int64 v9; // rax
  int v10; // eax
  signed __int32 v11; // ecx
  signed __int32 v12; // edx
  void *v13; // rcx
  int v14; // eax
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 PortInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  WorkerFactoryInformation = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter();
LABEL_21:
    v14 = -1073741811;
    goto LABEL_22;
  }
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 144);
  else
    v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
    goto LABEL_21;
  if ( TppPoolpSerializedPool != (PVOID)v3 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 420));
    _m_prefetchw((const void *)(v3 + 8));
    v4 = *(_QWORD *)(v3 + 8);
    PortInformation = v4;
    do
    {
      LODWORD(PortInformation) = ((__int16)v4 + 1) ^ (v4 ^ ((__int16)v4 + 1)) & 0xFFFF0000;
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), PortInformation, v4);
      PortInformation = v4;
    }
    while ( v5 != v4 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v6 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 2;
    if ( v6 && (*(_BYTE *)(v6 + 288) & 3) == 3 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v6 + 284);
        v9 = *(_QWORD *)(v6 + 216);
        if ( !v9 || (v10 = *(_DWORD *)(v9 + 440)) == 0 )
          v10 = MEMORY[0x7FFE03C0];
        v11 = v10 + *(_DWORD *)(*(_QWORD *)(v6 + 216) + 420LL);
        v12 = v11 + v10;
        if ( v8 >= v11 && v8 <= v10 + v12 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 284), v12, v8) )
        {
          v13 = *(void **)(v6 + 272);
          LODWORD(PortInformation) = v12;
          NtAlpcSetInformation(v13, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
        }
      }
    }
    WorkerFactoryInformation = 2;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v3 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
  v14 = -1073741637;
LABEL_22:
  if ( v14 != -1073741637 )
    return v14;
  return v1;
}
