/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x1800C2BE0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlGuardCheckImageBase @ 0x180036950 (RtlGuardCheckImageBase.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C2F70 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveDelayloadAddress @ 0x1800C30F0 (LdrpResolveDelayloadAddress.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C3A94 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C3F70 (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        unsigned int a6)
{
  int v7; // r15d
  __int64 v10; // r14
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS Status; // esi
  char *v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rdi
  _BYTE *Heap_0; // rbx
  __int64 v17; // r8
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  PVOID v23; // [rsp+40h] [rbp-498h] BYREF
  NTSTATUS v24; // [rsp+48h] [rbp-490h] BYREF
  __int64 v25; // [rsp+50h] [rbp-488h]
  int v26[2]; // [rsp+58h] [rbp-480h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-478h]
  _BYTE *v28; // [rsp+68h] [rbp-470h]
  __int64 v29; // [rsp+70h] [rbp-468h]
  __int64 v30; // [rsp+78h] [rbp-460h]
  __int64 v31; // [rsp+80h] [rbp-458h]
  __int64 v32; // [rsp+88h] [rbp-450h]
  int v33[4]; // [rsp+90h] [rbp-448h]
  _BYTE BaseAddress[1024]; // [rsp+A0h] [rbp-438h] BYREF

  v32 = a4;
  v7 = a3;
  *(_QWORD *)v33 = a3;
  *(_QWORD *)v26 = a2;
  v31 = (__int64)a5;
  memset_thunk_772440563353939046(BaseAddress, 0, 0x400uLL);
  v23 = 0LL;
  v24 = 0;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v23, a6, a5);
  Status = DelayloadExportDll;
  if ( DelayloadExportDll < 0 )
  {
    v10 = LdrpRedirectDelayloadFailure(a1, 0, a2, v7, a4, (__int64)a5, DelayloadExportDll);
    *(_QWORD *)v26 = v10;
    if ( v10 && (Status == -1073741515 || Status == -1073740671) )
      LdrpWriteBackProtectedDelayLoad(a1, (_DWORD)a5, (unsigned int)v26, 1, 0);
  }
  else
  {
    RtlGuardCheckImageBase(*((PVOID *)v23 + 6), 0);
    v13 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 12));
    v25 = (__int64)v13;
    v14 = (a5 - v13) >> 3;
    LODWORD(v15) = 0;
    if ( *(_QWORD *)v13 )
    {
      do
        v15 = (unsigned int)(v15 + 1);
      while ( *(_QWORD *)&v13[8 * v15] );
    }
    if ( (unsigned int)v15 > 0x80 )
    {
      Heap_0 = RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v15);
      v28 = Heap_0;
      if ( Heap_0 )
      {
        v13 = (char *)v25;
      }
      else
      {
        Heap_0 = BaseAddress;
        v28 = BaseAddress;
        v13 = a5;
        v25 = (__int64)a5;
        LODWORD(v15) = v15 - v14;
        if ( (unsigned int)v15 > 0x80 )
          LODWORD(v15) = 128;
        LODWORD(v14) = 0;
      }
    }
    else
    {
      Heap_0 = BaseAddress;
      v28 = BaseAddress;
    }
    if ( g_ShimsEnabled )
      v17 = __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    else
      v17 = 0LL;
    v29 = v17;
    v18 = 0;
    if ( (_DWORD)v15 )
    {
      v19 = Heap_0;
      v27 = (__int64 *)Heap_0;
      v20 = v13 - Heap_0;
      v30 = v13 - Heap_0;
      do
      {
        *v19 = 0LL;
        if ( v18 == (_DWORD)v14
          || *(_QWORD *)((char *)v19 + v20) - *(_QWORD *)(a1 + 48) < (unsigned __int64)*(unsigned int *)(a1 + 64) )
        {
          v21 = LdrpResolveDelayloadAddress(a1, (_DWORD)v23, v26[0], (unsigned int)v13 + 8 * v18, v17, (__int64)&v24);
          *v27 = v21;
          LODWORD(v13) = v25;
          if ( v18 == (_DWORD)v14 )
          {
            Status = v24;
            v10 = *(_QWORD *)&Heap_0[8 * (unsigned int)v14];
          }
        }
        ++v18;
        v19 = ++v27;
        v17 = v29;
        v20 = v30;
      }
      while ( v18 < (unsigned int)v15 );
    }
    if ( Status < 0 )
    {
      v10 = LdrpRedirectDelayloadFailure(a1, (int)v23, v26[0], v33[0], v32, v31, Status);
      *(_QWORD *)v26 = v10;
      if ( v10 )
      {
        if ( (unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671 )
          *(_QWORD *)&Heap_0[8 * (unsigned int)v14] = v10;
      }
    }
    LdrpWriteBackProtectedDelayLoad(a1, v25, (_DWORD)Heap_0, v15, v14);
    if ( BaseAddress != Heap_0 )
      RtlFreeHeap_0(LdrpHeap, 0, Heap_0);
    LdrpDereferenceModule((char *)v23);
  }
  return v10;
}
