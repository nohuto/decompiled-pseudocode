/*
 * XREFs of LdrpInitializeGraphRecurse @ 0x1800E73B0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     LdrpInitializeShimDllDependencies @ 0x180118DCC (LdrpInitializeShimDllDependencies.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 */

__int64 __fastcall LdrpInitializeGraphRecurse(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 **v7; // rdi
  __int64 **v8; // rbx
  __int64 *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == -4 )
    return 3221225794LL;
  v7 = (__int64 **)a1[5];
  v13 = 0;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v8 = (__int64 **)*v8;
      if ( ((_BYTE)v8[3] & 1) == 0 )
      {
        v9 = v8[1];
        v10 = *((_DWORD *)v9 + 14);
        switch ( v10 )
        {
          case 7:
            result = LdrpInitializeGraphRecurse(v9, a2, &v13);
            if ( (int)result < 0 )
              goto LABEL_19;
            break;
          case -4:
            result = 3221225794LL;
            goto LABEL_19;
          case 8:
            v13 = 1;
            break;
        }
      }
    }
    while ( v8 != v7 );
    if ( v13 )
    {
      v11 = *a1;
      *a3 = 1;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( a2 != *(_QWORD *)(v12 + 40) )
          return 0LL;
      }
    }
  }
  result = LdrpInitializeNode(a1);
  if ( (int)result < 0 )
LABEL_19:
    *((_DWORD *)a1 + 14) = -4;
  return result;
}
