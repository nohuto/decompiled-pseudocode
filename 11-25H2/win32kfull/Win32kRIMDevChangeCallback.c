/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1401F5000
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x14011D5FC (PostDeviceNotification.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1401F52B8 (RIMDevChangeDoUsermodeCallback.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026E0E8 (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     IsPublicPointerDevice @ 0x14028DA58 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x14028DA80 (UpdatePointerDeviceCount.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4B98 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4BD0 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4C08 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB2C (-OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB54 (-OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct DEVICEINFO *v4; // rdi
  unsigned int v5; // ebp
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 updated; // r8
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v1 + 528);
  v4 = (struct DEVICEINFO *)((v1 + 72) & -(__int64)(v1 != 0));
  v5 = 0;
  v6 = *(_DWORD *)(W32GetUserSessionState(a1, v1 + 72) + 16688);
  RIMDevChangeDoUsermodeCallback(a1);
  if ( (*(_DWORD *)(v1 + 240) & 0x10000) != 0 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      LOBYTE(v7) = 19;
      v16 = (_QWORD *)HMCreateHandleForObject(v4, v7);
      if ( !v16 )
        goto LABEL_34;
      if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v1 + 256) & 0x80u) != 0 )
      {
        LOBYTE(v15) = 22;
        v17 = HMCreateHandleForObject(v3, v15);
        v18 = v17;
        if ( !v17 )
        {
          HMMarkObjectDestroy(v16);
          HMRemoveHandleForObject(v16);
LABEL_34:
          v19 = *(_DWORD *)(v1 + 256);
          if ( (v19 & 0x100) != 0 )
          {
            OnInteractiveControlDeviceAttached((struct RawInputManagerDeviceObject *)v1);
          }
          else if ( (v19 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v1);
          }
          return;
        }
        HMLockObject(v17);
        *(_QWORD *)(v18 + 792) = *v16;
      }
      RawInputManagerDeviceObjectReference(v1);
      goto LABEL_34;
    case 2:
      v12 = IsPublicPointerDevice(v4, v7, 0LL);
      v14 = (unsigned int)(updated + 1);
      if ( v12 )
        updated = (unsigned int)UpdatePointerDeviceCount((unsigned int)v14);
      PostDeviceNotification(0LL, v4, updated, v14, updated, 0);
      if ( (*(_DWORD *)(v1 + 256) & 0x200) != 0 )
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v1);
      break;
    case 3:
      if ( (*(_DWORD *)(((v1 + 72) & -(__int64)(v1 != 0)) + 0xA8) & 0x2000) != 0 )
      {
        UpdatePointerDeviceCount(2LL);
        PostDeviceNotification(0LL, v4, v10, 2uLL, v6 + 1, 0);
      }
      else
      {
        if ( (unsigned int)IsPublicPointerDevice(v4, v7, v8) )
        {
          v5 = v6 + 1;
          UpdatePointerDeviceCount(2LL);
        }
        PostDeviceNotification(0LL, v4, v11, 2uLL, v5, 0);
      }
      if ( (*(_DWORD *)(v1 + 256) & 0x200) != 0 )
        InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v1);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v1 + 256) & 0x80u) != 0 )
      {
        HMUnlockObject(v3);
        if ( *(_DWORD *)(v3 + 8) || !(unsigned int)HMMarkObjectDestroy(v3) )
        {
LABEL_13:
          v9 = *(_DWORD *)(v1 + 256);
          if ( (v9 & 0x100) != 0 )
          {
            OnInteractiveControlDeviceRemoved((struct RawInputManagerDeviceObject *)v1);
          }
          else if ( (v9 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v1);
          }
          return;
        }
        HMRemoveHandleForObject(v3);
      }
      if ( (unsigned int)HMMarkObjectDestroy(v4) )
        HMRemoveHandleForObject(v4);
      goto LABEL_13;
    default:
      return;
  }
}
