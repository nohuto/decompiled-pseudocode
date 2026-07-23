/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x140850A14
 * Callers:
 *     PspSiloLoadApiSets @ 0x1407F557C (PspSiloLoadApiSets.c)
 * Callees:
 *     ApiSetReleaseSchema @ 0x1406DD040 (ApiSetReleaseSchema.c)
 *     ApiSetGetSchemaVersion @ 0x1406DD05C (ApiSetGetSchemaVersion.c)
 *     ApiSetIsSchemaSealed @ 0x1406DDE28 (ApiSetIsSchemaSealed.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ApiSetLoadSchemaEx @ 0x1408508F4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140850CEC (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x140850FAC (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, __int64 *a2, size_t *a3)
{
  int SchemaExtensions; // ebx
  void *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  size_t v9; // rax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  size_t v12; // [rsp+28h] [rbp-8h] BYREF
  void *v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  Handle = (HANDLE)-1LL;
  v13 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v13, &v12);
  if ( SchemaExtensions >= 0 )
  {
    if ( (unsigned __int16)ApiSetGetSchemaVersion((__int64)v13) > 0x700u )
    {
      SchemaExtensions = -1073700510;
      goto LABEL_14;
    }
    if ( ApiSetIsSchemaSealed((__int64)v6) )
      goto LABEL_12;
    v8 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
    if ( v8 >= 0 )
    {
      SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
    }
    else
    {
      SchemaExtensions = 0;
      if ( v8 != -1073741772 )
        SchemaExtensions = v8;
    }
    if ( SchemaExtensions >= 0 )
    {
      v7 = (__int64)v13;
LABEL_12:
      v9 = v12;
      *a2 = v7;
      v6 = 0LL;
      v13 = 0LL;
      *a3 = v9;
      goto LABEL_14;
    }
  }
  v6 = v13;
LABEL_14:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    v6 = v13;
  }
  if ( v6 )
    ApiSetReleaseSchema(v6);
  return (unsigned int)SchemaExtensions;
}
