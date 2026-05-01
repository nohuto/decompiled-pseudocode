/*
 * XREFs of ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800896DC
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800291F8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800338CC (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180089AD8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x180089608 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::Revoke(ExecutionModel::ExternalResourceSet *this, char a2)
{
  int v2; // eax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 321);
  if ( (v2 & 1) == 0 )
  {
    *((_DWORD *)this + 321) = v2 | 1;
    v4 = *((_DWORD *)this + 338) & 0xFFFFFFFD ^ ((unsigned __int8)*((_DWORD *)this + 338) | (unsigned __int8)(2 * a2)) & 2;
    *((_DWORD *)this + 338) = v4;
    if ( (v4 & 8) == 0 )
    {
      v5 = *(_QWORD *)this;
      *((_DWORD *)this + 338) = v4 | 8;
      v6 = -100000000LL;
      (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v5 + 8))(this);
      TpSetTimer(*((_QWORD *)this + 168), &v6, 0LL, 1000LL);
      ExecutionModel::ExternalResourceSet::QueueMessage((HANDLE *)this, 1);
    }
  }
}
