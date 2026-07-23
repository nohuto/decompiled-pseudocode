/*
 * XREFs of PspSiloLoadApiSets @ 0x1407F557C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     ApiSetReleaseSchema @ 0x1406DD040 (ApiSetReleaseSchema.c)
 *     PspApiSetCopyToSystemSpace @ 0x1407F43A8 (PspApiSetCopyToSystemSpace.c)
 *     PspQueryForwardersEnabled @ 0x1407F6440 (PspQueryForwardersEnabled.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140850A14 (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0LL;
  v7[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v10 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v7[0] = 4980810LL;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v10, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[125] = v10;
      ServerSiloGlobals[126] = v6;
      *((_BYTE *)ServerSiloGlobals + 1016) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema(Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
