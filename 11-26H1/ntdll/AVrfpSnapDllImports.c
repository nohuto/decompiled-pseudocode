/*
 * XREFs of AVrfpSnapDllImports @ 0x1800C6E40
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800C6C30 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C70E4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C7114 (RtlpGuardGrantSuppressedCallAccess.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall AVrfpSnapDllImports(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 *v4; // r15
  unsigned __int64 v5; // rax
  __int64 *v6; // r13
  __int64 *v7; // rax
  int v8; // ebp
  _QWORD *v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdi
  __int64 *v13; // r12
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // [rsp+30h] [rbp-128h]
  _BYTE v18[56]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v19; // [rsp+78h] [rbp-E0h]
  __int64 *v20; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v21[3]; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp-88h]
  int v24; // [rsp+168h] [rbp+10h] BYREF
  __int64 v25; // [rsp+170h] [rbp+18h]
  __int64 *v26; // [rsp+178h] [rbp+20h]

  v24 = 0;
  if ( !AVrfpEnabled )
    return 3221225506LL;
  memset_thunk_772440563353939046(v18, 0, 0xD0uLL);
  v19 = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v18, v2);
  if ( (int)result >= 0 )
  {
    v4 = v20;
    if ( v20 )
    {
      v5 = v21[0] >> 3;
      if ( (unsigned int)(v21[0] >> 3) )
      {
        v5 = (unsigned int)v5;
        v25 = (unsigned int)v5;
        do
        {
          if ( *v4 )
          {
            v6 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v7 = v6;
                v8 = 0;
                v6 = (__int64 *)*v6;
                v26 = v7;
                v9 = (_QWORD *)v7[5];
                v17 = v9;
                if ( *v9 )
                {
                  v10 = (_QWORD *)v7[5];
                  do
                  {
                    v11 = (_QWORD *)v10[3];
                    LODWORD(v12) = 0;
                    if ( *v11 )
                    {
                      v13 = v26;
                      v14 = (_QWORD *)v10[3];
                      do
                      {
                        v15 = *v4;
                        if ( *v4 == v14[1] )
                        {
                          if ( LdrControlFlowGuardEnforced() && (unsigned __int8)RtlpGuardIsSuppressedAddress(v15) == 1 )
                            RtlpGuardGrantSuppressedCallAccess(v15, 1LL);
                          v16 = v14[2];
                          if ( !v16 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v14);
                            __debugbreak();
                          }
                          *v4 = v16;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v14,
                              v13[3],
                              v14[2]);
                        }
                        v12 = (unsigned int)(v12 + 1);
                        v14 = &v11[3 * v12];
                      }
                      while ( *v14 );
                      v9 = v17;
                    }
                    v10 = &v9[4 * (unsigned int)++v8];
                  }
                  while ( *v10 );
                }
              }
              while ( v6 != &AVrfpVerifierProvidersList );
              v5 = v25;
            }
          }
          ++v4;
          v25 = --v5;
        }
        while ( v5 );
      }
      return ZwProtectVirtualMemory(-1LL, &v20, v21, v22, &v24);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
