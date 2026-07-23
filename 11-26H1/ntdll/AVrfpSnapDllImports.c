/*
 * XREFs of AVrfpSnapDllImports @ 0x1800C4600
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800C43F0 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C48A4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C48D4 (RtlpGuardGrantSuppressedCallAccess.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall AVrfpSnapDllImports(__int64 a1)
{
  int result; // eax
  __int64 *v3; // r15
  ULONG_PTR v4; // rax
  __int64 *v5; // r13
  __int64 *v6; // rax
  int v7; // ebp
  _QWORD *v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 *v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // [rsp+30h] [rbp-128h]
  _BYTE v18[56]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v19; // [rsp+78h] [rbp-E0h]
  PVOID BaseAddress; // [rsp+B0h] [rbp-A8h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+B8h] [rbp-A0h] BYREF
  ULONG NewProtect; // [rsp+D0h] [rbp-88h]
  ULONG OldProtect; // [rsp+168h] [rbp+10h] BYREF
  ULONG_PTR v25; // [rsp+170h] [rbp+18h]
  __int64 *v26; // [rsp+178h] [rbp+20h]

  OldProtect = 0;
  if ( !AVrfpEnabled )
    return -1073741790;
  memset_thunk_772440563353939046(v18, 0, 0xD0uLL);
  v19 = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v18);
  if ( result >= 0 )
  {
    v3 = (__int64 *)BaseAddress;
    if ( BaseAddress )
    {
      v4 = RegionSize[0] >> 3;
      if ( (unsigned int)(RegionSize[0] >> 3) )
      {
        v4 = (unsigned int)v4;
        v25 = (unsigned int)v4;
        do
        {
          if ( *v3 )
          {
            v5 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v6 = v5;
                v7 = 0;
                v5 = (__int64 *)*v5;
                v26 = v6;
                v8 = (_QWORD *)v6[5];
                v17 = v8;
                if ( *v8 )
                {
                  v9 = (_QWORD *)v6[5];
                  do
                  {
                    v10 = (_QWORD *)v9[3];
                    LODWORD(v11) = 0;
                    if ( *v10 )
                    {
                      v12 = v26;
                      v13 = (_QWORD *)v9[3];
                      do
                      {
                        v14 = *v3;
                        if ( *v3 == v13[1] )
                        {
                          LOBYTE(v15) = LdrControlFlowGuardEnforced();
                          if ( v15 && (unsigned __int8)RtlpGuardIsSuppressedAddress(v14) == 1 )
                            RtlpGuardGrantSuppressedCallAccess(v14, 1LL);
                          v16 = v13[2];
                          if ( !v16 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v13);
                            __debugbreak();
                          }
                          *v3 = v16;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v13,
                              v12[3],
                              v13[2]);
                        }
                        v11 = (unsigned int)(v11 + 1);
                        v13 = &v10[3 * v11];
                      }
                      while ( *v13 );
                      v8 = v17;
                    }
                    v9 = &v8[4 * (unsigned int)++v7];
                  }
                  while ( *v9 );
                }
              }
              while ( v5 != &AVrfpVerifierProvidersList );
              v4 = v25;
            }
          }
          ++v3;
          v25 = --v4;
        }
        while ( v4 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, NewProtect, &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
