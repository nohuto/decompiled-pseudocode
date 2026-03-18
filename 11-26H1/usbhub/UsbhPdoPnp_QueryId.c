/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1400236A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhReleasePdoUxdLock @ 0x140022938 (UsbhReleasePdoUxdLock.c)
 *     UsbhAcquirePdoUxdLock @ 0x140039DF4 (UsbhAcquirePdoUxdLock.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039E34 (UsbhPdoPnp_EnablePdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x140061CC0 (memmove.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v3; // rbp
  _DWORD *v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // esi
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int Length; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  _DWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  _DWORD *v20; // rbx
  __int64 v21; // rax
  __int64 Pool2; // rax
  unsigned __int64 v23; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0LL;
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  v8 = v5;
  UsbhAcquirePdoUxdLock(v9, a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v12 = Length - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 2 )
          {
            if ( *((_BYTE *)v8 + 2732) )
            {
              GuidString = 0LL;
              Status = RtlStringFromGUID((const GUID *const)(v8 + 679), &GuidString);
              if ( Status >= 0 )
              {
                Status = 0;
                a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
              }
            }
          }
          goto LABEL_9;
        }
        if ( *((_QWORD *)v8 + 267) )
        {
          v10 = 532LL;
          v3 = (v8[355] & 0x200000) != 0 ? 0xC : 0;
        }
        else
        {
          v10 = 536LL;
        }
      }
      else
      {
        v10 = 528LL;
      }
    }
    else
    {
      v10 = 524LL;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v17 = PdoExt(a1);
      v18 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v8 + 148), (__int64)(v17 + 236), a1, 1346728819, 1);
      KeWaitForSingleObject(v8 + 724, Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v8 + 724), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*((_QWORD *)v8 + 148), v19, v18);
    }
    v10 = 520LL;
  }
  v20 = &v8[v10];
  if ( !&v8[v10] || (v21 = (unsigned int)v20[1], !(_DWORD)v21) || !*((_QWORD *)v20 + 1) )
  {
LABEL_9:
    if ( !CurrentStackLocation->Parameters.Read.Length )
      Status = -1073741670;
    v15 = Status;
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(256LL, v21 + v3, 1112885333LL);
  v23 = Pool2;
  if ( Pool2 )
  {
    if ( v3 )
    {
      *(_QWORD *)Pool2 = *(_QWORD *)L"MSFT30";
      *(_DWORD *)(Pool2 + 8) = *(_DWORD *)L"30";
    }
    memmove((void *)(Pool2 + v3), *((const void **)v20 + 1), (unsigned int)v20[1]);
    a2->IoStatus.Information = v23;
    v15 = 0;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_12:
  UsbhReleasePdoUxdLock(v10 * 4, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      v15);
  a2->IoStatus.Status = v15;
  IofCompleteRequest(a2, 0);
  return v15;
}
