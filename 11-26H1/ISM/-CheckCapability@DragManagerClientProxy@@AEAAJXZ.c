/*
 * XREFs of ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004CDEC
 * Callers:
 *     ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18004C630 (-OnConnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18004D384 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180095C24 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DragManagerClientProxy::CheckCapability(DragManagerClientProxy *this)
{
  __int64 v2; // rax
  Microsoft::Bamo::BaseBamoConnection *v3; // rcx
  struct IMessageSession *Session; // rax
  __int64 result; // rax
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // edi
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  Session = Microsoft::Bamo::BaseBamoConnection::GetSession(v3);
  result = (*(__int64 (__fastcall **)(struct IMessageSession *))(*(_QWORD *)Session + 328LL))(Session);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v10 = 0;
    v7 = CapabilityCheck(-6LL, L"shellExperienceComposer", &v10);
    if ( v7 < 0 )
    {
      v9 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v7, v8);
      if ( !v6 )
        RevertToSelf();
      return v9;
    }
    else if ( v10 )
    {
      *((_BYTE *)this + 144) = 1;
      if ( !v6 )
        RevertToSelf();
      return 0LL;
    }
    else
    {
      if ( !v6 )
        RevertToSelf();
      return 2147942405LL;
    }
  }
  return result;
}
