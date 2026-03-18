/*
 * XREFs of ViXdvDriverLoadImage @ 0x140C285C4
 * Callers:
 *     VfDriverLoadSucceeded @ 0x1404F4E4C (VfDriverLoadSucceeded.c)
 *     ViLogAndLoadXdv @ 0x140C21F34 (ViLogAndLoadXdv.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x1406415EC (ViXdvSetXdvKernelUtilities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     strcmp @ 0x14073DC40 (strcmp.c)
 *     ViXdvGetFuncAddress @ 0x140C28784 (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  char v6; // bl
  const char *v7; // r14
  __int64 FuncAddress; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = RtlImageDirectoryEntryToData(v1, 1, 0, &v12);
  v3 = v2;
  if ( v2 && *(_DWORD *)(v2 + 24) )
  {
    v4 = 0LL;
    v5 = v1 + *(unsigned int *)(v2 + 32);
    v6 = 1;
    while ( 1 )
    {
      v7 = (const char *)(v1 + *(unsigned int *)(v5 + 4 * v4));
      if ( !strcmp("SetXdvKernelUtilities", v7) )
      {
        FuncAddress = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !FuncAddress )
        {
          VfUtilDbgPrint("Error on getting XDV utility routine.\n");
          goto LABEL_19;
        }
        if ( !ViXdvSetXdvKernelUtilities(FuncAddress) )
        {
          VfUtilDbgPrint("Error on binding utility functions.\n");
LABEL_19:
          v6 = 0;
        }
      }
      else if ( !strcmp("XdvHibernationNotification", v7) )
      {
        ViFnExtensionHiberFunc = (PVOID)ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !ViFnExtensionHiberFunc )
        {
          VfUtilDbgPrint("Error on binding XdvHibernationNotification.\n");
          goto LABEL_19;
        }
      }
      else if ( !strcmp("XdvQueryDispatchTable", v7) )
      {
        ViFnXdvQueryDispatchTable = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !ViFnXdvQueryDispatchTable )
        {
          VfUtilDbgPrint("Error on binding XdvQueryDispatchTable.\n");
          goto LABEL_19;
        }
      }
      else
      {
        if ( strcmp("XdvLoadDifPlugins", v7) )
        {
          if ( !strcmp("AutoFailInject", v7) )
          {
            ViFnAutoFailInject = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
            v6 = ViFnAutoFailInject != 0 ? v6 : 0;
          }
          goto LABEL_22;
        }
        ViFnXdvLoadDifPlugins = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !ViFnXdvLoadDifPlugins )
        {
          VfUtilDbgPrint("Error on calling XDV DIF plugins.\n");
          goto LABEL_19;
        }
        guard_dispatch_icall_no_overrides(v10, v9);
      }
LABEL_22:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 24) )
        return v6;
    }
  }
  return 0;
}
