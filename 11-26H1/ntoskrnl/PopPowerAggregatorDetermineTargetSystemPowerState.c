/*
 * XREFs of PopPowerAggregatorDetermineTargetSystemPowerState @ 0x1409BF708
 * Callers:
 *     PopPowerAggregatorHandleResumeIntent @ 0x14060E990 (PopPowerAggregatorHandleResumeIntent.c)
 *     PopPowerAggregatorHandleSystemTransitionIntent @ 0x1409BF690 (PopPowerAggregatorHandleSystemTransitionIntent.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopIsHibernateSupported @ 0x140B30758 (PopIsHibernateSupported.c)
 */

__int64 __fastcall PopPowerAggregatorDetermineTargetSystemPowerState(int a1, char a2, int *a3, __int64 a4)
{
  __int64 WriteOperationCount; // r10
  unsigned int v9; // r9d
  bool v10; // zf
  int v11; // r8d
  bool v12; // al
  bool v13; // al
  bool v14; // al
  bool v15; // al
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  _BYTE v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char v21; // [rsp+23h] [rbp-55h]
  char v22; // [rsp+24h] [rbp-54h]
  char v23; // [rsp+25h] [rbp-53h]
  char v24; // [rsp+26h] [rbp-52h]
  char v25; // [rsp+28h] [rbp-50h]
  char v26; // [rsp+36h] [rbp-42h]

  memset_0(v20, 0, 0x4CuLL);
  PopFilterCapabilities(&PpmIdlePolicyLock.Padding[1], v20);
  WriteOperationCount = PpmIdlePolicyLock.WriteOperationCount;
  v9 = 0;
  v10 = v21 == 0;
  v11 = a1;
  *(_BYTE *)(a4 + 4) = a1;
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(WriteOperationCount + 60);
  *(_DWORD *)(a4 + 12) = *(_DWORD *)(WriteOperationCount + 88);
  v12 = !v10;
  v10 = v22 == 0;
  *(_BYTE *)(a4 + 16) = v12;
  v13 = !v10;
  v10 = v23 == 0;
  *(_BYTE *)(a4 + 17) = v13;
  v14 = !v10;
  v10 = v24 == 0;
  *(_BYTE *)(a4 + 18) = v14;
  v15 = !v10;
  v10 = v25 == 0;
  *(_BYTE *)(a4 + 19) = v15;
  *(_BYTE *)(a4 + 20) = !v10;
  *(_BYTE *)(a4 + 21) = v26;
  *(_BYTE *)(a4 + 22) = PopPromoteHibernateToShutdown != 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          switch ( v11 )
          {
            case 1:
LABEL_3:
              *a3 = v11;
              *(_BYTE *)(a4 + 5) = v11;
              return v9;
            case 2:
            case 3:
            case 4:
              if ( (v21 != (_BYTE)v9 || v22 != (_BYTE)v9 || v23 != (_BYTE)v9)
                && (!a2 || *(_DWORD *)(WriteOperationCount + 60) != v9) )
              {
                goto LABEL_3;
              }
              break;
            case 5:
              if ( (unsigned __int8)PopIsHibernateSupported(v20) )
              {
                if ( !a2 || *(_DWORD *)(WriteOperationCount + 88) != v9 )
                  goto LABEL_3;
                goto LABEL_14;
              }
              break;
            case 6:
              goto LABEL_3;
          }
          if ( !a2 )
            return (unsigned int)-1073741637;
LABEL_14:
          if ( !a1 )
            break;
          v11 = 1;
        }
        if ( v11 )
          break;
        v11 = 4;
      }
      v17 = v11 - 2;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
            break;
        }
      }
      v11 = 5;
    }
    if ( v19 != 1 )
      return (unsigned int)-1073741811;
    v11 = PopPromoteHibernateToShutdown != 0 ? 6 : 1;
  }
}
