/*
 * XREFs of AVrfpDetectVerifiedExports @ 0x1800C44CC
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800C43F0 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

char __fastcall AVrfpDetectVerifiedExports(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char v3; // si
  __int64 v4; // rbp
  char **v6; // rbx
  bool v7; // zf
  char *v8; // rcx
  size_t v9; // rax
  _STRING ProcedureName; // [rsp+30h] [rbp-28h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  PVOID ProcedureAddress; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 24);
  v3 = 0;
  LODWORD(v4) = 0;
  if ( *v2 )
  {
    v6 = *(char ***)(a1 + 24);
    do
    {
      v7 = v6[1] == 0LL;
      ProcedureName = 0LL;
      ProcedureAddress = 0LL;
      if ( v7 )
      {
        v8 = *v6;
        ProcedureName.Buffer = v8;
        if ( v8 )
        {
          v9 = strlen(v8);
          if ( v9 >= 0xFFFF )
            LOWORD(v9) = -2;
          ProcedureName.Length = v9;
          ProcedureName.MaximumLength = v9 + 1;
        }
        if ( LdrGetProcedureAddressForCaller(*(PVOID *)(a2 + 48), &ProcedureName, 0, &ProcedureAddress, 1u, Callback) >= 0 )
        {
          v6[1] = (char *)ProcedureAddress;
          if ( (AVrfpDebug & 2) != 0 )
            DbgPrint("AVRF: (%ws) %s export found. \n", *(_QWORD *)(a2 + 96), *v6);
          v3 = 1;
        }
        else if ( (AVrfpDebug & 2) != 0 )
        {
          DbgPrint("AVRF: warning: did not find `%s' export in %ws . \n", *v6, *(_QWORD *)(a2 + 96));
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v6 = (char **)&v2[3 * v4];
    }
    while ( *v6 );
  }
  return v3;
}
