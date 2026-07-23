/*
 * XREFs of AccelpWaitForCompletionBusySpin @ 0x140526FC4
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 *     AccelpCpuInternalOperationHandler @ 0x1406E4A28 (AccelpCpuInternalOperationHandler.c)
 *     AccelpSdxiInternalOperationHandler @ 0x1406E4C90 (AccelpSdxiInternalOperationHandler.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 */

__int64 __fastcall AccelpWaitForCompletionBusySpin(int a1, int a2, __int64 a3)
{
  bool v6; // al
  char v8; // [rsp+30h] [rbp+8h]

  while ( 1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          v8 = 2;
        else
          v8 = *(_QWORD *)a3 != 0LL;
      }
      else
      {
        if ( a1 != 3 )
          goto LABEL_14;
LABEL_11:
        v8 = *(_BYTE *)a3 & 0x3F;
      }
      v6 = v8;
      goto LABEL_13;
    }
    if ( a2 == 1 || a2 == 2 )
      goto LABEL_11;
    if ( a2 != 3 )
      goto LABEL_14;
    v6 = *(_BYTE *)(a3 + 6) != 1;
LABEL_13:
    if ( v6 )
      return 0LL;
LABEL_14:
    KeStallExecutionProcessor(1u);
  }
}
