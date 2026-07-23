/*
 * XREFs of ViXdvDriverLoadImage @ 0x140B7A9D0
 * Callers:
 *     VfDriverLoadSucceeded @ 0x1404B3520 (VfDriverLoadSucceeded.c)
 *     ViLogAndLoadXdv @ 0x140B73B60 (ViLogAndLoadXdv.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x1406051E4 (ViXdvSetXdvKernelUtilities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     strcmp @ 0x1406B5100 (strcmp.c)
 *     ViXdvGetFuncAddress @ 0x140B7AB90 (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  char *v1; // r14
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  char *v5; // r15
  char v6; // bl
  const char *v7; // rbp
  __int64 FuncAddress; // rax
  __int64 v9; // rcx
  ULONG v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  v2 = RtlImageDirectoryEntryToData(v1, 1u, 0, &v11);
  v3 = v2;
  if ( v2 && v2[6] )
  {
    v4 = 0LL;
    v5 = &v1[v2[8]];
    v6 = 1;
    while ( 1 )
    {
      v7 = &v1[*(unsigned int *)&v5[4 * v4]];
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
        guard_dispatch_icall_no_overrides(v9);
      }
LABEL_22:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3[6] )
        return v6;
    }
  }
  return 0;
}
