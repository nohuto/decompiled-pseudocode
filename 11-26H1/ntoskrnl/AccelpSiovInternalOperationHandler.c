/*
 * XREFs of AccelpSiovInternalOperationHandler @ 0x14050B5F8
 * Callers:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 * Callees:
 *     AccelpSiovWaitForCompletionUMWait @ 0x1404ADFF0 (AccelpSiovWaitForCompletionUMWait.c)
 *     AccelpSiovDsaOperationHandler @ 0x1404B90F4 (AccelpSiovDsaOperationHandler.c)
 *     AccelpWaitForCompletionBusySpin @ 0x140526FC4 (AccelpWaitForCompletionBusySpin.c)
 *     AccelpQatOperationHandler @ 0x1406E3C44 (AccelpQatOperationHandler.c)
 *     AccelpSiovIaaOperationHandler @ 0x1406E4274 (AccelpSiovIaaOperationHandler.c)
 *     AccelpSiovSubmitWork @ 0x1406E48D8 (AccelpSiovSubmitWork.c)
 *     AccelpSiovUpdateStatsOnSubmitWork @ 0x1406E492C (AccelpSiovUpdateStatsOnSubmitWork.c)
 *     QatSubmitWorkToCpu @ 0x1406E5330 (QatSubmitWorkToCpu.c)
 *     DsaSubmitWorkToCpu @ 0x1406E54B0 (DsaSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E59C8 (IaaSubmitWorkToCpu.c)
 */

__int64 __fastcall AccelpSiovInternalOperationHandler(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  char v4; // bl
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  bool v13; // al
  int v14; // eax
  unsigned int v20; // ecx
  _QWORD *v21; // r14
  _QWORD *v22; // r9
  int v23; // eax
  int v24; // eax
  char v26; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 16);
  v6 = *(_DWORD *)a1 - 1;
  if ( !v6 )
  {
LABEL_14:
    v11 = *(_DWORD *)(v3 + 184);
    v12 = *(_QWORD *)(a1 + 40);
    switch ( v11 )
    {
      case 1:
        if ( *(_DWORD *)(v3 + 188) != 1 && *(_DWORD *)(v3 + 188) != 2 )
        {
          if ( *(_DWORD *)(v3 + 188) != 3 )
            goto LABEL_34;
          v13 = *(_BYTE *)(v12 + 6) != 1;
          goto LABEL_32;
        }
        break;
      case 2:
        if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
          v26 = 2;
        else
          v26 = *(_QWORD *)v12 != 0LL;
        goto LABEL_31;
      case 3:
        break;
      default:
        goto LABEL_34;
    }
    v26 = *(_BYTE *)v12 & 0x3F;
LABEL_31:
    v13 = v26;
LABEL_32:
    if ( v13 )
      return (unsigned int)-1073741811;
LABEL_34:
    if ( v4 )
    {
      v22 = (_QWORD *)(a1 + 32);
    }
    else
    {
      v21 = (_QWORD *)(a1 + 32);
      v10 = AccelpSiovSubmitWork(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 32));
      if ( v10 >= 0 )
      {
LABEL_49:
        if ( v10 != 259 && (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 152LL) & 1) != 0 )
          AccelpSiovUpdateStatsOnSubmitWork(*(_QWORD *)(a1 + 8), *v21);
        return (unsigned int)v10;
      }
      v22 = (_QWORD *)(a1 + 32);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 36LL) & 4) == 0 )
      {
LABEL_48:
        if ( v10 < 0 )
          return (unsigned int)v10;
        goto LABEL_49;
      }
    }
    v23 = *(_DWORD *)(v3 + 188);
    switch ( v23 )
    {
      case 1:
        v24 = DsaSubmitWorkToCpu(*v22, *(_QWORD *)(a1 + 40));
        break;
      case 2:
        v24 = IaaSubmitWorkToCpu(*v22, *(_QWORD *)(a1 + 40), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
        break;
      case 3:
        v24 = QatSubmitWorkToCpu(*v22, *(_QWORD *)(a1 + 40), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
        break;
      default:
        v10 = -1073741637;
        goto LABEL_47;
    }
    v10 = v24;
LABEL_47:
    v21 = (_QWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) |= 1uLL;
    goto LABEL_48;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    LOBYTE(v14) = AccelUMWaitSupported;
    if ( AccelUMWaitSupported == -1 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      v14 = ((unsigned __int8)_RCX >> 5) & 1;
      AccelUMWaitSupported = v14;
    }
    v20 = *(_DWORD *)(v3 + 188);
    if ( (_BYTE)v14 )
      return (unsigned int)AccelpSiovWaitForCompletionUMWait(v20, *(_BYTE **)(a1 + 40));
    else
      return (unsigned int)AccelpWaitForCompletionBusySpin(*(unsigned int *)(v3 + 184), v20, *(_QWORD *)(a1 + 40));
  }
  if ( v7 == 3 )
  {
    v4 = 1;
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(v3 + 188);
  switch ( v8 )
  {
    case 1:
      return (unsigned int)AccelpSiovDsaOperationHandler((int *)a1, a2);
    case 2:
      return (unsigned int)AccelpSiovIaaOperationHandler(a1);
    case 3:
      return (unsigned int)AccelpQatOperationHandler(a1);
  }
  return (unsigned int)-1073741637;
}
