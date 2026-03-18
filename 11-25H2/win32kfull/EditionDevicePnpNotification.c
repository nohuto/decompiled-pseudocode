/*
 * XREFs of EditionDevicePnpNotification @ 0x14011D320
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x14011D5FC (PostDeviceNotification.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026E0E8 (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4B98 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4BD0 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4C08 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB2C (-OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB54 (-OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(struct DEVICEINFO **a1)
{
  int v1; // eax
  __int64 v3; // rdi
  int v4; // ebp
  struct DEVICEINFO *v5; // rbx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v10; // rcx
  int v11; // eax
  int v12; // eax

  v1 = *((_DWORD *)a1 + 5);
  v3 = 0LL;
  v4 = 0;
  if ( v1 == 2 )
  {
    v3 = 1LL;
  }
  else if ( *((_DWORD *)a1 + 5) == 3 )
  {
    v3 = 2LL;
  }
  v5 = *a1;
  v6 = *((_DWORD *)*a1 + 12);
  if ( v6 == 2 )
  {
    v4 = *((_DWORD *)a1 + 4);
    v7 = v1 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v12 = *((_DWORD *)v5 + 46);
            if ( (v12 & 0x100) != 0 )
            {
              OnInteractiveControlDeviceRemoved((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 72) & -(__int64)(v5 != 0LL)));
            }
            else if ( (v12 & 0x200) != 0 )
            {
              InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 72) & -(__int64)(v5 != 0LL)));
            }
          }
        }
        else if ( (*((_DWORD *)v5 + 46) & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 72) & -(__int64)(v5 != 0LL)));
        }
      }
      else if ( (*((_DWORD *)v5 + 46) & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 72) & -(__int64)(v5 != 0LL)));
      }
    }
    else if ( v5 )
    {
      v11 = *((_DWORD *)v5 + 46);
      if ( (v11 & 0x100) != 0 )
      {
        OnInteractiveControlDeviceAttached((struct DEVICEINFO *)((char *)v5 - 72));
      }
      else if ( (v11 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct DEVICEINFO *)((char *)v5 - 72));
      }
    }
  }
  else if ( !v6 && v1 == 4 )
  {
    v10 = (void *)*((_QWORD *)v5 + 110);
    if ( v10 )
    {
      Win32FreePool(v10);
      *((_QWORD *)v5 + 110) = 0LL;
      *((_WORD *)v5 + 437) = 0;
    }
  }
  if ( v3 )
  {
    PostDeviceNotification(0LL, *a1, v4, 0);
    if ( (*((_DWORD *)*a1 + 42) & 0x2000) != 0 && (unsigned __int64)(v3 - 1) <= 1 )
      ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  }
}
