/*
 * XREFs of AccelpCpuInternalOperationHandler @ 0x1406E4A28
 * Callers:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 * Callees:
 *     AccelpWaitForCompletionBusySpin @ 0x140526FC4 (AccelpWaitForCompletionBusySpin.c)
 *     AccelpSubmitWorkToCpu @ 0x1406E4BE4 (AccelpSubmitWorkToCpu.c)
 */

__int64 __fastcall AccelpCpuInternalOperationHandler(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // r8d
  _BYTE *v10; // rdx
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  char v23; // [rsp+30h] [rbp+8h]

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    v3 = *(_QWORD *)(v4 + 16);
  v5 = *(_DWORD *)a1;
  if ( *(int *)a1 > 256 )
  {
    v11 = v5 - 257;
    if ( !v11 )
    {
      v18 = *(_QWORD *)(a1 + 32);
      v19 = *(_QWORD *)(a1 + 64);
      v20 = *(unsigned __int8 *)(a1 + 72);
      v21 = *(_QWORD *)(a1 + 56);
      *(_BYTE *)(v18 + 7) = 3;
      *(_QWORD *)(v18 + 24) = v21;
      *(_QWORD *)(v18 + 16) = v20;
      *(_DWORD *)(v18 + 32) = v19;
      return 0;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          return (unsigned int)-1073741637;
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + 7LL) = 0;
        return 0;
      }
      v14 = *(_QWORD *)(a1 + 32);
      v15 = *(_QWORD *)(a1 + 72);
      v16 = *(_QWORD *)(a1 + 64);
      v17 = *(_QWORD *)(a1 + 56);
      *(_BYTE *)(v14 + 7) = 4;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 32);
      v15 = *(_QWORD *)(a1 + 72);
      v16 = *(_QWORD *)(a1 + 64);
      v17 = *(_QWORD *)(a1 + 56);
      *(_BYTE *)(v14 + 7) = 2;
    }
    *(_QWORD *)(v14 + 16) = v17;
    *(_QWORD *)(v14 + 24) = v16;
    *(_DWORD *)(v14 + 32) = v15;
    return 0;
  }
  if ( v5 == 256 )
    return (unsigned int)-1073741637;
  if ( !v5 )
  {
    *a2 = 64;
    a2[1] = 64;
    a2[2] = 64;
    return 0;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6 - 1;
  if ( !v7 )
    return (unsigned int)AccelpWaitForCompletionBusySpin(
                           *(_DWORD *)(v3 + 184),
                           *(_DWORD *)(v3 + 188),
                           *(_QWORD *)(a1 + 40));
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(_BYTE **)(a1 + 40);
    v23 = *v10 & 0x3F;
    if ( !v23 )
      return 259;
    if ( v23 != 1 )
      return (unsigned int)-1073741823;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 32) + 7LL) == 4 )
      return v10[1] != 0 ? 0xC0000001 : 0;
    return 0;
  }
  if ( v8 != 2 )
    return (unsigned int)-1073741637;
LABEL_18:
  if ( (**(_BYTE **)(a1 + 40) & 0x3F) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = AccelpSubmitWorkToCpu(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
    if ( *(_DWORD *)a1 == 5 )
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) |= 1uLL;
  }
  return v9;
}
