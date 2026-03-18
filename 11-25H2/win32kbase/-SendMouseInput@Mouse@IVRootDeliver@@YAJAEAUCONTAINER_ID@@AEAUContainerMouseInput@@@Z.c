/*
 * XREFs of ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x14021DFB8
 * Callers:
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402205A4 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x14021E0EC (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::SendMouseInput(
        IVRootDeliver::Mouse *this,
        struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3)
{
  int v4; // r14d
  __int64 UserSessionState; // rax
  const struct ContainerMouseInput *v6; // r9
  __int64 v7; // r15
  unsigned int v8; // edi
  unsigned int v9; // esi
  char v10; // dl
  __int64 v11; // rcx
  const struct CONTAINER_ID *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+3Ch] [rbp-14h]
  int v20; // [rsp+44h] [rbp-Ch]
  char v22; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A8h] [rbp+58h]

  v4 = 0;
  UserSessionState = W32GetUserSessionState(this, a2);
  if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 3096) + 1272LL)) )
  {
    v7 = *(_QWORD *)a2;
    v8 = 1;
    v9 = *((_DWORD *)a2 + 2);
    v10 = 0;
    v22 = 0;
    v11 = *(_QWORD *)a2;
    v23 = *(_QWORD *)a2;
    v12 = *(const struct CONTAINER_ID **)(*(_QWORD *)a2 + 24LL);
    if ( v9 )
    {
      do
      {
        v13 = (unsigned __int64)v8 << 6;
        v14 = v13 + v7;
        if ( *(const struct CONTAINER_ID **)(v13 + v7 + 24) != v12 || v8 == v9 )
        {
          v17 = v11;
          v18 = (__int64)(v7 + v13 - v11) >> 6;
          v20 = 0;
          v19 = 0LL;
          if ( !v10 && *((_BYTE *)a2 + 20) )
          {
            v15 = *((_DWORD *)a2 + 5);
            v19 = *(_QWORD *)((char *)a2 + 12);
            v20 = v15;
            v22 = 1;
          }
          v4 = IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(this, v12, &v17, v6);
          if ( v4 < 0 )
            return (unsigned int)v4;
          v10 = v22;
          if ( v8 == v9 )
          {
            v11 = v23;
          }
          else
          {
            v12 = *(const struct CONTAINER_ID **)(v14 + 24);
            v11 = v14;
            v23 = v14;
          }
        }
        v9 = *((_DWORD *)a2 + 2);
        ++v8;
      }
      while ( v8 <= v9 );
    }
  }
  return (unsigned int)v4;
}
