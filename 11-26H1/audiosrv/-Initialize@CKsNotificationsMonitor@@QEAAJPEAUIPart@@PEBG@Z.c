/*
 * XREFs of ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x18004FFFC
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@4@@Z @ 0x18010FD70 (-KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetop.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800502B0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CKsNotificationsMonitor::Initialize(
        CKsNotificationsMonitor *this,
        struct IUnknown *a2,
        const unsigned __int16 *a3)
{
  struct IUnknown **v6; // rcx
  __int64 v7; // rbx
  SIZE_T v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int16 v13; // ax
  struct IPart *v14; // rcx
  struct IPart *v15; // rbx
  int v16; // ebx
  struct IPart *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  v6 = (struct IUnknown **)((char *)this + 88);
  if ( *v6 != a2 )
    ATL::AtlComPtrAssign(v6, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v8 = 2 * v7 + 2;
  v9 = CoTaskMemAlloc(v8);
  v10 = v9;
  *((_QWORD *)this + 2) = v9;
  if ( v9 )
  {
    v11 = v8 >> 1;
    if ( v11 )
    {
      if ( v11 <= 0x7FFFFFFF )
      {
        v12 = 2147483646 - v11;
        do
        {
          if ( !(v12 + v11) )
            break;
          v13 = *a3;
          if ( !*a3 )
            break;
          ++a3;
          *v10++ = v13;
          --v11;
        }
        while ( v11 );
        v9 = v10 - 1;
        if ( v11 )
          v9 = v10;
      }
      *v9 = 0;
    }
    v14 = v18;
    if ( v18 != (struct IPart *)a2 )
    {
      v15 = v18;
      v14 = 0LL;
      v18 = 0LL;
      if ( a2 )
      {
        ((void (__fastcall *)(struct IUnknown *, GUID *, struct IPart **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
          &v18);
        v14 = v18;
      }
      if ( v15 )
      {
        ((void (__fastcall *)(struct IPart *))v15->lpVtbl->Release)(v15);
        v14 = v18;
      }
    }
    v16 = ((__int64 (__fastcall *)(struct IPart *, char *))v14->lpVtbl->GetLocalId)(v14, (char *)this + 8);
    if ( v16 >= 0 )
    {
      v16 = ((__int64 (__fastcall *)(struct IPart *, char *))v18->lpVtbl->GetName)(v18, (char *)this + 80);
      if ( v16 >= 0 )
      {
        v16 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CKsNotificationsMonitor *))a2->lpVtbl[4].Release)(
                a2,
                &CKsNotificationsMonitor::m_ctx,
                this);
        if ( v16 >= 0 )
          *((_DWORD *)this + 3) = 1;
      }
    }
  }
  else
  {
    v16 = -2147024882;
  }
  if ( v18 )
    ((void (__fastcall *)(struct IPart *))v18->lpVtbl->Release)(v18);
  return (unsigned int)v16;
}
