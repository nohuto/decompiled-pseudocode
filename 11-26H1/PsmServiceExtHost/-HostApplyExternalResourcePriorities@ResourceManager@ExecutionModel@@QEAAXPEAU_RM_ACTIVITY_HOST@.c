/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800338CC
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033840 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003E730 (-RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800896DC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v6; // rdi
  struct ExecutionModel::ResourceManager *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  unsigned int j; // ecx

  v3 = (_QWORD *)(*((_QWORD *)this + 3) + 40LL);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = i[2];
    if ( a2 == *(struct _RM_ACTIVITY_HOST **)(v6 + 1336) )
    {
      if ( RmHamHostIsMemoryRequired(a2) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6) )
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v7,
          2u,
          0x32u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 72),
          a2);
        v8 = 3LL;
        v9 = v6 + 160;
        while ( v8 < 50 )
        {
          if ( *(_BYTE *)(v9 + 5) && *(_DWORD *)v9 == 101 )
          {
            v10 = *(_DWORD *)(v6 + 1280);
            if ( v10 == 2 && *(_QWORD *)(v9 - 8) )
            {
              ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v6, 0);
              break;
            }
            if ( v10 == 1 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
              break;
            }
          }
          ++v8;
          v9 += 24LL;
        }
      }
      else
      {
        for ( j = 3; j <= 0x31; ++j )
        {
          if ( *(_DWORD *)(v6 + 24LL * j + 72) == j && !*(_BYTE *)(v6 + 24LL * j + 93) )
            goto LABEL_24;
        }
        if ( *(_DWORD *)(v6 + 1280) == 1 )
          continue;
LABEL_24:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      }
    }
  }
  if ( (*((_BYTE *)this + 160) & 2) == 0 )
    TpPostWork(*((_QWORD *)this + 19));
}
