/*
 * XREFs of ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18006CD7C
 * Callers:
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x180037160 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1800646B0 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18006CE38 (-CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x18006CEC0 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(unsigned int **this, unsigned int a2)
{
  const char *v4; // r9
  unsigned int *v5; // rdx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadIsDispatcher((Microsoft::BamoImpl::BaseBamoConnectionImpl *)this) )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
      (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
      a2);
  }
  else
  {
    try
    {
      v5 = this[25];
      if ( v5 == this[26] )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(this + 24, (__int64)v5, (int *)&v9);
      }
      else
      {
        *v5 = a2;
        ++this[25];
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4C1,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v4);
    }
    if ( !*((_BYTE *)this + 219) )
    {
      _InterlockedIncrement((volatile signed __int32 *)this[12] + 2);
      v6 = (*(__int64 (__fastcall **)(unsigned int *, __int64 (__fastcall *)(Microsoft::BamoImpl::BaseBamoConnectionImpl *), unsigned int **, __int64))(*(_QWORD *)this[6] + 152LL))(
             this[6],
             Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback,
             this,
             4LL);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4CC,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v6,
          v7);
      *((_BYTE *)this + 219) = 1;
    }
  }
}
