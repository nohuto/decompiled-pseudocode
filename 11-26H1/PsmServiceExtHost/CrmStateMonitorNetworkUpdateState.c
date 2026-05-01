/*
 * XREFs of CrmStateMonitorNetworkUpdateState @ 0x18001F050
 * Callers:
 *     CrmStateMonitorNetworkInterfaceCallback @ 0x18001D530 (CrmStateMonitorNetworkInterfaceCallback.c)
 *     CrmStateMonitorNetworkStart @ 0x18006A9F8 (CrmStateMonitorNetworkStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorNetworkUpdateState(const void **a1)
{
  NTSTATUS UnicastIpAddressTable; // eax
  unsigned int v3; // ebx
  bool v4; // cc
  ULONG v5; // ecx
  int v6; // r9d
  __int64 v7; // rbx
  __int64 i; // r8
  unsigned int v9; // ebx
  BOOL v10; // ecx
  unsigned int *j; // rbx
  int Src; // [rsp+28h] [rbp-49h] BYREF
  PMIB_UNICASTIPADDRESS_TABLE Table; // [rsp+30h] [rbp-41h] BYREF
  PMIB_IPINTERFACE_TABLE v15; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v16[10]; // [rsp+48h] [rbp-29h] BYREF
  char v17[40]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v18; // [rsp+98h] [rbp+27h]
  const void *v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A8h] [rbp+37h]

  Src = 0;
  Table = 0LL;
  v15 = 0LL;
  UnicastIpAddressTable = GetUnicastIpAddressTable(0, &Table);
  v3 = UnicastIpAddressTable;
  v4 = UnicastIpAddressTable <= 0;
  if ( UnicastIpAddressTable
    || (UnicastIpAddressTable = GetIpInterfaceTable(0, &v15),
        v3 = UnicastIpAddressTable,
        v4 = UnicastIpAddressTable <= 0,
        UnicastIpAddressTable) )
  {
    if ( !v4 )
      v3 = (unsigned __int16)UnicastIpAddressTable | 0xC0070000;
  }
  else
  {
    v5 = 0;
    if ( v15->NumEntries )
    {
      v6 = Src;
      do
      {
        v7 = v5;
        if ( v15->Table[v7].Connected )
        {
          for ( i = 0LL; (unsigned int)i < Table->NumEntries; i = (unsigned int)(i + 1) )
          {
            if ( v15->Table[v7].InterfaceLuid.Value == Table->Table[i].InterfaceLuid.Value
              && Table->Table[i].DadState == NldsPreferred )
            {
              v6 = 1;
              Src = 1;
              break;
            }
          }
          if ( v6 )
            break;
        }
        ++v5;
      }
      while ( v5 < v15->NumEntries );
    }
    CempLockAcquireExclusive(a1 + 1);
    memset_0(v16, 0, 0x68uLL);
    v9 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
    memcpy_0(v17, a1[5], v9);
    memcpy_0(v16, &Src, v9);
    v10 = 1;
    if ( *(_DWORD *)a1 == 5 )
      v10 = v16[0] == 20 * (v16[0] / 0x14u);
    v19 = a1[6];
    v18 = MEMORY[0x7FFE0008];
    if ( v10 )
      a1[6] = (const void *)MEMORY[0x7FFE0008];
    else
      v20 = 1;
    *(_DWORD *)a1[5] = Src;
    for ( j = (unsigned int *)a1[3]; j != (unsigned int *)(a1 + 3); j = *(unsigned int **)j )
      (*((void (__fastcall **)(unsigned int *, _QWORD, int *))j - 1))(j - 2, *(unsigned int *)a1, &Src);
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
    CrmLogStateMonitorStateSet(a1, v16);
    v3 = 0;
  }
  if ( Table )
    FreeMibTable(Table);
  if ( v15 )
    FreeMibTable(v15);
  return v3;
}
