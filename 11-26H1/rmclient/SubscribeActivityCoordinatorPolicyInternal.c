/*
 * XREFs of SubscribeActivityCoordinatorPolicyInternal @ 0x18001A04C
 * Callers:
 *     SubscribeActivityCoordinatorPolicy @ 0x180019E30 (SubscribeActivityCoordinatorPolicy.c)
 * Callees:
 *     MIDL_user_allocate @ 0x180002250 (MIDL_user_allocate.c)
 *     CrmActivityAllocateInternal @ 0x180004990 (CrmActivityAllocateInternal.c)
 *     AcpAcquireClientRegistration @ 0x180019E5C (AcpAcquireClientRegistration.c)
 *     UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001A1B0 (UnsubscribeActivityCoordinatorPolicyInternal.c)
 */

__int64 __fastcall SubscribeActivityCoordinatorPolicyInternal(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 i; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  int Internal; // ebx
  __int64 v13; // rdx
  int v14; // eax

  if ( a2 )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(a1 + 4 * i) != 2 )
      {
        v9 = MIDL_user_allocate(0x28uLL);
        v10 = (__int64)v9;
        if ( v9 )
        {
          *v9 = 0LL;
          v9[1] = 0LL;
          v9[4] = 0LL;
          v9[2] = a2;
          v9[3] = a3;
          Internal = AcpAcquireClientRegistration(v9);
          if ( Internal < 0 )
            goto LABEL_15;
          Internal = CrmActivityAllocateInternal(
                       (struct _CRMP_ACTIVITY_CONTEXT **)(v10 + 8),
                       *(_QWORD *)v10,
                       0x515u,
                       a1,
                       (__int64)L"ActivityCoordinator Adapter Callback",
                       0LL,
                       (__int64)AcpActivityCallback,
                       v10);
          if ( Internal < 0 )
            goto LABEL_15;
          v13 = *(_QWORD *)(v10 + 8);
          if ( *(_QWORD *)(v13 + 48) )
            __int2c();
          v14 = RtlSubscribeWnfStateChangeNotification(
                  v13 + 48,
                  *(_QWORD *)(v13 + 40),
                  0LL,
                  CrmpActivityWNFCallback,
                  v13,
                  0LL,
                  0,
                  0);
          Internal = 0;
          if ( v14 < 0 )
            Internal = v14;
          if ( Internal >= 0 )
          {
            *a4 = v10;
            return 0;
          }
          else
          {
LABEL_15:
            v11 = Internal | 0x10000000;
            UnsubscribeActivityCoordinatorPolicyInternal(v10);
          }
        }
        else
        {
          return (unsigned int)-2147024882;
        }
        return v11;
      }
    }
  }
  return (unsigned int)-2147024809;
}
