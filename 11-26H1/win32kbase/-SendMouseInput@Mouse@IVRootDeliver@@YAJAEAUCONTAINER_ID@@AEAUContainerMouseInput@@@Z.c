/*
 * XREFs of ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x14022172C
 * Callers:
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x140221860 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::SendMouseInput(
        IVRootDeliver::Mouse *this,
        struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3)
{
  int v4; // r14d
  __int64 UserSessionState; // rax
  int v6; // edx
  int v7; // r8d
  const struct ContainerMouseInput *v8; // r9
  __int64 v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // esi
  char v12; // dl
  __int64 v13; // rcx
  const struct CONTAINER_ID *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+3Ch] [rbp-14h]
  int v22; // [rsp+44h] [rbp-Ch]
  char v24; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h]

  v4 = 0;
  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)a3);
  if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 3096) + 1272LL), v6, v7) )
  {
    v9 = *(_QWORD *)a2;
    v10 = 1;
    v11 = *((_DWORD *)a2 + 2);
    v12 = 0;
    v24 = 0;
    v13 = *(_QWORD *)a2;
    v25 = *(_QWORD *)a2;
    v14 = *(const struct CONTAINER_ID **)(*(_QWORD *)a2 + 24LL);
    if ( v11 )
    {
      do
      {
        v15 = (unsigned __int64)v10 << 6;
        v16 = v15 + v9;
        if ( *(const struct CONTAINER_ID **)(v15 + v9 + 24) != v14 || v10 == v11 )
        {
          v19 = v13;
          v20 = (__int64)(v9 + v15 - v13) >> 6;
          v22 = 0;
          v21 = 0LL;
          if ( !v12 && *((_BYTE *)a2 + 20) )
          {
            v17 = *((_DWORD *)a2 + 5);
            v21 = *(_QWORD *)((char *)a2 + 12);
            v22 = v17;
            v24 = 1;
          }
          v4 = IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(this, v14, &v19, v8);
          if ( v4 < 0 )
            return (unsigned int)v4;
          v12 = v24;
          if ( v10 == v11 )
          {
            v13 = v25;
          }
          else
          {
            v14 = *(const struct CONTAINER_ID **)(v16 + 24);
            v13 = v16;
            v25 = v16;
          }
        }
        v11 = *((_DWORD *)a2 + 2);
        ++v10;
      }
      while ( v10 <= v11 );
    }
  }
  return (unsigned int)v4;
}
